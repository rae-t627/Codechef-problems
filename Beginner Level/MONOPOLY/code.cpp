//MONOPOLY
#include <iostream>
using namespace std;

int main() {
	int test_cases, R_1, R_2, R_3;
	
	cin >> test_cases;
	
	for (int i = 0; i < test_cases; i ++){
	    cin >> R_1 >> R_2 >> R_3 ;
	    if ((R_1 > R_2 + R_3) || (R_2 > R_1 + R_3) || (R_3 > R_1 + R_2))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
