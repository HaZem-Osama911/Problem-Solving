/*


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
#include <stdio.h>



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

const int MAX_V = 100000;

//--------------------------------------( function )-----------------------------------------------

void solve();
ll maxPoint(int n, vector<int>&v);
int main()
{
	HaZem


	solve();

	return 0;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);
	Fp(n)cin >> v[i];
	
	C << maxPoint(n, v) << E;
	
	
}

ll maxPoint(int n, vector<int>& v)
{
	vector <ll> freq(MAX_V + 1, 0);
	for (int num : v)freq[num]++;

	vector<long long> dp(MAX_V + 1, 0);
	dp[0] = 0;
	dp[1] = freq[1];

	for (int i = 2; i <= MAX_V; ++i) {
		dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
	}

	return dp[MAX_V];
}/*
	--------------------------------------( Problem Link )-----------------------------------------------





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
#include <stdio.h>



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

const int MAX_V = 100000;

//--------------------------------------( function )-----------------------------------------------

void solve();
ll maxPoint(int n, vector<int>&v);
int main()
{
	HaZem


	solve();

	return 0;
}

void solve()
{
	int n;
	cin >> n;
	vector<int> v(n);
	Fp(n)cin >> v[i];
	
	C << maxPoint(n, v) << E;
	
	
}

ll maxPoint(int n, vector<int>& v)
{
	vector <ll> freq(MAX_V + 1, 0);
	for (int num : v)freq[num]++;

	vector<long long> dp(MAX_V + 1, 0);
	dp[0] = 0;
	dp[1] = freq[1];

	for (int i = 2; i <= MAX_V; ++i) {
		dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
	}

	return dp[MAX_V];
}
