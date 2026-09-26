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
#include <unordered_map>
#include <set>
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
bool Balance(string s1, string s2);
int main()
{
	HaZem


	solve();

	return 0;
}

void solve()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	bool result =Balance(s1, s2);
	(result) ? C << "YES" << endl : C << "NO" << E;


}

bool Balance(string s1, string s2)
{
	unordered_map <char, int>freq;
	for (char c1 : s1)
	{
		if (c1 != ' ')
		{
			freq[c1]++;
		}
	}

	for (char ch : s2)
	{
		if (ch != ' ')
		{
			if (freq.find(ch) == freq.end() || freq[ch] == 0)
			{
				return false;
			}
			freq[ch]--;
		}
	}
	return true;
}
