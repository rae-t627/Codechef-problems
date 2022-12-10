//ATM2
#include <iostream>
using namespace std;

int main() {
	int T, N, K;
	
	cin >> T;
	
	while (T--){
	    cin >> N >> K;
	    int array [N];
	    
	    for (int i = 0; i < N; i++){
	        cin >> array [i];
	        if (K - array[i] >= 0){
	            cout << "1";
	            K = K - array[i];
	        }
	        else
	            cout << "0";
	    }
	    cout << endl;
	    
	}
	return 0;
}