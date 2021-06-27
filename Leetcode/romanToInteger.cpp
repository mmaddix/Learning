#include <iostream>
#include <string>
#include <vector>

using namespace std;

int romanToInt(string s);

int main() {

    cout << romanToInt("III") << endl;
    cout << romanToInt("IV") << endl;
    cout << romanToInt("CDXLVIII") << endl;
    cout << romanToInt("MMMMDCCCLIX") << endl;
}

int romanToInt(string s) {

    vector<int> nums;
    int counter = 0;


    for (int i = 0; i < s.length(); i++) {

        if (s[i] == 'I') {
            nums.push_back(1);
        }
        else if (s[i] == 'V') {
            nums.push_back(5);
        }
        else if (s[i] == 'X') {
            nums.push_back(10);
        }
        else if (s[i] == 'L') {
            nums.push_back(50);
        }
        else if (s[i] == 'C') {
            nums.push_back(100);
        }
        else if (s[i] == 'D') {
            nums.push_back(500);
        }
        else if (s[i] == 'M') {
            nums.push_back(1000);
        }
    }

    for (int i = 0; i < nums.size(); i++) {

        if ((i+1) < nums.size()) {
            
            if (nums.at(i) < nums.at(i+1)) {
                counter -= nums.at(i);
            }
            else {
                counter += nums.at(i);
            }
        }
        else {
            counter += nums.at(i);
        }
        
    }

    return counter;
}