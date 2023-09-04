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