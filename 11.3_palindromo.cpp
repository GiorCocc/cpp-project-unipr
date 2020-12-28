#include<iostream>

using namespace std;

bool palindrome(string frase){
    int count=0;
    if (frase.length()<=1)
        return true;

    char first = frase[0];
    char last = frase[frase.length()-1];
    
    if (first!=last)
        return false;

    string inner=frase.substr(1,frase.length()-2);

    return palindrome(inner);
}

int main(){
    string frase;
    cout<<"frase: ";
    getline(cin, frase);
    if (palindrome(frase))
        cout<<"la frase e\' palindroma!"<<endl;
    else
        cout<<"la frase non e\' palindroma!"<<endl;
    
}