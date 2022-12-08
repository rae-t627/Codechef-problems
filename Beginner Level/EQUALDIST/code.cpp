//EQUALDIST

#include <iostream>
using namespace std;

int main() {
	int T, A, B;
	
	cin >> T;
	
	for (int i = 0; i < T; i++){
	    cin >> A >> B;
	    if ((A+B) % 2 == 0)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
