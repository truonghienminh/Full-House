#include <iostream>
#include <string>
using namespace std;

int count[100000];

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        fill_n(count, 100000, 0);
        cin >> s;
        for (int i = 0; i < s.length(); i++){
            count[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++){
            if (count[s[i]] == 1)
                cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}