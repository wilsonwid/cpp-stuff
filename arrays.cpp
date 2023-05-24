#include <iostream>
#include <fstream>
#include <string>

int main(){
    int ia[10]; // ia[10] represents an array of length 10
    int index;

    for (index = 0; index < 10; ++index){
        ia[index] = index;
    }

    for (index = 9; index >= 0; --index){
        std::cout << ia[index] << " " << std::endl;
    }

    return 0;  
}