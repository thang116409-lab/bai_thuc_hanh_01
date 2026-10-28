#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	if(a==0){
		if(b==0){
			if(c==0) cout<<"VSN"<<endl;
			else cout<<"VN"<<endl;
		}
		else{
			cout<<fixed << setprecision(2)<<-c/b<<endl;
		}
	}
	else{
		float d = b*b-4*a*c;
		if(d<0) cout<<"VN"<<endl;
		else{
		float x1 = (-b-sqrt(d))/(2*a), x2 = (-b+sqrt(d))/(2*a);
		if(d==0) cout<<fixed<<setprecision(2)<<-b/(2*a)<<endl;
		else cout<<fixed<<setprecision(2)<<x1<<" "<<x2<<endl;}
	}
}