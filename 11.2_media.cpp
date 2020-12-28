#include<iostream>
#include<vector>

using namespace std;

float media(vector<float> lista, int c){
    float somma, media = 0;
    for(auto el: lista)
        somma+=el;
    media= somma/c;
    return media;
}

void upper(vector<float> lista, float media)
{
    cout<<"I valori superiori alla media nell lista sono:"<<endl;
    for(auto el: lista)
        if (el>=media)
            cout<<el<<"\t";
}

int main(){
    float val, m;
    int count=0;
    vector <float> lista;
    do{
        cout<<"valore: ";
        cin>>val;
        if(val>=0)
            {
                lista.push_back(val);
                ++count;
            }
    }while(val >=0);

    m = media(lista, count);
    cout<<"la media dei valori inseriti e\': "<<m<<endl;
    upper(lista, m);
}