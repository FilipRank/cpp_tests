#include <iostream>
#include <string>
using namespace std;

int main() 
{
    struct MyStruct {
        int a;
        string b;
    };

    MyStruct myStruct;

    cout << "Enter in a: ";
    cin >> myStruct.a;
    cout << "Enter in b: ";
    cin >> myStruct.b;
    cout << "Here is a: " << myStruct.a << endl
         << "And here is b: " << myStruct.b << endl;
}

