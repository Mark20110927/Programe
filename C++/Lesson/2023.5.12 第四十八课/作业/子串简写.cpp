#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
char str[N];
int s[N];
int n, k;
char st, ed;
long long res;
int main()
{
	cin>>k>>str+1>>st>>ed;
	n = strlen(str + 1);
	for (int i = 1, t = 0; i <= n; i++)
	{
		if (str[i] == st) 
			t++;
		s[i] = t;
		if (i >= k && str[i] == ed) 
			res += s[i - k + 1];
	}
	cout<<res;
return 0;
}
