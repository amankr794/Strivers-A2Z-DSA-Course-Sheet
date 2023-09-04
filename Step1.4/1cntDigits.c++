/**************** 1> Number of digits ******************/
// https://www.codingninjas.com/studio/problems/number-of-digits_9173?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTab=0

                                 
                                     // SOLN:1
//code:
// #include<bits/stdc++.h>
// int count(int n){
//     //write your code here

//     //using extraction concept
//     // int cnt = 0;

//     // while(n){

//     //     // int lastDigit = n%10;

//     //      n/=10;
//     //      cnt = cnt + 1;
//     // }

//     // return cnt;


//     //using logarithmic concept
//     int cnt = log10(n)+1;
//     return cnt;
// }
    
//Complexity Analysis:
//Time Complexity: O (n) where n is the number of digits in the given integer
//Space Complexity: O(1)


                                           // SOL: 2
/*
    Approach:
    a> Convert the integer into a string.
    b> Find the length of the string  
*/

// code:
// int count_digits( int n )
// {
//   string x = to_string(n);
//   return x.length(); 
// }

// Complexity Analysis:
// Time Complexity: O (1) 
// Space Complexity: O(1)


                                                //  SOLN:3
/*
    Approach:
    Use logarithm base 10 to count the number of digits. As
    The number of digits in an integer = the upper bound of log10(n).
*/

//code:
// int count_digits( int n )
// {
//   int digits = floor(log10(n) + 1);
//   return digits;
// }

// Complexity Analysis
// Time Complexity: O (1) 

// Space Complexity: O(1)



/****************** 2> Count Digits *********************/
// https://www.codingninjas.com/studio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int countDigits(int n){
	// Write your code here.	
	
	int temp = n, count=0;
	while(temp){

		int digit = temp%10;

		if(digit>=1 && n%digit == 0)
			count++;
		
		temp/=10;
	}

	return count;
}
