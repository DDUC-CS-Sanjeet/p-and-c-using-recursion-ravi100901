#include<iostream>
using namespace std;
int permutation( int n,int r)
{
	if(r>0)
	return n*permutation( n-1,r-1);
	else
		return 1;
}
int combination(int n,int r)
{
	if(r>0)
	return( (n)*combination(n-1,r-1))/r;
	else 
		return 1;
}
int main()
{
	int n,r;
	cout<<"permutation and combination:";
	cout<<"enter value of n :"<<endl;
	cin>>n;
	cout<<"enter value of r :";
	cin>>r;
 try
 {
 	if( n<0||r<0)
 	throw(100);
 	else
 	{
 		int resultp=permutation(n,r);
 		int resultc=combination(n,r);
 		cout<<"permutation" <<resultp<<endl;
		 cout<<"combination"<<resultc<<endl;
		 }
		 
	 }	
	 catch(int a)
	 {
	 	cout<<" you enter negative number:";
	 }
	 return 0;
}
