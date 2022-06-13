#include<bits/stdc++.h>
using namespace std;

int a,b,c;

void inp(){
	cin >> a >> b >> c;
	
}
bool check(){

	if (a<=0 || b<=0 || c<=0) return false;
	else return true;
}
void out(){
	if (a+b<=c || a+c <= b || b+c <= a)
	cout << "NO";
	else cout << "YES";
}
int main(){
	inp();
	if (check) out();
	else cout << "NO";
	return 0;
}