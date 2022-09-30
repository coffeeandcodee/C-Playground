#include <iostream>
#include <string>
using namespace std;


int main() {
   
    string input {};
    cout << "Please provide input: "; getline(cin, input);
    size_t l {input.length()};

    for (size_t i {0}; i < l; i++){
        
        
        cout << string(l - i,' ');
        for(size_t j {0}; j <= i; j++){
            cout << input.at(j);
            }
        
        string sub{input, 0, i};
        for(size_t k {sub.length()}; k > 0; k--){
           cout << input.at(k-1);
           }
    cout << endl;
    }
        
    
    
    return 0;
}