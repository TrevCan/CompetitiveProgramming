#include <iostream>
#include <string>

using namespace std;
int main(){
	string input;
	cin >> input;
	long longestRepetition = 0;
	long currentRepetition = 0;
	char currentRepeatChar;
	for(int i = 0; i < input.length(); i++){
		if(input[i] == currentRepeatChar)
			currentRepetition++;
		else{
			longestRepetition = currentRepetition > longestRepetition ? currentRepetition : longestRepetition;
			currentRepeatChar = input[i];
			currentRepetition = 1;
		}
	}
	longestRepetition = currentRepetition > longestRepetition ? currentRepetition : longestRepetition;
	cout << longestRepetition << "\n";
	return 0;
}
