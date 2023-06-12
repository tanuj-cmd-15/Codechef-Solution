#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,m,d;
	    cin>>x>>m>>d;
	    int multi = m*x;
	    int sum = x+d;
	    int ans= min(multi,sum);
	    cout<<ans<<endl;
	}
	return 0;
}


//python solution of lazychef
//
//t = int(input())
//for i in range(t):
//    x,m,d= map(int,input().split())
//    multi = x*m
//    add = x+d 
//    print(min(multi,add))
