//BIN_BAT
#include <iostream>
using namespace std;

int main() {
	int test_cases;
	int N, A, B;
	int time = 0;
	
	cin >> test_cases;
	for (int i = 0; i < test_cases; i++){
	    time = 0;
	    cin >> N >> A >> B;
	    while (N > 1){
	        
	        N = N / 2;
	        time = time + A;
	        if (N > 1)
	            time = time + B;
	    }
	    cout << time << endl;
	}
	
	return 0;
}