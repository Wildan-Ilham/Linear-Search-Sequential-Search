#include <iostream>
using namespace std;

bool linearSearch(int arr[],int n, int value){
	int pos{0};
	bool found {false};

	while(pos < n && !found){
		if(arr[pos] == value){
			found = true;
		}else{
			pos += 1;
		}
	}
	return found;
}

void cetakArray(int arr[],int n){
	cout<<"[ ";
	for(int i{0};i<n;i++){
		cout<<arr[i];
		if(i != n-1){
			cout<<", ";
		}
	}
	cout<<" ]"<<endl;
}
	
int main(){
	int data[5]{100,200,500,300,400};
	int s;
	cetakArray(data,5);
	cout<<"Masukkan data yang anda cari: ";
	cin>>s;
	cout<<(linearSearch(data,5,s) ? " ditemukan" : " tidak ditemukan")<<endl;
}
	
