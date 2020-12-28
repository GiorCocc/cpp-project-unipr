#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

void stampa(vector<int> v)
{
    for(auto el:v)  cout<<el<<" ";
    cout<<endl;
}

int main()
{
    vector<int> matrice;
    vector <int> riga;
    vector <int> colonna;
    int righe, colonne, count=0;
    int count_r=0, count_c =0;
    srand(time(NULL));
    cout<<"righe: ";
    cin>>righe;
    cout<<"colonne: ";
    cin>>colonne;
    for (int i=0; i<righe*colonne;++i)
        matrice.push_back(rand()%30);

    for(auto el:matrice)    
    {
        cout<<el<<" ";
        ++count;
        if (el%3==0) ++count_r;
        if(count == colonne)
            {
                cout<<endl;
                riga.push_back(count_r);
                count=0;
                count_r=0;
            }
    }

    for (int i=0; i<colonne; ++i)
    {
        for (int j=0; j<righe; ++j)
        {
            int index=j*colonne+i;
            if (matrice[index]%3==0)
                ++count_c;
        }
        colonna.push_back(count_c);
        count_c=0;
    }
    cout<<"multipli di 3 nelle righe: "<<endl;
    stampa(riga);
    cout<<"multipli di 3 nelle colonne: "<<endl;
    stampa(colonna);
}