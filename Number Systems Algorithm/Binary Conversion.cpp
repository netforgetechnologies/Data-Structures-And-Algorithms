#include<iostream>
#define size 200

using namespace std;

class stack{
	int top;
	int array[size];
	public:
		stack(){
			top=-1;
		}
		
		void push(int item){
			if(top==size-1){
				cout<<"Stack Over Flow";
				return;
			}
			else{
				top++;
				array[top]=item;
			}
		}
		
		void pop(){
			if(top==-1){
				cout<<"Stack underflow";
				return;
			}
			else{
				cout<<array[top]<<" ";
				top--;
			}
		}
		void display(){
			while(top!=-1){
				pop();
			}
		}
};#include<iostream>
#define size 200

using namespace std;

class stack{
	int top;
	int array[size];
	public:
		stack(){
			top=-1;
		}
		
		void push(int item){
			if(top==size-1){
				cout<<"Stack Over Flow";
				return;
			}
			else{
				top++;
				array[top]=item;
			}
		}
		
		void pop(){
			if(top==-1){
				cout<<"Stack underflow";
				return;
			}
			else{
				cout<<array[top]<<" ";
				top--;
			}
		}
		void display(){
			while(top!=-1){
				pop();
			}
		}
};

int main(){
	stack s;
	int i,n;
	int remainder;
	cout<<"Enter the Number to be Changed to Base 3: ";
	cin>>n;
	
	while(n>0){
		remainder=n%3;
		s.push(remainder);
		n=n/3;
	}
	s.display();
}

int main(){
	stack s;
	int i,n;
	int remainder;
	cout<<"Enter the Number to Binary: ";
	cin>>n;
	
	while(n>0){
		remainder=n%2;
		s.push(remainder);
		n=n/2;
	}
	s.display();
}
