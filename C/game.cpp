#include <iostream>

using namespace std;

int main(){
    
    // // 1 
    //ramazan 

    // nazamar 
    

    string s;
    cin >> s;
    // reverse(s.begin(), s.end());
    // address of beginning   address of end
    //         // 0           n 
    // // reverse(massive, massive + n);
    //  address of beginning  address of end
    int n = s.size(); // s.size() ->give us the size of string 

    for(int i = n - 1; i >= 0; i--){
        cout << s[i];
    }

}