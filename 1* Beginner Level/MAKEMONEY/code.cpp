//MAKEMONEY
#include <iostream>
using namespace std;

int main() {
	int test_cases;
	
	cin >> test_cases;
	
	int N, X, C, sum;
	
	for (int i = 0; i < test_cases; i++){
	    cin >> N >> X >> C;
	    int array [N];
	    sum = 0;
	    
	    for (int j = 0; j < N; j++){
	        cin >> array [j];
	        if ((X - array [j]) > C){
	            array [j] = X;
	            sum = sum + array [j] - C;
	        }
	        else 
	            sum = sum + array [j];
	    }
	    cout << sum << endl;
	}
	return 0;
}
