#include<iostream>
using namespace std;
//˳�����������
int main(){
	int a,b;//����a�Ǵ������b��С����
	cin>>a>>b;
	if(a<b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	//cout<<tmp;ע�⣺�����tmp��һ���ֲ�������������if����ʹ�� 
	cout<<a<<" "<<b<<endl;
	return 0; 
} 
