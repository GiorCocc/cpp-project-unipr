#include<iostream>

using namespace std;

int main()
{
    string name, quest, color;
    cout << "What is your name?" << "\n";
    cin >> name;
    cout << "What is your quest?" << "\n";
    cin >> quest;
    cout << "What is your favorite color?" << "\n";
    cin >> color;

    if (name == "Lancelot")
    {
        cout << "Right. Off you go." << "\n";
    }
    else
    {
        cout << "Down into the Gorge of Ethernal Peril!" << "\n";
    }
}