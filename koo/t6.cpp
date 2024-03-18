#include <iostream>

using namespace std;

char make_it_larger(char a){
    // return char(tolower(a));

    if(a >= 'a' and a <= 'z'){
        int ascii_code = a - 32;
        return char(ascii_code);
    } else{
        return a;
    }
}


int main(){
    
    char x;
    cin >> x;
    cout << make_it_larger(x);
    // x между a and z то он маленький 
    // x >= 'a' and x <= 'z' then it not capital letter 
    // 97 - 65 = 32 
    // 98 - 66 = 32
    // 'a' 97
    // 'A' 65
    // 'b' 98 
    // 'B' 66

    // 'a' - 32 = 'A'

    // 'b' - 32 = 'B'

    // 'B'
    // 'a' 97

    // 'z' 122 
    
    
}