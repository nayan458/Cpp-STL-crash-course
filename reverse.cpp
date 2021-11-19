#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int>v={3,1,2,5,6,0};
	
reverse(v.begin(),v.end());
	
	for(auto it : v)
	cout<<it<<" ";                  
	// 0 6 5 2 1 3
	cout<<endl;
	
	
	return 0;
}
