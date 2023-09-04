/*************** Check Armstrong ******************/
// https://www.codingninjas.com/studio/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here

	int n;
	cin>>n;

	
	int count=0;
	int temp = n;
	int originalNum = n; 
    
	//count the no. of digits in n
	while(n>0){
		n/=10;
		count++;
	} 
	
	int sum = 0;
	while(temp>0){
		int lastDigit = temp%10;
		temp/=10;
		sum = sum + pow(lastDigit, count);
	}

	if(originalNum == sum)
		cout<<"true";
	else
		cout<<"false";
}



/********** https://leetcode.com/problems/armstrong-number/ ******/