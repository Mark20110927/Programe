#include<bits/stdc++.h>
using namespace std;
const int N = 200;
int num[N],end = 0;
stack<int> s;
void shuchu(){
	if(s.empty())
		return;
	int tmp = s.top();
	s.pop();
	if(tmp!=0){
		cout<<tmp<<' ';
	}
	shuchu();
}
int main(){
	for(int i = 0;;i++){
		cin>>num[i];
		s.push(num[i]);
		if(num[i]==0){
			end = i;
			break;
		}
	}
	shuchu();
	return 0; 
} 
