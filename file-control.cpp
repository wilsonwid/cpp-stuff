#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream outfile("output_file");
    ifstream infile("input_file");

    if (!infile){
        cerr << "Input file cannot be accessed!" << endl;
        return -1;
    }

    if (!outfile){
        cerr << "Output file cannot be accessed!" << endl;
    }

    string word;
    while(infile >> word){
        outfile << word << ' ';
    }
    return 0;  
}