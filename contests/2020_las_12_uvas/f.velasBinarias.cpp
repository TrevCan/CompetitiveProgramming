/*
 * =====================================================================================
 *
 *       Filename:  velasBinarias.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  31-Dec-20 3:46:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Héctor Alejandro Canizales Peña (TrevCan), heror0484@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>

using namespace std;

unsigned long long int n;
bool binDigits[63];

int main(){
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
		cin >> n;
//		cout << 1%2 << "\n";
		while(n != 0){
				while(n%2 == 0)
					n = n/2;

				unsigned long long int i = 0;

				while(n > 0){
					binDigits[i] = n%2;
					n = n / 2 ;
					i++;
				}

//				for(int j=0; j<i; j++){
//					cout << binDigits[j];
//				}
				bool no = false;
				for(int j=0; j<i/2; j++){
					if(binDigits[j] != binDigits[i-j-1] ){
						no = true; break;
					}
				}
				if(no) cout << "NO\n";
				else cout << "SI\n";
				
				cin >> n;

		}

		return 0;
}
