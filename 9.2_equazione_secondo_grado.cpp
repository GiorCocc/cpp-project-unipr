#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    string scelta = "s";
    while (scelta == "s")
    {   
        cout << "a?" << "\n";
        cin >> a;
        cout << "b?" << "\n";
        cin >> b;
        cout << "c?" << "\n";
        cin >> c;

        cout << "delta="<<delta<<"\n";

        if (delta == 0)
        {
            x1 = -b/a;
            cout << "Hai solo una soluzione che corrispone a x=" << x1 << "\n";
        }
        
        if (delta < 0)  cout << "L'equazione inserita non ha soluzione" << "\n";
        if (delta > 0)
        {
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            cout << "Hai due soluzioni che corrispondono a x1=" << x1 << "e x2=" << x2 << "\n";
        }

        cout << "Vuoi controllare un'altra equazione? (s,n)" << "\n";
        cin >> scelta;
    }
}