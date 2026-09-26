#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

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
#define ari(n)						 int*arr=new int[n];
#define arl(n)						 long long*arr=new long long[n];


//--------------------------------------( function )-----------------------------------------------



void solve();


//-------------------------------------------------------------------------------------------------


int main()
{
	HaZem;

	solve();
			
	return 0;
}

void solve()
{
    int t; cin >> t;
    while (t--)
    {

        string s, t;
        cin >> s >> t;

        int slen = s.size();
        int tlen = t.size();
        int j = 0;
        bool possible = true;
        for (int i = 0; i < slen; ++i) {
            if (j < tlen && s[i] == t[j]) {
                ++j;
            }
            else if (s[i] == '?') {
                if (j < tlen) {
                    s[i] = t[j];
                    ++j;
                }
                else {
                    s[i] = 'a';
                }
            }
        }

        if (j < tlen) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            C << s << E;
        }
    }

}
