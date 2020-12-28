#include<iostream>
#include <vector>
// #include "g2d/canvas.hpp"

using namespace std;

int main()
{
    // g2d::init_canvas({500,500});
    vector <int> lista;
    vector <int> colori;
    int valore;
    int l, lato;
    do{
        cout<<"valore: ";
        cin >> valore;
        if (valore>0 && valore<255)
            lista.push_back(valore);
    }while(valore>0 && valore<255);
    
    for(int i=0; i<3;i++)
        for(auto el:lista)
            colori.push_back(el);

    int slice = 500/colori.size();
    cout << slice;
    // for (l=0; l<colori.size();++l)
    // {
    //     lato= 500 - slice*l;
    //     g2d::set_color({colori[l],colori[l], colori[l]});
    //     // if (lato ==0)   g2d::fill_rect({0,0, 500, 500});
    //     g2d::fill_rect({0,0, lato, lato});
    // }

    // g2d::main_loop();
}