
#include<iostream>
using namespace std;

int n = 1000000;   // (note :-)       integer takes at max 10 ^ 7 in glowble
bool sieve[1000001];        //(note :-) it is impossible in local and boolen takes at max in glowble takes 10 ^8 )

void primereturn(){
    // Initialize all numbers as prime
    for (int i = 2; i <= n; i++) {
        sieve[i] = true;
    }

    // Sieve of Eratosthenes
    for (int j = 2; j * j <= n; j++) {
        if (sieve[j] == true) {
            for (int k = j * j; k <= n; k += j) {
                  sieve[k] = false;
            }
        }
    }
}

int main() {
                                        // in main function the integer takes at max 10 ^ 6
                                        // in main function the boolen takes at max 10 ^ 7
primereturn();
int t;
cin>>t;

while (t--){           
    int n;
    cin >> n;

    if (sieve[n] == true){
        cout<<" yes"<<" ";
    }
    else {
        cout <<" no "<<" ";
    }
} 
    return 0;
}


