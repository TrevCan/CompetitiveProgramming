#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		long long int y, x;
		cin >> y >> x;
//		cout << x << " " << y << "\n";
		
		//max of x and y
		long long int z = x > y ? x : y;
		long long int lc = (z-1)*(z-1) + 1;
		long long int rc = z*z;
		long long int dir = 1;
		if(z%2 == 0) swap(lc,rc);
		else dir = -1;

/* 		cout << "x " << x << " ,y " << y << "\n";
 * 		cout << "z " << z << "\n";
 * 		cout << "lc " << lc << "  ,rc " << rc << "\n";
 * 		cout << "n " << n << "\n";
 * 
 */
//		if(x>y)
//			cout << "1 ";
//		else
//			cout << "0 ";
		if(x>y) cout << (long long int)rc+(long long int)(dir* (y-1)) << "\n";
		else cout << (long long int)lc-(long long int)(dir* (x-1)) << "\n";

	}
	return 0;
}
