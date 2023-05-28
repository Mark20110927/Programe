#include<bits/stdc++.h>
using namespace std;
//◊÷∑˚¥Æ≈≈–Ú- ÷–¥≈≈–Ú 
const int N =1e3+10;
char s[N][N],tmp[N]; 
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++)
		cin>>s[i];
	// ÷–¥≈≈≈›≈≈–Ú 
	for(int i = 1;i<=n-1;i++){
		for(int j = 1;j<=n-i;j++){
			if(strcmp(s[j],s[j+1])>0){
				strcpy(tmp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],tmp);
				
			}
		}
	}
	for(int i = 1;i<=n;i++)
		cout<<s[i]<<endl;
	return 0; 
} 
