#include<bits\stdc++.h>
using namespace std;
//��ҵ-�����ά���� 
int main(){
	int chang,kuan,gao;
	srand((int)time(NULL));
	int i,j,k;
	cout<<"������һά����ĳ���"; 
	cin>>chang;
	//��̬����һά����
	int *p = new int[chang];
	//����һά�����ֵ
	for(i = 0;i<chang;i++)
		p[i] = rand()%10;
	//���һά����
	for(i = 0;i<chang;i++)
		cout<<p[i]<<" ";
	cout<<endl;
	//�ͷ�һά����
	delete []p;
	cout<<"�������ά����ĳ�����";
	cin>>chang>>kuan; 
	//��̬�����ά����
	int **p1 = new int *[chang];
	for(i = 0;i<chang;i++)
		p1[i] = new int[kuan];
	//�����ά�����ֵ
	for(i = 0;i<chang;i++)
		for(j = 0;j<kuan;j++)
			p1[i][j] = rand()%10;
	//�����ά����
	for(i = 0;i<chang;i++){
		for(j = 0;j<kuan;j++)
			cout<<p1[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
	//�ͷŶ�ά����
	for(i = 0;i<chang;i++)
		delete []p1[i];
	cout<<"��������ά����ĳ������ߣ�";
	cin>>chang>>kuan>>gao;
	//��̬������ά���飺
	int ***p2 = new int **[gao];
	for(i = 0;i<gao;i++)
		p2[i] = new int *[chang];
	for(i = 0;i<gao;i++)
		for(j = 0;j<chang;j++)
			p2[i][j] = new int[kuan];
	//������ά����ֵ��
	for(i = 0;i<gao;i++)
		for(j = 0;j<chang;j++)
			for(k = 0;k<kuan;k++)
				p2[i][j][k] = rand()%10;
	//�����ά���飺
	for(i = 0;i<gao;i++){
		cout<<"��"<<i+1<<"��"<<endl;
		for(j = 0;j<chang;j++){
			for(k = 0;k<kuan;k++)
				cout<<p2[i][j][k]<<' ';
			cout<<endl;
		}
		cout<<endl;
	}
	cout<<endl;
	//�ͷ���ά����
	for(i = 0;i<gao;i++)
		for(j = 0;j<chang;j++)
			delete []p2[i][j];
	for(i = 0;i<gao;i++)
		delete []p2[i];
	delete []p2;
	return 0 ;
}
