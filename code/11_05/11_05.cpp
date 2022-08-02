#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        int cnt[256] = {0};
        for (char x : s){
            cnt[x]++;
        }
        char res;
        int max = 0;
        for (int i = 0; i < 256; i++){
            if (cnt[i] > max){
                max = cnt[i];
                res = i;
            }
        }
        cout << res << endl;
    }
    return 0;
}