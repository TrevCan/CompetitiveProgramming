#include <iostream>

using namespace std;
int main() {
	long n;
	cin >> n;
	cout << n;
	while(n != 1){
		if(n%2 == 0){
			n = n / 2L;
		}
		else{
			n = n*3L + 1L;
		}
		cout << " " << n;
	}
	return 0;
}
