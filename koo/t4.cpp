#include <iostream>

using namespace std;

int f(int a, int b){
    return a + b;
}


int main(){
    
    // f(a, b) -> a + b 
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    // f(a, b, c) -> a * b * c + 10
}  