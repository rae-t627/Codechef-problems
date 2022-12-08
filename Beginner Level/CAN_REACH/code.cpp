//CAN_REACH
#include <iostream>
using namespace std;

int main() {
	int test_cases, x, y, K;
	cin >> test_cases;
	
	for (int i = 0; i < test_cases; i ++){
	    cin >> x >> y >> K;
	    if (x % K == 0 && y % K == 0)
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
