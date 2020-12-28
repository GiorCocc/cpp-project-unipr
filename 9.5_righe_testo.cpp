#include<iostream>
#include<vector>

using namespace std;

int long_lines(vector <string> lista, int n)
{
    int cont = 0;
    for (string frase : lista)
    {
        int lunghezza = frase.length();
        if (lunghezza >= n) ++cont;
    }
    return cont;
}

int main()
{
    string frase;
    vector <string> lista;
    int soglia = 0;
    do{
        cout << "Scrivi: ";
        getline(cin, frase);
        if (frase != "")    lista.push_back(frase);
    }while(frase != "");


    while (soglia >= 0)
    {
        cout << "dammi una soglia";
        cin >> soglia;
        int lunghezza = long_lines(lista, soglia);
        cout << "Hai inserito " << lunghezza << " frasi di lunghezza maggiore di " << soglia << "\n";
    }
}