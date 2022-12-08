//MAKEAP
#include <iostream>
using namespace std;

int main() {
	int T, A, C, count = 0;
	cin >> T;
	
	for (int i = 0; i < T; i++){
	   cin >> A >> C;
	   count = 0;
	   for (int j = A; j <= C; j++){
	       if (j == (float)(A + C)/2.0){
	        cout << j << endl;
	        count = count + 1;
	        break;
	       }
	   }
	   if (count == 0)
	    cout << "-1" << endl;
	}
	return 0;
}