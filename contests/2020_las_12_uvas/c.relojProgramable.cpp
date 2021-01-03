/*
 * =====================================================================================
 *
 *       Filename:  c.relojProgramable.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02-Jan-21 10:17:30 PM
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

long long int n;
float a,b;

int main(){
	cin >> n;
	for(long long int i = 0; i < n; i++){
		bool e = false;
		cin >> a >> b;
		if( fmod((a-b/6 * 0.5), 30) == 0 && fmod(b,6) == 0 ){
		} else if( fmod((b-a/6 * 0.5),30)==0 && fmod(a,6)==0 ){
			swap(a,b);
		} else e = true;

		a = a/30;
		b = b/6;
		if(e)
			cout << "ERROR\n";
		else {
			if(a<10)
				cout << "0";
			cout << (int)a << ":";
			if(b<10)
				cout << "0";
			cout << (int)b << "\n";
		}
	}
	return 0;
}
