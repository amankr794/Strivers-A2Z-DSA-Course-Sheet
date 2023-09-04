//Problem Statement: Given a number N reverse the number and print it.

// #include<stdio.h>

// int main()
// {
//     int N = 123;
//     int num = N;
//     int reverse = 0;
//     while(N!=0)
//     {
//         int digit = N%10;
//         reverse = reverse*10+digit;
//         N = N/10;
//     }
//     printf("The reverse of the %d is %d",num,reverse);
// }

// Output: The reverse of the 123 is 321
//Time Complexity: O(n), where n is the length of the given number
//Space Complexity: O(1)


// https://www.codingninjas.com/studio/problems/reverse-bits_2181102?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
                              /************ Reverse the bits of a number (Reverse Bits) ****************/

long reverseBits(long n) {
    // Write your code here.
        
    long result=0;
    for(int i=0;i<32;i++){
        long lsb=n&1;
        long reverseLsb =lsb<<(31-i);
       result=result|reverseLsb;
       n=n>>1;

    }
    return result;
}


// leetcode( Reverse Integer )
// class Solution {
// public:
//     int reverse(int x) {
       
//        int ans=0;
//        while(x!=0){
           
//            int digit = x % 10; 
           
//            if((ans > INT_MAX/10 )|| (ans < INT_MIN/10 ))
//                 return 0;

//            ans = (ans * 10) + digit;
//            x = x/10;
//        } 
      
//         return ans;
//     }
// };


// or
class Solution {
public:
    int reverse(int x) {
       
    //1st Approach
    //    int ans=0;
    //    while(x!=0){
           
        
        //    int digit = x % 10; 

        //    if((ans > INT_MAX/10 )|| (ans < INT_MIN/10 ))
        //         return 0;

        //    ans = (ans * 10) + digit;
        //    x = x/10;

        
        //2nd Approach
        
        long ans=0;    
       
        while(x){
         ans = ans*10 + x%10; // find remainder and add its to ans
         x = x/10;     // Update the value of x
        }
       
        if(ans>INT_MAX || ans<INT_MIN) 
            return 0; // checking 32 bit range if ans is outside the range then return 0 

         return ans;  // if ans in the 32 bit range return ans
    }
        


// or
class Solution {
public:
    int reverse(int x) {

        int ans=0;

        if(x<=INT_MIN)
            return 0;

        bool isNeg=false;
        if(x<0){
            x=-x;
            isNeg=true;
        }

        while(x>0){
            int digit=x%10;
            if(ans>INT_MAX/10)
                return 0;
            ans=ans*10+digit;
            x/=10;
        }
        return isNeg?-ans:ans;
    }
};
