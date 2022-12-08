//WATERCONS
#include <iostream>
using namespace std;

int main() {
	int test_cases;
	int x;
	
	cin >> test_cases;
	
	for (int i = 0; i < test_cases; i ++){
	    cin >> x; 
	    if (x >= 2000)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
