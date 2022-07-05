#include <iostream>
#include <string>
using namespace std;

#define ll long long

ll tongmin(ll a, ll b){
    string a1 = to_string(a);
    string a2 = to_string(b);
    for (int i = 0; i < a1.length(); i++){
        if (a1[i] == '6')
            a1[i] = '5';
    }
    for (int i = 0; i < a2.length(); i++){
        if (a2[i] == '6')
            a2[i] = '5';
    }
    return stoll(a1) + stoll(a2);
}

ll tongmax(ll a, ll b){
    string a1 = to_string(a);
    string a2 = to_string(b);
    for (int i = 0; i < a1.length(); i++){
        if (a1[i] == '5')
            a1[i] = '6';
    }
    for (int i = 0; i < a2.length(); i++){
        if (a2[i] == '5')
            a2[i] = '6';
    }
    return stoll(a1) + stoll(a2);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll a, b;
        cin >> a >> b;
        cout << tongmin(a, b) << " " << tongmax(a, b) << endl;
    }
    return 0;
}