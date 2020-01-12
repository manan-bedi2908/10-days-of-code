#include<iostream>
using namespace std;

int findZeroes(int n) {
	int ans=0;
	inp p=5;
	while(n/p>0) {
		ans += (n/p);
		p =p*5;
	}
	return ans;
}
int main() 
{
	long long int n;
	cin>>n;

	cout<<findZeroes(n)<<endl;
	return 0;
}