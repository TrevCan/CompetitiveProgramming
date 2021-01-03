/*
 * =====================================================================================
 *
 *       Filename:  gorrosDeColores.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  31-Dec-20 3:06:49 AM
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

int n, c, sum;
char ninos[1000];

int main(){

		cin >> n;

		for(int i = 0; i < n; i++){
				string input;
				cin >> input;
				int c = input.size();
				sum = c/2;
				//cout << "l " << input.size() << "\n";
				for(int j = 0; j < c; j++){
					if(input[j] == 'A' || input[j] == 'R')
							ninos[j] = input[j];
					else
							j--;
				
				}
				
				for(int j = 0; j < c-1; j += 2){
						if(ninos[j] == ninos[j+1])
								sum++;
				}
				cout << sum << "\n";
		}

		return 0;
}
