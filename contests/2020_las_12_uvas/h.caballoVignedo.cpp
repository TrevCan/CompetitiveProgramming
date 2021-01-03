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

int mins, goal; int c; int sum;

int main(){
	cin >> c >> goal;
	while(c != 0){
		int rac[c];
		for(int i=0; i < c; i++){
//			cout << "WAITING for in...\n";
			int input;
			cin >> input;
			rac[i] = input;
		}
		int p1=0, p2=1;
		sum = rac[0];
		if(rac[0] == goal){
			c = 0;
			mins = goal;
		}
		for(int i = 0; i < c; i++){
			if(i == c-1){
				mins = min(mins,rac[c-1]);
				break;
			}
			while(sum < goal){
				cout << "YOLO\n";
				if(p2>c-1){
					break;
				}
				sum += rac[p2];
				p2++;
				cout << "s " << sum << "\n";
			}
			if(sum==goal){
				mins = goal;
				break;
			}
		
			if(mins >= goal && sum >= goal)
				mins = min(mins,sum);
			else if(sum >= goal) mins = sum;
//			mins = mins >= goal && sum >= goal ? min(mins,sum) : mins;
			sum -= rac[i];
			cout << "mins " << mins << " -s " << sum << "\n";		
		}
		cout << "goal " << goal << "\n";
//		cout << "ms " << mins << "\n";
		if(mins>=goal){cout << mins << "\n";}
//		else if(p2>c-1) cout << "IMPOSIBLE\n";
//		else cout << "IMPOSIBLE\n";
		if(mins >= goal) cout << "IMHERE";
		cout << "m " << mins << " g " << goal << "\n";

//		cout << mins << "\n";
		mins=0;sum=0;p2=0;
		cin >> c >> goal; 
	}
	return 0;
}
