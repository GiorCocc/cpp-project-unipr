#include<iostream>

using namespace std;

class Segmento{
    double _x1, _y1;
    double _x2, _y2;

    public:
        Segmento(double x1,double y1, double x2,double y2){
            _x1=x1;
            _y1=y1;
            _x2=x2;
            _y2=y2;
        }
        double slope()
        {
            double m;
            m = (_y2-_y1) / (_x2-_x1);
            return m;
        }

        double intercept()
        {
            double m = slope();
            double b = _y1 - m*_x1;
            return b;
        }
};

int main()
{
    double x1,y1,x2,y2;
    double m, b;
    cout<<"x primo punto";
    cin>>x1;
    cout<<"y primo punto";
    cin>>y1;
    cout<<"x secondo punto";
    cin>>x2;
    cout<<"y secondo punto";
    cin>>y2;
    auto segmento = Segmento(x1,y1,x2,y2);
    m = segmento.slope();
    b=segmento.intercept();
    cout<<"m= "<<m<<"\n";
    cout<<"b= "<<b<<"\n";
}