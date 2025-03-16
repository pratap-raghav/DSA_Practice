#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    // bool a = true;
    // cout << a << "\n";        
    // cout << std::boolalpha;   
    // cout << a << "\n";        
    // cout << std::noboolalpha; 
    // cout << a;                

    int a = 26, b = 20;
    bool c = false;
    cout << a << " " << b << " " <<c << "\n"; 
    cout << std::hex;
    cout << a << " " << b << " " <<c << "\n"; 
    cout << std::oct;
    cout << a << " " << b << " " <<c << "\n"; 
    cout << std::dec;
    cout << a << " " << b << " " <<c << "\n"; 
    cout << std::boolalpha;
    cout << a << " " << b << " " <<c << "\n";  
    cout << std::noboolalpha;
    cout << a << " " << b << " " <<c << "\n";  

    cout << std::setw(5);          
    cout << std::setfill('*');     
    cout << a << "\n";             
    cout << std::setw(5);
    cout << "Hi" << "\n";         
    cout << std::left;             
    cout << std::setw(5);
    cout << a << "\n";             

    return 0;
}