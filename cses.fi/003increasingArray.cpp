#include <iostream>

using namespace std;
long long int counter = 0;
int main(){
	int n;
	cin >> n;
	long long int ns[n];
	cin >> ns[0];
	//cout << ns[0] << "\n";
	for(int i = 1; i < n; i++){
		cin >> ns[i];
		//cout << ns[i] << " -> ";
		if(ns[i] < ns[i-1]){
			counter = counter + (long long int)ns[i-1] - (long long int)ns[i];
			ns[i] = ns[i-1];
		}
		//cout << ns[i] << " | " << counter << "\n";
	}
	cout << counter;
	return 0;
}
