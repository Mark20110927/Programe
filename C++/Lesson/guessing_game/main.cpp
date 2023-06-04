#include<iostream>
#include<stdlib.h> 
#include<time.h>
using namespace std;
int main(){
	cout<<"Guess the number!"<<endl;
	cout<<"Please input range from 1 to 100!"<<endl;
	int secret_number;
	srand((int)time(0));
	secret_number = rand() % 100 + 1;
	int guess;
	while(true){
		cin>>guess;
		if(guess < 1 || guess > 100){
			cout<<"Please input a number which from 1 to 100!"<<endl;
			continue;
		}
		cout<<"You guessed:  "<<guess<<endl;
		if(guess > secret_number){
			cout<<"Too big!"<<endl;
		}
		if(guess < secret_number){
			cout<<"Too small!"<<endl;
		}
		if(guess == secret_number){
			cout<<"You win!"<<endl;
			break;
		}
	}
	return 0; 
} 
