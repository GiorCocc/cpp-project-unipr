#include<iostream>
#include "g2d/canvas.hpp"
#include <cmath>
#include <vector>

# define M_PI 3.14159265358979323846

using namespace std;

vector<double> move_pen(double x, double y, double length, double angle) {
    auto x1 = x + cos(angle) * length;
    auto y1 = y + sin(angle) * length;
    g2d::draw_line({int(x), int(y)}, {int(x1), int(y1)});
    return {x1, y1};
}

void albero(vector <double> pos, double lunghezza, double angolo)
{
    if (lunghezza<=5)
        vector <double> position = move_pen(pos[0], pos[1], lunghezza, angolo);
    else
        {
            vector <double> position = move_pen(pos[0], pos[1],lunghezza, angolo);
            lunghezza=4*lunghezza/5;
            albero(position, lunghezza, angolo-M_PI/6);
            albero(position, lunghezza, angolo+M_PI/6);
        }
}

int main()
{
    vector <double> pos={400,800};
    double lunghezza=150;
    double angolo= -M_PI/2;

    g2d::init_canvas({800,800});
    albero(pos, lunghezza, angolo);
    g2d::main_loop();
}