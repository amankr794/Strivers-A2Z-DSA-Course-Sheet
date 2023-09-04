// Problem Statement:  Given a number check if it is a palindrome.
// An integer is considered a palindrome when it reads the same backward as forward.

#include <iostream>

using namespace std;

int reverseNum(int X){
    int result=0;
    
    while(X!=0){
        //extract the last digit
        int digit = X%10;
        //Append the last digit
        result=result*10+digit;
        //Shrink X(i.e num) by eliminating the last digit
        X/=10;
    }
    return result;
    
}

int main()
{
    int num;
    cin>>num;
    
    //calling reverseNum function
    int ans = reverseNum(num);
    
    if(num==ans)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}

//i/p:121         7            78987       1331        123221
//o/p:Palindrome  Palindrome   Palindrome  Palindrome  Not Palindrome
//Time Complexity: O(logN) for reversing N digits of input integer.
//Space Complexity: O(1)



/************* Palindrome number*************/
// https://www.codingninjas.com/studio/problems/palindrome-number_624662?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
// #include<iostream>
// using namespace std;

// int main() {
// 	// Write your code here

// 	int n;
// 	cin>>n;

// 	int revNum=0;
// 	int temp = n;

// 	while(n>0){

// 		int lastDigit = n%10;
// 		n/=10;

// 		revNum = (revNum * 10) + lastDigit;
// 	}

// 	if(revNum == temp)
// 		cout<<"true";
// 	else
// 		cout<<"false";
	
// }




/*********** leetcode(Problem List) ****************/
// https://leetcode.com/problems/palindrome-number/description/
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         int temp=x;

//         if(temp<0)
//             return false;

//         // int reverse=0;  increase the range of datatypes
//         long long reverse=0;
//         while(temp!=0){
//             // extract the last digit
//             int digit=temp%10;
//             // append the last digit
//             reverse=reverse*10+digit;
//             //shrink the number by eliminating the last digit
//             temp/=10;
//         }

//         if(reverse==x)
//             return true;
//         else
//             return false;
//     }
// };


//or
// class Solution {
// public:
//     bool isPalindrome(int x) {
        
//         long long int temp = x;
//         long long int rev = 0;
//         int digit = 0;

//         while(temp){
            
//             if(temp<0)
//                 temp=-(temp);
            
//             digit = temp%10;
//             rev = rev * 10 + digit;
//             temp/=10;
//         }

//         if(x == rev)
//             return true;
//         return false;
//     }
};
