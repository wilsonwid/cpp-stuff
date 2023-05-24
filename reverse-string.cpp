#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

string ReverseWords(string sentence)
{
    reverse(sentence.begin(), sentence.end()); 
    int a = 0, b = 0;
    while (b <= sentence.length()) {
        if (sentence[b] == ' ' || b == sentence.length()) {
            int c = b-1;
            while (a < c) {
                char temp = sentence[a];
                sentence[a] = sentence[c];
                sentence[c] = temp;
                a++;
                c--;
            }
            while (sentence[b] == ' ') {
                b++;
            }
            a = b;
        } else {
            b++;
        }
    }
    return sentence;
}

int main() {
    string sentence;
    getline(cin, sentence);
    cout << ReverseWords(sentence);
    return 0;
}