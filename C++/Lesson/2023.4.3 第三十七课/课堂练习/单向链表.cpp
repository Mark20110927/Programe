#include<bits/stdc++.h>
using namespace std;
//���������ۺ���ϰ 
//����ڵ�
struct node{
	int data;
	node *next; 
}; 
//����ͷָ�� 
node *head = new node;
//����
//ͷ�巨
insert_head(int x){
	node *p = new node;
	p->data = x;
	p->next = head->next;
	head->next = p;
} 
//չʾ����
void show(){
	node *p = head->next;
	while(p!=NULL){
		cout<<p->data<<' ';
		p = p->next;
	}
	cout<<endl;
} 
// ����
bool find(int x){
	node *p = head->next;
	while(p!=NULL){
		if(p->data==x)
			return true;
		p = p->next;
	}
	return false;
} 
//�˵� 
void menu(){
	cout<<"------------------------------------"<<endl;
	cout<<"1.ͷ�巨����¼������"<<endl;
	cout<<"2.��ӡ��������"<<endl;
	cout<<"3.�������в�ѯֵ�Ƿ����"<<endl;
	cout<<"4.ɾ��ĳ���ڵ�ֵ"<<endl;
	cout<<"5.�˳�����"<<endl; 
	cout<<"------------------------------------"<<endl;
}
//ɾ��
void shanchu(int n){
	node *qian = head;
	n-=1;
	while(n--)
		qian = qian->next;
	node *hou = qian->next;
	qian->next = hou->next;
	delete hou;
} 
int main(){
	head->next = NULL;
	int op;
	menu();
	while(1){
		cout<<"�������Ӧ����"<<endl;
		cin>>op;
		switch(op){
			case 1:
				cout<<"������Ҫ�������"<<endl;
				int x;
				cin>>x;
				insert_head(x);
				break;
			case 2:
				show();
				break;
			case 3:
				int x1;
				cout<<"������Ҫ���ҵ���"<<endl; 
				cin>>x;
				if(find(x))
					cout<<"�ҵ��˸�Ԫ��"<<endl;
				else
					cout<<"δ�ҵ���Ԫ��"<<endl; 
				break;
			case 4:
				cout<<"�������е�Ԫ��"<<endl;
				show();
				cout<<"������Ҫɾ���ĵڼ�������"<<endl;
				int x2;
				cin>>x2;
				shanchu(x2); 
				break;
			case 5:
				return 0;
				
		} 
	}
	return 0; 
} 
