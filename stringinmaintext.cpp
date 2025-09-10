#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello World!";
    string insert = "Beautiful ";
    int pos = 6;

    text.insert(pos, insert);
    cout << "Modified text: " << text << endl;

    return 0;
}