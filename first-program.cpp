#include <iostream> // iostream standard library header file -> contains information about cout necessary for the program
// #include is a preprocessor directive
using namespace std; // this is a using directive -> relates to protected keywords

void read(){cout << "read()\n";}
void sort(){cout << "sort()\n";}
void compact(){cout << "compact()\n";}
void write(){cout << "write()\n";}

int main(){
    read();
    sort();
    compact();
    write();
    return 0;
}
