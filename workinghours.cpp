#include<iostream>
using namespace std;
int main()
{
	int time;
	cout << "Enter the hours:- " << endl;
	cin >> time;
	if (time>= 9 && time <= 18) {
		cout << "working";
	}
	else {
		cout << "leisure";
	}
	return 0;
}