#include<bits/stdc++.h>
using namespace std;
//½á¹¹ÌåÅÅĞò
struct student{
	string name;
	int age;
}a[100]; 
bool cmp(student a,student b){
	if(a.age<b.age)
		return true;
	else
		return false;
}
int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i].name>>a[i].age;
	}
	sort(a+1,a+1+n,cmp);
	for(int i = 1;i<=n;i++){
		cout<<a[i].name<<' '<<a[i].age<<endl;
	}
	return 0; 
} 
