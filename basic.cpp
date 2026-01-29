#include <iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
    int j;
	int counter[10]={0};
    int s_len=s.length();
	for(int i=0;i<s_len;i++){
		for(int j=0;j<10;j++)
		{
			if(s[i]==j){
				counter[j]++;
			}
		}
		cout<<i<<" "<<counter[j]<<"\n";
	}
}