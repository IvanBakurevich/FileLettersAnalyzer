#include <iostream>
#include<fstream>
#include "LettersAnalyzer.h"
using namespace std;


int main(int argc, char* argv[])
{
    try {
        if (argc != 3) {
            throw 0;
        }

        ifstream in(argv[1]);
        ofstream out(argv[2]);

        if (!in.is_open()) {
            throw 1;
        }
        else {
            setlocale(LC_ALL, "ru");
            LettersAnalyzer letterAnalyzer;
            string line;

            while (getline(in, line)) {
                letterAnalyzer.addFromString(line);
            }

            letterAnalyzer.sortByDescendingCount();
            if (out.is_open()) {
                out << letterAnalyzer.toString();
                cout << "Success program execution!" << endl;
            }
        }

        in.close();
        out.close();
    }
    catch (int e) {
        cerr << "Exception: ";
        if (e == 0) {
            cerr << "Exact 2 arguments required: INPUT_FILE OUTPUT_FILE" << endl;
        }
        if (e == 1) {
            cerr << "Invalid INPUT_FILE path - " << argv[1] << endl;
        }
    }
}
