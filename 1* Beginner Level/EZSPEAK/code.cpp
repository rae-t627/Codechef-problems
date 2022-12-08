//EZSPEAK
#include <iostream>
using namespace std;

int main() {
	int T, N, count;
	string S;
	cin >> T;
	bool var;
	
	for (int i = 0; i < T; i++){
	    cin >> N;
	    cin.ignore();
	    getline (cin, S);
	    
	    count = 0;
	    var = true;
	    for (int j = 0; j < N; j ++){
	        if (S[j] == 'a' || S[j] == 'e' || S[j] == 'i' || S[j] == 'o' || S[j] == 'u')
	            count = 0;
	        else{
	            count ++;
	        }
	        if (count == 4){
	            cout << "NO" << endl;
	            var = false;
	            break;
	        }
	    }
	    if (var == true)
	        cout << "YES" << endl;
	}
	return 0;
}
