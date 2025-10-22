#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    unordered_set<string> set1;
    unordered_set<string> set2;
    unordered_set<string> set3;
 
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        set1.insert(word);
    }
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        set2.insert(word);
    }
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        set3.insert(word);
    }
    
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
 
    for (const string& s : set1) {
        int count = 0;
        if(set2.find(s) != set2.end()) count++;
        if(set3.find(s) != set3.end()) count++;
        if (count == 0) score1 += 3;
        else if (count == 1) score1 += 1;
    }
 
    for (const string& s : set2) {
        int count = 0;
        if(set1.find(s) != set1.end()) count++;
        if(set3.find(s) != set3.end()) count++;
        if (count == 0) score2 += 3;
        else if (count == 1) score2 += 1;
    }
 
    for (const string& s : set3) {
        int count = 0;
        if(set1.find(s) != set1.end()) count++;
        if(set2.find(s) != set2.end()) count++;
        if (count == 0) score3 += 3;
        else if (count == 1) score3 += 1;
    }
 
    cout << score1 << " " << score2 << " " << score3 << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}