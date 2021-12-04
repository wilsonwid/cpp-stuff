#include <iostream>
using namespace std;

/* it's preferable to place a comment block above the text that it's explaining 
 * so the explanation can be a lot clearer */

#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#endif

int main(){
    string word;
    cout << "Please input the word you wish to display: \n";

    while (cin >> word){
        cout << "The current word is: " << word << endl;
    }
    cout << "Ended the loop!\n";
    return 0;
}

