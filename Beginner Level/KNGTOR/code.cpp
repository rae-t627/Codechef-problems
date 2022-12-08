#include <iostream>
using namespace std;

int main() {
	int test_cases, N, M;
	
	cin >> test_cases;
	
	for (int i = 0;  i < test_cases; i ++){
	    cin >> N >> M;
	    cout << (N*5 + M*7) << endl;
	}
	
	return 0;
}