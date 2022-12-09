//SLOWSOLN
#include <iostream>
using namespace std;

int main() {
	int T, N, maxT, maxN, sumN, ans;
	
	cin >> T;
	
	for (int i = 0; i < T; i++){
	    cin >> maxT >> maxN >> sumN;
	    ans = 0;
	    while (maxT > 0){
	        if (maxN < sumN){
	            ans = ans + maxN*maxN;
	            sumN = sumN - maxN;
	        }
	        else{
	            ans = ans + sumN*sumN;
	            break;
	        }
	        maxT -= 1;
	    }
	    cout << ans << endl;
	}
	return 0;
}
