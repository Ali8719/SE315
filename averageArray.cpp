#include<iostream>
using namespace std;

class average{
	public:
		void avg(int x[])
		{
			int i=0;
			int s=0;
			while(x[i]){
				s=x[i]+s;
				i=i+1;
			}
			int ag=s/i;
			cout<<s<<"   "<<i<<endl;
			cout<<ag;
		}
};
int main(){
	average o1;
	int c[]={5,5,5,5,20};
	o1.avg(c);
}
