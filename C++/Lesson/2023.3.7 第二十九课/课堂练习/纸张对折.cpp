#include<bits/stdc++.h>
using namespace std;
//ж╫уе╤туш 
int main(){
	string s;
	cin>>s;
	int n = s[1]-'0';
	int chang = 1189,kuan = 841;
	while(n--){
		chang/=2;
		if(chang<kuan)
			swap(chang,kuan);
	}
	cout<<chang<<endl<<kuan; 
	return 0; 
} 
