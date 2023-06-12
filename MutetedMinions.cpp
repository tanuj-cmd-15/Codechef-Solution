#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, n, k, a, w;
	cin >> t;
	while(t-->0)
	{
	    cin >> n >> k;
	    w=0;
	    for(int i=1; i<=n; i++)
	    {
	        cin >> a;
	        if((a+k) % 7 == 0)
	            w++;
	    }
	    cout<<w<<endl;
	}
}
//
//
//
///* package codechef; // don't place package name! */
//
//import java.util.*;
//import java.lang.*;
//import java.io.*;
//
///* Name of the class has to be "Main" only if the class is public. */
//class Codechef
//{
//	public static void main (String[] args) throws java.lang.Exception
//	{
//		Scanner sc = new Scanner(System.in);
//		int t = sc.nextInt();
//		while(t-->0){
//		    int N = sc.nextInt();
//		    int K = sc.nextInt();
//		    int[] A = new int [N];
//		    int count = 0;
//		    for (int i = 0 ; i < N ; i++){
//		        A[i] =sc.nextInt();
//		        if((A[i]+K)%7 == 0){
//		            count++;
//		        }
//		    }
//		    System.out.println(count);
//		}
//	}
//}
