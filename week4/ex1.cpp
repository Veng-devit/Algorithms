#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    getline(cin, filename);

    // 1. Write initial entries
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cerr << "Cannot open file for writing\n";
        return 1;
    }
    // TODO: write 5 lines "Name score"
    outFile<<"Alice 90"<<endl;
    outFile<<"Nana 89"<<endl;
    outFile<<"John 88"<<endl;
    outFile<<"Bob 91"<<endl;
    outFile<<"Era 92"<<endl;
    outFile.close();

    // 2. Read and display
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cerr << "Cannot open file for reading\n";
        return 1;
    }
    // TODO: read loop and print
    string name;
    int score;
    while (inFile >> name >> score) {
        cout << "Name: " << name << ", Score: " << score << "\n";
    }
    inFile.close();
    return 0;
}
