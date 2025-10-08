#include <iostream>
using namespace std;

class Note {
protected:
    string content;
public:
    void setNote(string c) { content = c; }
};

class Server : public Note {
protected:
    string serverName;
public:
    void setServer(string name) { serverName = name; }
};

class Device : public Server {
public:
    void showDetails() {
        cout << "Device connected to server '" << serverName << "' with note: " << content << endl;
    }
};

int main() {
    Device d;
    d.setNote("System update required");
    d.setServer("MainServer01");
    d.showDetails();
    return 0;
}