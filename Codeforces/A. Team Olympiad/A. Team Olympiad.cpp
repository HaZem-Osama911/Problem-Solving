	/*
		--------------------------------------( Problem Link )-----------------------------------------------

https://codeforces.com/contest/490/problem/A



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

	bool mark[1000001];

	//--------------------------------------( function )-----------------------------------------------

	void solve();

	int main()
	{
		HaZem;

	
		solve();

		return 0;
	}

	void solve()
	{
		int n; cin >> n;

		vector<int>prog, math, eu;
		int x;

		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			if (x == 1)prog.pb(i);
			else if (x == 2)math.pb(i);
			else if (x == 3) eu.pb(i);
		}
		int mi = min(math.size(), min(prog.size(), eu.size()));
		C << mi << E;

		Fp(mi)
		{
			C << math[i] << sp << prog[i] << sp << eu[i] << E;
		}

	}
