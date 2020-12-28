#include<iostream>
#include<ctime>
#include "g2d/canvas.hpp"

using namespace std;

int main()
{
    g2d::init_canvas({500,500});
    srand(time(NULL));
    int raggio = 200;
    while (raggio > 10)
    {
        int r= rand() % 255;
        int g= rand() % 255;
        int b= rand() % 255;
    
        g2d::set_color({r,g,b});
        g2d::fill_circle({250,250}, raggio);
        raggio = 1+rand()%199;
    }
    g2d::main_loop();
}