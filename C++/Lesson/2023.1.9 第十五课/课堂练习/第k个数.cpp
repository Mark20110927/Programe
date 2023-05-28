#include<bits/stdc++.h>
using namespace std;
//µÚk¸öÊı 
int a[]={4,3,5,9,8,1,3,4,9} ;
int zhao(int n){
	int count; S
	for(int i = 0;i<=8;i++){
		count = 0;
		for(int j = 0;j<=8;j++){
			if(a[i]<a[j])
				count++;
		}
		if(count+1 == n)
			return a[i];
	}
}
int main(){
	int n;
	cin>>n;
	cout<<zhao(n)<<endl;
	return 0; 
} 
