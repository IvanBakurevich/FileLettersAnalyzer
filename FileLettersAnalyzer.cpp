#include <iostream>
#include<fstream>
#include "LettersAnalyzer.cpp"
using namespace std;


int main(int argc, char* argv[])
{
    if (argc != 3) {
        cout << "Exact 2 arguments required: INPUT_FILE OUTPUT_FILE" << endl;
        return 0;
    }

    ifstream in(argv[1]);
    ofstream out(argv[2]);

    if (!in.is_open()) {
        cout << "Invalid INPUT_FILE: " << argv[1] << endl;
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
