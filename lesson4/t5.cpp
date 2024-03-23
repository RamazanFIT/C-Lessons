#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // a b c 

    // 2 3 10
    // 10


    // 100 2 3

    // 100

    // cntrl  z 

    int n = 3;

    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];

    }

    sort(massive, massive + n);
    reverse(massive, massive + n);

    cout << massive[0];    

    
}