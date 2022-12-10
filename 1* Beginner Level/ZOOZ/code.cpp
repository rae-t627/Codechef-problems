//ZOOZ
#include <iostream>
using namespace std;

int main() {
	int T, N;
	
	cin >> T;
	while (T--){
	    cin >> N;
	    if (N % 2 != 0){
	        for (int i = 0; i < N; i++){
	            if (i % 2 == 0)
	                cout << "0";
	            else
	                cout << "1";
	        }
	        cout << endl;
	    }
	    else {
	        for (int i = 0; i < N; i ++){
	            if (i == 0 || i == N - 1)
	                cout << "1";
	            else
	                cout << "0";
	        }
	        cout << endl;
	    }
	   
	}
	return 0;
}
