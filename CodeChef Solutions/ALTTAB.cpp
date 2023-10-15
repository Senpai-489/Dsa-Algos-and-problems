#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main() {
    int N;
    cin >> N;
    
    vector<std::string> s;
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    
    set<string> uniqueStrings;
    for (int j = N - 1; j >= 0; j--) {
        if (uniqueStrings.count(s[j]) == 0) {
            uniqueStrings.insert(s[j]);
            string lastTwoLetters = s[j].substr(s[j].length() - 2);
            cout << lastTwoLetters;
        }
    }
    
    return 0;
}
