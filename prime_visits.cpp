#include<iostream>
using namespace std;

#define ll long long

//Sieve Approach-Generate a series containing prime numbers
void prime_sieve(int *p) {

	//first mark all odd numbers as prime
	for(int i=3; i <= 1000000; i += 2) {
		p[i] = 1;
	}

	//Sieve
	for(ll i=3; i <= 1000000; i += 2) {
		if(p[i] == 1) {
			for(ll j = i * i; j <= 1000000; j = j + i) {
				p[j]=0;
			}
		}
	}
	//Special case
	p[2]=1;
	p[1]=p[0]=0;
}
int main()
{
	int p[1000005] = {0};
	prime_sieve(p);

	int csum[1000005] = {0};

	//precompute the primeupto index i

	for(int i=1;i<=1000000;i++) {
		csum[i] = csum[i-1] + p[i];
	}

	int q;
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<csum[b] - csum[a-1]<<endl;
	}

	return 0;
}