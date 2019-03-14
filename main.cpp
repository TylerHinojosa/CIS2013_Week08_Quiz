#include <iostream>
#include <fstream>

using namespace std;

int main(){
		ifstream inStream;
		ofstream outStream;
	
		inStream.open("info.dat");
		int bigA = 0, bigF = 0, smallA = 0, smallB = 0, total = 0;
		char ch;
		
		while (!inStream.eof()){
			total ++;
			inStream.get(ch);
			switch (ch){
				case 'A':
						bigA ++;
						break;
				case 'F':
						bigF ++;
						break;
				case 'a':
						smallA ++;
						break;
				case 'b':
						smallB ++;
						break;
			}
		}
		
		cout << total << " total characters in the file." << endl;
		cout << "The total for A's are" << bigA << endl;
		cout << "The total for F's are" << bigF << endl;
		cout << "The total for a's are" << smallA << endl;
		cout << "The total for b's are" << smallB << endl;
	return 0;
}