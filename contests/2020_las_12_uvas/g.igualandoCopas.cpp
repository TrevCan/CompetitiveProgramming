/*
 * =====================================================================================
 *
 *       Filename:  igualandoCopas.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  31-Dec-20 3:53:34 AM
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

int main(){
		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

		long long int n;
		cin >> n;
		while(n != 0){
				long long int maxNum=0;
				long long int sum = 0;
				for(int i = 0; i < n; i++){
						long long int input;
						cin >> input;
						if(input > maxNum)
								maxNum = input;
						sum += input;
				}
				sum -= maxNum;
				sum = maxNum * (n-1) - sum;
				cout << sum << "\n";

				cin >> n;
		}
		return 0;
}
