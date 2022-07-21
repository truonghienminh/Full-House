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
string s;

void inp(){
	cin >> s;
}

void out(){
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] >= '0' && s[i] <= '9')
			a++;
		else if (s[i] >= 'A' && s[i] <= 'z')
			b++;
		else
			c++;
	}
	cout << a << " " << b << " " << c;
}

int main(){
	FASTINPUT();
	inp();
	out();
}