// preprocessor commands
#include <iostream>
#include "includes/add.h"

// For the compiler
using namespace std;

// Function prototypes
void hello();

int main() {
    hello();

    int c = addition::add(3, 4);

    cout << c << endl;
}

void hello() {
    cout << "Hello, world!" << endl;
}