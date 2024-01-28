#include<iostream>
using namespace std;

int i,n;
double array[100];

void getvalues(){
	cout<<"How Many Values Are you Entering: "<<endl;
	cin>>n;
	cout<<"Enter the Values: "<<endl;
	for(i=0;i<n;i++){
		cin>>array[i];
	}
}
void print(){
	cout<<"The Valuesa are: \n"<<endl;
	for(i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}
void binarysearch(){
	
	int searchkey;
	cout<<"Enter value to Search: "<<endl;
	cin>>searchkey;
	
	int low=0;
	int high=n-1;
	int mid;
	
	while(low<=high){
		mid=(low+high)/2;
		if(searchkey==array[mid]){
			cout<<searchkey<<" Has been found at Index ["<<mid<<"]"<<endl;
			cout<<"Enter the Elements to replace with: ";int z;cin>>z;
			array[mid]=z;
			break;
		}
		else if( searchkey<array[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
}

int main(){
	getvalues();
	binarysearch();
	print();
	
	return 0;
}
