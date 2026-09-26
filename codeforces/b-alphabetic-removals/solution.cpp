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
string remove(int n, int k, string s);
string remove2(int n, int k, string s);
int main()
{
	HaZem


	solve();

	return 0;
}

void solve()
{
	int len, k; cin >> len >> k;
	string s; cin >> s;
	string result = remove(len, k, s);
	cout << result << endl;
}

string remove(int n, int k, string s)
{
	
	unordered_map<char, vector<int>>charIndex;
	
	for (int i = 0; i < n; i++)charIndex[s[i]].pb(i);

	set<int>remo;

	for (char c = 'a'; c <= 'z'; c++)
	{
		while (!charIndex[c].empty() && k > 0)
		{
			int lMOst = charIndex[c][0];
			remo.insert(lMOst);
			charIndex[c].erase(charIndex[c].begin());
			k--;
		}
	}
	string result="";
	for (int i = 0; i < n; i++)
	{
		if (remo.find(i) == remo.end())
		{
			result += s[i];
		}
	}

	return result;
}

string remove2(int n, int k, string s)
{
	string ne = s;
	if (k == n)return "";
	sort(ne.begin(), ne.end());
	string sub = ne.substr(k , n - 1);
	string res = "";

	for (int i = 0; i < n; i++)
	{
		cout<<""<<endl;
	}
	return res;

	
	

}


