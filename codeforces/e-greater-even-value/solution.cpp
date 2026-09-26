// problem link 
// https://codeforces.com/gym/564136/problem/E
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



void solve()
{
	int t; cin >> t;
	string s1, s2;
	while (t--)
	{
		cin >> s1 >> s2;

		if (s1 == s2) C << "0" << E;
		else
		{
			if (s1.length() < s2.length())swap(s1, s2);
			bool found = s1.find(s2);

			if (found != string::npos && s1.length() > s2.length())
			{
				int x = s1.length() - s2.length();
				cout << x * 2 << E;
			}
			else
			{
				cout << s1.length() + s2.length() << E;
			}
		}
	}

}


void solve2()
{
	int n1, n2; cin >> n1 >> n2;
	if (n1 < n2)swap(n1, n2);


	if (n1 == n2)C << "two numbers are equals" << E;
	else (n1 % 2 == 0) ? C << n1 << endl : C << "NO" << E;




}
