// problem link
// https://codeforces.com/contest/1343/problem/B
/*
*
*
#									{	 I have no choice		}
#									{	 I only have a dream	}
									{	   * Remimber Me *		}
									=============================

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



//--------------------------------------( Const )-----------------------------------------------


//--------------------------------------( function )-----------------------------------------------

void solve();
void solve2();

int main()
{
	HaZem;

	solve2();

	return 0;
}

void solve2()
{
	int t; cin >> t;
	long long int n, sum1, sum2;
	while (t--) {
		sum1 = sum2 = 0;
		cin >> n;

		if (n % 4 != 0)C << "NO\n";
	
		else {
			C << "YES\n";

			for (int i = 2; i <= n; i += 2) {
				C << i << " ";
				sum1 += i;
			}
			for (int i = 1; i <= n - 2; i += 2) {
				C << i << " ";
				sum2 += i;
			}
			C << sum1 - sum2 << E;
		}
	}
}
