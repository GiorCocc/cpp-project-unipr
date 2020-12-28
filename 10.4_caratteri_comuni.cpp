#include<iostream>

using namespace std;

string common_char(string s1, string s2)
{
    string ris;
    int l1, l2;
    l1= s1.length();
    l2 = s2.length();
    for (int i =0; i<l1; ++i)
    {
        char val = s1[i];
        for(int j=0; j<l2; ++j)
        {
            if (s2[j]==val)
            {
                ris.push_back(s2[j]);
            }
                
        }
    }
    return ris;
}

int main()
{
    string s1, s2;
    string ris;
    cout<<"stringa 1";
    getline(cin, s1);
    cout<<"stringa 2";
    getline(cin, s2);
    ris = common_char(s1,s2);
    cout<<ris;
}