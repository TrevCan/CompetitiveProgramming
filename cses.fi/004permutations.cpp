#include <bits/stdc++.h>
using namespace std;

bool isBefore(int a, int b){
	//return a > b;
	if(abs(b-a) != 1){
		cout << "true " << a << "  " << b << "\n";
	}
	return abs(b-a) != 1;
}

int main() {
	int n;
	cin >> n;
	signed int numbers[n];

	for(int i = 0; i < n; i++){
		numbers[i] = i+1;
	}

	sort(numbers, numbers+n, isBefore);

	for(int i = 0; i < n; i++){
		cout << numbers[i] << " ";
	}
	return 0;
}
