#include <iostream>
#include <stack>
using namespace std;

#define NMAX 10001
stack<char> s;
int64_t n;

void inp(){
	cin >> n;
}

void xuly(){
	int m = n % 16;
	if (m < 10)
		s.push(m + '0');
	else
		s.push(m + '7');
}

void out(){
	while (n > 0){
		xuly();
		n /= 16;
	}
	while (!s.empty()){
		cout << s.top();
		s.pop();
	}
}

int main(){
	inp();
	out();
	return 0;
}
