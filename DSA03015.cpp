#include <bits/stdc++.h>
using namespace std;
#define faster(); ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
#define el "\n"
const long long big = 1e6;

int main() {
    faster();
    int t;
	cin >> t;
	while ( t-- )
	{	
		int n, s, m, res = 0, bought = 0;
		cin >> n >> s >> m;
		if ( n < m ) cout << -1;
		else
		{
			for (int i = 1 ; i <= s ; i++)
			{
				if ( i % 7 != 0 )
				{
					bought += n;
					res++;
				}
				if ( bought >= s * m ) break;
			}
			if ( bought < s * m ) cout << -1;
			else cout << res;
		}
		if ( t != 0 )
		{
			cout << endl;
		}
	}
}
