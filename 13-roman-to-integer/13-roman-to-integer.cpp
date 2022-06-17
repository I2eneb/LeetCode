#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
    int result = 0;

    map <string, int> symbols;
    symbols.insert({ "I", 1 });
    symbols.insert({ "V", 5 });
    symbols.insert({ "X", 10 });
    symbols.insert({ "L", 50 });
    symbols.insert({ "C", 100 });
    symbols.insert({ "D", 500 });
    symbols.insert({ "M", 1000 });

    map <string, int> symbolsComp;
    symbolsComp.insert({ "IV", 4 });
    symbolsComp.insert({ "IX", 9 });
    symbolsComp.insert({ "XL", 40 });
    symbolsComp.insert({ "XC", 90 });
    symbolsComp.insert({ "CD", 400 });
    symbolsComp.insert({ "CM", 900 });

    for (auto iter = symbolsComp.begin(); iter != symbolsComp.end(); iter++) {
        string key = iter->first;
        int index = s.find(key);
        if (index == string::npos)
            continue;
        else
            result += iter->second;

        s.erase(index, key.length());
    }
    for (auto iter = symbols.begin(); iter != symbols.end(); iter++) {
        string key = iter->first;
        for (size_t i = 0; i < s.length(); i++) {
            int index = s.find(key);
            if (index == string::npos)
                break;
            else {
                result += iter->second;
                s.erase(index, key.length());
                i--;
            }
        }
    }

    return result;
}
};