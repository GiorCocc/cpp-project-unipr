#include<iostream>
#include<math.h>

using namespace std;

class Triangle{
    double _l1, _l2,_l3;

    public:
        Triangle(double l1,double l2, double l3){
            _l1=l1;
            _l2=l2;
            _l3=l3;
        }

        double perimeter()
        {
            double p = _l1+_l2+_l3;
            return p;
        }

        double area()
        {
            double area, s;

            s= (_l1+_l2+_l3) / 2;
            area = sqrt(s*(s-_l1)*(s-_l2)*(s-_l3));

            return area;
        }
};

int main()
{
    double l1,l2,l3;
    double perimetro, area;
    cout<<"l1 ";
    cin>>l1;
    cout<<"l2 ";
    cin>>l2;
    cout<<"l3";
    cin>>l3;

    auto triangle = Triangle(l1,l2,l3);
    perimetro=triangle.perimeter();
    area=triangle.area();

    cout<<"perimetro= "<<perimetro<<" area= "<<area;

}