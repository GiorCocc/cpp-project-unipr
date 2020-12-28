#include<iostream>

using namespace std;

double slope(double x1,double y1,double x2,double y2)
{
    double m;
    m = (y2-y1) / (x2-x1);
    return m;
}

double intercept(double x1,double y1,double x2,double y2)
{
    double m = slope(x1,y1,x2,y2);
    double b = y1 - m*x1;
    return b;
}

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
    m = slope(x1,y1,x2,y2);
    b=intercept(x1,y1,x2,y2);
    cout<<"m= "<<m<<"\n";
    cout<<"b= "<<b<<"\n";

}