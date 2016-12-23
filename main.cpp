#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cmath>


using namespace std;

int main(int argc, char **argv) {
    cout << "Enter set of characters in a single line "
    << endl << "no longer then 100 characters" << endl;

    char s[101];
    int len;
    cin >> s;
    if ((len = strlen(s)) > 100) {
        throw invalid_argument("Invalid length of characters indicated " + (len = strlen(s)));
    }

    cout << "Enter a number (between 1 and 10 in power 12) "
    << endl << "how many times set of characters is repeated " << endl;

    long n;
    cin >> n;
    if (n < 1 || n > pow(10, 12)) {
        throw invalid_argument("Invalid number indicated " + n);
    }

    char *pszPtr;
    long length = 0;
    long frac = 0;
    pszPtr = s;
    while (*pszPtr){
        if (*pszPtr == 'a')
        {
            length++;
            if ((pszPtr-s) <= (n % len))
                frac++;
        }
        pszPtr++;
    }

    cout << (length*(n/len))+frac << endl;
    cin.get();
    return 0;
}
