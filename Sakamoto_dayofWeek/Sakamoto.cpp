#include<iostream>
using namespace std;
// SAKAMOTO Algorithm

int dow(int y,int m,int d){
	static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
	y -= m < 3;
	return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7 + 1;
}

int main(){
	int y,m,d;
	cout<<"Nhap: {YYYY,MM,dd}"<<endl;
	cin>>y>>m>>d;
	int day = dow(y,m,d);
	cout<<day;
	return 0;
}