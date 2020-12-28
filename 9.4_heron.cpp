#include<iostream>
#include <math.h>

using namespace std;

double heron(double l1, double l2, double l3)
{
    double area, s;

    s= (l1+l2+l3) / 2;
    area = sqrt(s*(s-l1)*(s-l2)*(s-l3));

    return area;
}

int main()
{
    double l1, l2, l3, area;
    cout << "Dammi il primo lato";
    cin >> l1;
    cout << "Dammi il secondo lato";
    cin >> l2;
    cout << "Dammi il terzo lato";
    cin >> l3;

    area = heron(l1, l2, l3);

    cout << "L'area del triangolo e\' " << area << "\n"; 
    
}