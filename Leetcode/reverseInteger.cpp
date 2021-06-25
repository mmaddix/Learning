#include <iostream>
#include <string>

using namespace std;

int reverse(int x);

int main () {

    cout << reverse(123) << endl;
    cout << reverse(-321) << endl;
}

int reverse(int x) {

    long reversed = 0;
    int remainder;
    bool isNegative = false;

    if (x < 0) {
        
        isNegative = true;
        x = abs(x);
    }

    while (x > 0) {

        remainder = x % 10;
        reversed = (reversed*10) + remainder;
        x = x/10;
    }

    if (reversed > INT_MAX || reversed < INT_MIN) {
		return 0;
	}

    if (isNegative) {
        return reversed * -1;
    }
    else {
        return reversed;
    }
}
