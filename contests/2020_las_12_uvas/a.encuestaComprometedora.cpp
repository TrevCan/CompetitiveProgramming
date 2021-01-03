/*
 * =====================================================================================
 *
 *       Filename:  a.encuestaComprometedora.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02-Jan-21 9:06:04 PM
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
	int n;
	double a,b,r,t;
	
	cin >> n;
	for(int i =0; i < n; i++){
		cin >> a >> b;
		t = (a+b)/2;
		a = a-t;	
		cout << a/t*100 << "\n";
	}
}
