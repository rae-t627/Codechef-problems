//COUNTP
#include <iostream>
using namespace std;

int main() {
	int T, N, even, odd;
	
	cin >> T;
	
	for (int i = 0; i < T; i++){
	    cin >> N;
	    int array [N];
	    even = 0;
	    odd = 0;
	    for (int j = 0; j < N; j++){
	        cin >> array [j];
	        if(array [j] % 2 == 0)
	            even += 1;
	        else 
	            odd += 1;
	    }
	    if ((N - even) % 2 == 0 && odd != 0)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
