#include<iostream>
#include<cmath>

# define M_PI 3.14159265358979323846

using namespace std;

float sphere_density(float raggio, float massa){
    float volume, densita;
    volume = (4/3)*M_PI*pow(raggio,3);
    densita = massa/volume;
    return densita;
}

int main(){
    float raggio, massa, densita;

    cout << "raggio: ";
    cin >> raggio;
    cout << "massa: ";
    cin >> massa;

    densita = sphere_density(raggio, massa);

    cout << "la densita\' della sfera e\': "<< densita<<" kg/m^3\n";
}