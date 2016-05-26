/*if the for loop of test cases is replaced with while(t--),it shows TLE.REASON UNKNOWN*/
#include <iostream>
#include <math.h>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> primes;
    primes.push_back(2);
    int cap;
    for (int i = 3; i <= 32000; i+=2) {
        bool isprime = true;
        cap = sqrt(i) + 1;

        vector<int>::iterator p;
        for (p = primes.begin(); p != primes.end(); p++) {
            if (*p >= cap) break;
            if (i % *p == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) primes.push_back(i);
    }

    int T;long long int N,M;

    cin >> T;

    for (int t = 0; t < T; t++) {

        cin >> M >> N;
        if (M < 2) M = 2;
	if(M>N) continue;

        set<int> notprime;
        notprime.clear();

	int cap=sqrt(N);
        vector<int>::iterator p;
        for (p = primes.begin(); p != primes.end(); p++) {
            int start;

	    if(*p>cap)//since prime numbers above this won't cut any numbers below N.
		break;
            if (*p >= M) 
			start = 2*(*p);
            else 
			start = M + ((*p - M % *p) % *p);

            for (long long int j = start; j <= N; j += *p) {
                notprime.insert(j);
            }
        }

        for (long long int i = M; i <= N; i++) {
            if (notprime.count(i) == 0) {
                cout << i << endl;
            }
        }
	cout<<"\n";
    }
    return 0;
}
