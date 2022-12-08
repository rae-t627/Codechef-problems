//POPCORN
#include <iostream>
using namespace std;

int main() {
	int test_cases;
	int A1, A2, B1, B2, C1, C2;
	
	cin >> test_cases;
	
	for (int i = 0; i < test_cases; i ++){
	    cin >> A1 >> A2 >> B1>>B2>>C1>>C2;
	    int A = A1+ A2;
	    int B = B1 + B2;
	    int C = C1 + C2;
	    A = max (A, B);
	    C = max (A, C);
	    cout << C << endl;
	}
	return 0;
}
