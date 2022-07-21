#include <bits/stdc++.h>
using namespace std;
#define NMAX 10001

void FASTINPUT(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

typedef long long ll;
typedef unsigned long long ull;
bool ispalin(string s){
	for (int i = 0; i < s.length() / 2; i++){
		if (s[i] != s[s.length() - i - 1]){
			return false;
			break;
		}
	}
	return true;
}

int n;
string s;
vector<string> v;

void inp(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> s;
		if (ispalin(s))
			v.push_back(s);
	}
}
void out(){
	cout << v.size() << '\n';
	for (auto x : v)
		cout << x << " ";
}

int main(){
	FASTINPUT();
	inp();
	out();
}