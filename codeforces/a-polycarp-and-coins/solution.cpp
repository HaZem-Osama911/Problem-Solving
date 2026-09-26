/*
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
	int t; cin >> t;
	int coin, c1, c2, ans;
	while (t--)
	{
		c1 = 1;
		c2 = ans = 0;

		cin >> coin;
		c1 = coin / 3;;
		c2 = c1;
		ans = coin - (c1 + (c2 * 2));
		if (ans == 0) C << c1 << sp << c2 << E;
		else
		{
			(ans % 2 == 0) ? c2++ : c1++;
			C << c1 << sp << c2 << E;
		}

	}
}
