//BULLBEAR
#include <iostream>
using namespace std;

int main() {
	int test_cases, X, Y;
	
	cin >> test_cases;
	
	for (int i = 0; i < test_cases; i ++){
	    cin >> X >> Y;
	    if (X > Y)
	        cout << "LOSS" << endl;
	    else if (X == Y)
	        cout << "NEUTRAL" << endl;
	    else
	        cout << "PROFIT" << endl;
	}
	return 0;
}
