//PROGLANG
#include <iostream>
using namespace std;

int main() {
	int T, A, B, A1, B1, A2, B2;
	bool var;
	
	cin >> T;
	for (int i = 0; i < T; i ++){
	    cin >> A >> B >> A1 >> B1 >> A2 >> B2;
	    var = false;
	    if (A1 == A || B1 == A){
	        if (A1 == B || B1 == B){
	            cout << "1" << endl;
	            var = true;
	        }
	    }
	    else if (A2 == A || B2 == A){
	        if (A2 == B || B2 == B){
	            cout << "2" << endl;
	            var = true;
	        }
	    }
	    if (var != true)
	        cout << "0" << endl;
	}
	return 0;
}
