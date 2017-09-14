/*
 * question1.cpp
 *
 *  Created on: 24-Jun-2016
 *      Author: arun
 */
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int test,n,m,i,val=0;
	scanf("%lld",&test);
	while(test!=0){
       scanf("%lld %lld",&n,&m);
 std::cout<<abs(n-m)<<"\n";
		test--;
	}
}
