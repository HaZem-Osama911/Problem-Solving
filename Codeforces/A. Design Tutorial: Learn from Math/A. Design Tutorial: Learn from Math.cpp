/*
	--------------------------------------( Problem Link )-----------------------------------------------

https://codeforces.com/contest/472/problem/A

	-----------------------------------------------------------------------------------------------------


							  ██╗░░██╗░█████╗░███████╗███████╗███╗░░░███╗
							  ██║░░██║██╔══██╗╚════██║██╔════╝████╗░████║
							  ███████║███████║░░███╔═╝█████╗░░██╔████╔██║
							  ██╔══██║██╔══██║██╔══╝░░██╔══╝░░██║╚██╔╝██║
							  ██║░░██║██║░░██║███████╗███████╗██║░╚═╝░██║
							  ╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝╚══════╝╚═╝░░░░░╚═╝

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>



using namespace std;

#define ll						     long long
#define E						     '\n'
#define sp						     " "
#define C						     cout
#define Ci						     cin
#define br						     cout<<endl
#define pb							 push_back
#define asort(a,n)				     sort(a,a+n)
#define PYES					     cout<<"YES"<<E;
#define PNO						     cout<<"NO"<<E;
#define PYes					     cout<<"Yes"
#define PNo					   	     cout<<"No"
#define Pyes					     cout<<"yes"
#define Pno						     cout<<"no"
#define							     f1 cout<<"----- 1 -----"<<endl;
#define							     f2 cout<<"----- 2 -----"<<endl
#define Fp(e)					     for(int i=0;i<e;i++)
#define Fps(s,e)				     for(int i=s;i<e;i++)
#define Fpj(e)					     for(int j=0;j<e;j++)
#define Fm(e)						 for(int i=0;i<f;i--)
#define Fac(e)						 Fp(e){ res+=res*i;}cout<<res;
#define Rev(s,len)					 Fm(len) {ans+=s[i];}cout<<ans;
#define HaZem 						 ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define arr(n)						 int* arr=new int[n];	 


//--------------------------------------( Const )-----------------------------------------------

bool mark[1000001];

//--------------------------------------( function )-----------------------------------------------

void solve();
void Set();

int main()
{
	HaZem;

	
	solve();

	return 0;
}

void Set()
{
	for (ll i = 2; i <= 1000000; i++)
	{
		if (mark[i] == 0)
		{
			for (ll j = 2 * i; j <= 1000000; j += i)
				mark[j] = 1;
		}
	}
}

void solve()
{
	long long i, x;
	Set();
	while (cin >> x)
	{
		for (i = 4; i <= x - 4; i++) {
			if (mark[i] == 1 && mark[x - i] == 1)
			{
				cout << i << " " << x - i << endl;
				break;
			}
		}
	}
}
