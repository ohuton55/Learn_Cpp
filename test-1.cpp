#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << "Hello World\n";
    cout << 22.0 / 7.0; // double type
    cout << 'x';    // char type
    cout << (5 & 6) << endl;    // int type 
    
    const char *s = "a fool, a pool: loopalootaloofa";
    cout << s;  // print strings
    cout << (void *)s << endl;  // print address to strings

    cout << "the sum of" << 3 << " and " << 4 << " is " << 3+4 << '\n';
}
