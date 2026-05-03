#include <iostream>
using namespace std;

bool check(char *p) {

   
    if (*p != 'a'){
     return false;
    p++;
    }
    if (*p == 'a') {
        while (*p == 'a'){
            p++;
        }
    }
    else if (*p == 'b') {
        while (*p == 'b'){
            p++;
        }
    }

    if (*p != 'b'){
        return false;
    }
    p++;

 
    while (*p == 'a') {
        p++;
    }

 
    return (*p == '\0');
}

    


int main() {
    char s[100];
    cout << "Enter a string: ";
    cin >> s;
    cout << "Checking string..." << endl;
    if (check(s)) {
        cout << "Accepted" << endl;
    } else {
        cout << "Rejected" << endl;
    }

    return 0;
}
