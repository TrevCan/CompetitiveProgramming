#include <bits/stdc++.h>
using namespace std;

bool compatible(int a, int b){
	//return a > b;
	return abs(b-a) != 1;
}

int main() {
	int n;
	cin >> n;
	int numbers[n];
//	cout << sizeof(numbers)/sizeof(numbers[0])<<"\n";

	if(n == 1){ cout << 1; return 0;}
	if(n < 4){
		cout << "NO SOLUTION";
		return 0;
	}
	//split into halves
	int lFirst = ceil((double)n / 2), lSecond = n / 2;
//	cout << " f " << lFirst << "\n";
//	cout << " s " << lSecond << "\n";
	int number;
	if(n > 4)
		number = 1;
	else
		number = 2;
	for(int i = 0; i < lFirst; i++){
		numbers[i] = number;
		number += 2;
	}
//	cout << lFirst << "\n";

	if(n>4)
		number = 2;
	else
		number = 1;
	for(int i = 0; i < lSecond; i++){
//			cout << "hi\n";
		numbers[i+lFirst] = number;
		number += 2;
	}
	
	for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
		cout << numbers[i] << " ";
	}

	return 0;

}
