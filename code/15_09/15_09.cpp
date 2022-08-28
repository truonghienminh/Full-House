#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<string> res;

void init(){
    queue<string> q;
    q.push("6"), q.push("8");
    res.push_back("6"), res.push_back("8");
    while (1){
        string top = q.front();
        q.pop();
        if (top.length() == 15)
            break;
        q.push(top + "6"), q.push(top + "8");
        res.push_back(top + "6"), res.push_back(top + "8");
    }
}

int main(){
    init();
    int t;
    cin >> t;
    while (t--){
        int n, count = 0;
        cin >> n;
        vector<string> ans;
        for (string x : res){
            if (x.length() <= n){
                ans.push_back(x);
                count++;
            }
        }
        cout << count << endl;
        for (string x : ans){
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}