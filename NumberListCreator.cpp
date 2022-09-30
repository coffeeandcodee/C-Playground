#include <iostream>
#include <vector>

using namespace std;


int main() {
    char selection{};
    vector<int> list {};
    
    do {
    
    
    cout << "\n\t\t\tSELECT\n\n";   
    cout << "A - Add number\t\t\t";
    cout << "V - View list\n";
    cout << "M - Display mean of numbers\t";
    cout << "S - Return smallest number\n";
    cout << "L - Return largest number\t";
    cout << "Q - Quit program\n\n";
    
   
    cout << "Select option: "; 
    cin >> selection;
    
    
    switch(selection){
                
        case 'A' : case 'a':
        {
            int number{};
            cout << "Enter number: ";
            cin >> number;
            
            list.push_back(number); 
            
            } break;
            
        case 'V': case 'v':
           {   
             if (list.size() == 0) 
                 cout << "\n[] - Empty list\n" << endl;
            else{   
                    cout << "Current list: [ ";
                    for(auto i: list){cout << i << " ";}
                    cout << "]";
                    }
                cout << "\n";
                } break;
                
        case 'M': case 'm':
        {
            double sum{}; 
            for (auto i: list)
                sum += i;
            cout << "Current mean average: " << sum /list.size() << "\n";
    
        } break;
        
        case 'S': case 's':
        {
            int smallest {list.at(0)};
            for (auto i: list)
                smallest = i < smallest ? i : smallest;
            cout << "Current smallest number: " << smallest << "\n";

        } break;
        case 'L': case 'l':
        {
            int largest {list.at(0)};
            for (auto i: list)
                largest = i > largest ? i : largest;
            cout << "Current largest number: " << largest << "\n";

        } break;
        
        case 'Q': case 'q':
            cout << "\n\t\t\tBYE!\n"; break;
            
        default:
            cout << "Pardon? Invalid option, try again.\n\n";
        }
    } while (selection != 'Q' && selection != 'q');
    
    return 0;
}
