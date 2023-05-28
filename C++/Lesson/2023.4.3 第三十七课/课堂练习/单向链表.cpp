#include<bits/stdc++.h>
using namespace std;
//单向链表综合练习 
//定义节点
struct node{
	int data;
	node *next; 
}; 
//设置头指针 
node *head = new node;
//插入
//头插法
insert_head(int x){
	node *p = new node;
	p->data = x;
	p->next = head->next;
	head->next = p;
} 
//展示链表
void show(){
	node *p = head->next;
	while(p!=NULL){
		cout<<p->data<<' ';
		p = p->next;
	}
	cout<<endl;
} 
// 查找
bool find(int x){
	node *p = head->next;
	while(p!=NULL){
		if(p->data==x)
			return true;
		p = p->next;
	}
	return false;
} 
//菜单 
void menu(){
	cout<<"------------------------------------"<<endl;
	cout<<"1.头插法进行录入数据"<<endl;
	cout<<"2.打印链表内容"<<endl;
	cout<<"3.在链表中查询值是否存在"<<endl;
	cout<<"4.删除某个节点值"<<endl;
	cout<<"5.退出程序"<<endl; 
	cout<<"------------------------------------"<<endl;
}
//删除
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
		cout<<"请输入对应操作"<<endl;
		cin>>op;
		switch(op){
			case 1:
				cout<<"请输入要插入的数"<<endl;
				int x;
				cin>>x;
				insert_head(x);
				break;
			case 2:
				show();
				break;
			case 3:
				int x1;
				cout<<"请输入要查找的数"<<endl; 
				cin>>x;
				if(find(x))
					cout<<"找到了该元素"<<endl;
				else
					cout<<"未找到该元素"<<endl; 
				break;
			case 4:
				cout<<"这是所有的元素"<<endl;
				show();
				cout<<"请输入要删除的第几个数数"<<endl;
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
