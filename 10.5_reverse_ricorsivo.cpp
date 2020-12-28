#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

vector<int> reverse (vector<int> v){
	vector<int> r;
	if (v.size() <=1){
		return v;
		}
	r = reverse ({v.begin()+1 , v.end()});
	r.push_back(v [0]);
	return r;
}


int main (){
    srand(time(nullptr));
	vector <int> number;
	vector<int> reversed;

    int n= 1+rand()%10;
    for (int i=0; i<n; ++i)
    {
        int val = rand()%10;
        number.push_back(val);
    }

    for (auto n:number){
		cout << n << endl;
	}

    cout<<"\n";
    
    reversed=reverse(number);

	for (auto n:reversed){
		cout << n << endl;
	}
}

