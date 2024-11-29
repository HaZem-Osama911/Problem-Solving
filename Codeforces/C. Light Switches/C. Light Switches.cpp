/*

https://codeforces.com/contest/1993/problem/C

 
██╗░░██╗░█████╗░███████╗███████╗███╗░░░███╗
██║░░██║██╔══██╗╚════██║██╔════╝████╗░████║
███████║███████║░░███╔═╝█████╗░░██╔████╔██║
██╔══██║██╔══██║██╔══╝░░██╔══╝░░██║╚██╔╝██║
██║░░██║██║░░██║███████╗███████╗██║░╚═╝░██║
╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝╚══════╝╚═╝░░░░░╚═╝

*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

using namespace std;




#define ll long long
#define E '\n'
#define C  cout
#define Ci  cin
#define br cout<<endl
#define PYES cout<<"YES"<<E;
#define PNO cout<<"NO"<<E;
#define PYes cout<<"Yes"
#define PNo cout<<"No"
#define Pyes cout<<"yes"
#define Pno cout<<"no"
#define f1 cout<<"----- 1 -----"<<endl;
#define f2 cout<<"----- 2 -----"<<endl
#define Fp(e) for(int i=0;i<e;i++)
#define Fps(s,e) for(int i=s;i<e;i++)
#define Fpj(e) for(int j=0;j<e;j++)
#define Fm(e) for(int i=0;i<f;i--)
#define Fac(e) Fp(e){ res+=res*i;}cout<<res;
#define Rev(s,len) Fm(len) {ans+=s[i];}cout<<ans;


void Fast();
void solve();


int main()
{
	Fast();

		solve();
	return 0;
}

void Fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}


void solve()
{

	int t; cin >> t;
	while (t--)
	{
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        Fp(n)
        {
            cin >> a[i];
        }

        int max_time = *max_element(a.begin(), a.end());
        int result = -1;

        for (int time = max_time; time < max_time + k; ++time) {

            bool all_on = true;
            for (int i = 0; i < n; ++i) {

                if ((time - a[i]) % (2 * k) >= k) 
                {
                    all_on = false;
                    break;
                }
            }
            if (all_on) {
                result = time;
                break;
            }
        }

        C << result << E;
    }

	
}
