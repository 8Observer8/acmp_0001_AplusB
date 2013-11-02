/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on November 2, 2013, 10:03 AM
 */

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/**
 * Calc the Sum
 * 
 * @param a The first summand
 * @param b The second summand
 * @return The Sum
 */
int sum(int a, int b) {
    return a + b;
}

int main(int argc, char** argv) {
    ifstream in;
    string inFileName = "INPUT.TXT";
    in.open(inFileName.c_str());
    if (!in.is_open()) {
        cerr << "Error: could not open file: " << inFileName.c_str() << endl;
        return 1;
    }
    
    int a, b, sum;
    if (in >> a >> b) {
        sum = ::sum(a, b);
    } else {
        cerr << "Error: incorrect data in the file: " << inFileName.c_str() << endl;
        return 1;
    }

    ofstream out;
    string outFileName = "OUTPUT.TXT";
    out.open(outFileName.c_str());
    if (!out.is_open()) {
        cerr << "Error: could not open file: " << outFileName.c_str() << endl;
        return 1;
    }
    
    out << sum << endl;

    return 0;
}

