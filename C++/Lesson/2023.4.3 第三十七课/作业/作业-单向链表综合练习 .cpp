#include<bits/stdc++.h>
using namespace std;
//��ҵ-���������ۺ���ϰ 
//����ڵ�
struct node{
	int data;
	node *next; 
}; 
//����ͷָ�� 
node *head = new node;
//����
//ͷ�巨
void insert_head(int x){
	node *p = new node;
	p->data = x;
	p->next = head->next;
	head->next = p;
} 
//β�巨
void insert_tail(int x){
	node *p = new node;
	node *tmp = head;
	p->data = x;
	while(tmp->next!=NULL)
		tmp = tmp->next;
	tmp->next = p;
	p->next = NULL;
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
	cout<<"2.β�巨����¼������"<<endl;
	cout<<"3.��ӡ��������"<<endl;
	cout<<"4.�������в�ѯֵ�Ƿ����"<<endl;
	cout<<"5.ɾ��ĳ���ڵ�ֵ"<<endl;
	cout<<"6.��ȡ������"<<endl;
	cout<<"7.�ж������Ƿ�Ϊ��"<<endl; 
	cout<<"8.�˳�����"<<endl; 
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
//����
void size(){
	int res = 0;
	node *p = head;
	while(p->next!=NULL){
		res++;
		p = p->next;
	}
	cout<<res<<endl;
} 
//�жϿ�
bool kong(){
	node *p = head;
	return head->next==NULL; 
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
				cout<<"������Ҫ�������"<<endl;
				int x4;
				cin>>x;
				insert_tail(x);
				break;
			case 3:
				show();
				break;
			case 4:
				int x1;
				cout<<"������Ҫ���ҵ���"<<endl; 
				cin>>x;
				if(find(x))
					cout<<"�ҵ��˸�Ԫ��"<<endl;
				else
					cout<<"δ�ҵ���Ԫ��"<<endl; 
				break;
			case 5:
				cout<<"�������е�Ԫ��"<<endl;
				show();
				cout<<"������Ҫɾ���ĵڼ�������"<<endl;
				int x2;
				cin>>x2;
				shanchu(x2); 
				break;
			case 6:
				size();
				break;
			case 7:
				if(kong()==true)
					cout<<"����Ϊ��"<<endl;
				else
					cout<<"����ǿ�"<<endl;
				break;
			case 8:
				return 0;
				
		} 
	}
	return 0; 
} 
