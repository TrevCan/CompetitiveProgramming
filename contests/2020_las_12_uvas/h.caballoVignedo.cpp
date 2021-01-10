/*
 * =====================================================================================
 *
 *       Filename:  caballoVignedo.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03-Jan-21 1:10:01 AM
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

long long int mins, goal, c, sum;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	cin >> c >> goal;
	while(c != 0){
		long long int rac[c];
		for(long long int i=0; i < c; i++){
//			cout << "WAITING for in...\n";
			long long int input;
			cin >> input;
			rac[i] = input;
		}
		long long int p2=0;

		if(rac[0] == goal){
			c = 0;
			mins = goal;
		}
		for(long long int i = 0; i < c; i++){
			if(i == c-1 && rac[i] >= goal){
				mins = min(mins,rac[c-1]);
				break;
			}
			while(sum < goal && p2 < c){	
				sum += rac[p2];
//				cout << "sum " << sum
//				<< " @ " << p2 << '\n';
				p2++;
				
			}
		
			if(mins >= goal && sum >= goal)
				mins = min(mins,sum);
			else if(sum >= goal) mins = sum;
			if(mins == goal) break;
			sum -= rac[i];
		}
		if(mins < goal)
			cout << "IMPOSIBLE\n";
		else cout << mins << '\n';
//		cout << "&&&&&&&&&&\n";

		mins=0;sum=0;p2=0;
		cin >> c >> goal; 
	}
	return 0;
}
