#include <iostream>

using namespace std;

int main() {
    cout << "what is your name?" << endl;
    string name;
    cin >> name;
    int a, b;
    a = int(name.length())+3;
    b = a - 1;
    while(a != 0) {
        a--;
        if(a != 0){
            cout << "*";
        }
        else if(a == 0){
            cout << endl <<"*"<< name << "*\n";
            while(b != 0){
                b--;
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
