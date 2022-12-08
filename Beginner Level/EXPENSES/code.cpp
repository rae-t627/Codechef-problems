//EXPENSES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T, N, X, Z = 1;
	
	cin >> T;
	
	for (int i = 0; i < T; i++){
	    cin >> N >> X;
	    for (int j = 0; j < N; j ++){
	        X = X - 1;
	    }
	    Z = 1;
	    for (int j = 0; j < X; j ++){
	        Z = Z*2;
	    }
	    cout << Z << endl;
	}
	return 0;
}
