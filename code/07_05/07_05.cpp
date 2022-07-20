#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool check[255] = {0};
    for (int i = 0; i < s.length(); i++){
        int count = 0;
        if (check[s[i]] == false){
            cout << s[i] << " ";
            for (int j = i; j < s.length(); j++){
                if (s[j] == s[i])
                    count++;
            }
            cout << count << endl;
            check[s[i]] = true;
        }
    }
    return 0;
}