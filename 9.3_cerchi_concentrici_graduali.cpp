#include<iostream>
#include "g2d/canvas.hpp"

using namespace std;

int main()
{
    int n, r;
    int count = 0;
    cout << "Numero di cerchi da disegnare?" << "\n";
    cin >> n;
    r = 255/n;
    g2d::init_canvas({500,500});

    while (count < n)
    {
        g2d::set_color({255 - count*r, 0, 0});
        g2d::fill_circle({250,250}, 100 - count*10);
        ++count;
    }

    g2d::main_loop();
}
