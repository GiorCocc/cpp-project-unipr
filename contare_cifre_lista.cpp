#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include "g2d/basic.hpp"

using namespace std;

int main()
{
    srand(time(nullptr));
    vector<int>counts={};
    counts.assign(11,0);

    for (int i=0;i<100;++i)
    {
        int d1=1+rand()%6;
        int d2=1+rand()%6;
        int result = d1+d2;

        ++counts[result-2];
        // ++counts.at(result-2);
    }
    cout<<counts<<"\n";
}
