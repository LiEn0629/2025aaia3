/// week05-3b.cpp Part1:Input, Part2:Output
/// Part3: stringstream Part4: reverse�ϹL��
/// CPE ��2�D UVA 483 �˹L��
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while ( getline(cin, line) ){
        stringstream ss(line);
        string word;
        while( ss >> word ){
                reverse( word.begin(), word.end() );
            cout << "Ū��F " << word << endl;
        }
        cout << line << endl;
    }
}
