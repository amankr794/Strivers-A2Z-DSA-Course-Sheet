/****** Brute force approach ******/
/*Approach: Running the for loop till the number (Using Iterative solution) */

// #include<iostream>
// using namespace std;

// void printDivisorsBruteForce(int n){

// 	cout<<"The Divisors of "<<n<<" are:"<<endl;
// 	for(int i = 1; i <= n; i++)
// 		if(n % i == 0)
// 			cout << i << " ";
	
// 	cout << "\n";
// }
	

// int main(){
		
// 	printDivisorsBruteForce(36);
	
// return 0;
// }

// O/P:Output: The Divisors of 36 are:
//             1 2 3 4 6 9 12 18 36

// Complexity Analysis
// Time Complexity: O(n), because the loop has to run from 1 to n always.
// Space Complexity: O(1), we are not using any extra space.




/****** Optimal Approach ******/
/* Approach: Running the for loop till the square root of the number */

// #include<bits/stdc++.h>
// #include<iostream>
// #include<cmath>
// using namespace std;

// void printDivisorsOptimal(int n){
    
//     cout<<"The Divisors of "<<n<<" are:"<<endl;
// 	for(int i = 1; i <= sqrt(n); i++)
// 		if(n % i == 0){
// 			cout << i << " ";
// 			if(i != n/i) cout << n/i << " ";
// 		}
	
// 	cout << "\n";
// }

// int main(){
// 	printDivisorsOptimal(36);
//         return 0;
// }

// Output: The Divisors of 36 are:
//         1 36 2 18 3 12 4 9 6




/***** Sum of all divisors *****/
// https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int sumOfAllDivisors(int n) {
  // Write your code here.
  int sumDivisor = 0; // to store sum of divisor of number from 1 - n
  
  for (int i = 1; i <= n; i++) {

    int num = i; // get the ith number
    
    //finding sum of 
    for (int i = 1; i * i <= num; i++) {
      // one factor
      if (num % i == 0) {
        sumDivisor = sumDivisor + i;
        // other factor
        if ((num / i) != i) // corner case: i and n/i should not be same
        {
          sumDivisor = sumDivisor + num / i;
        }
      }
    }
  }

  return sumDivisor;
}


/* or */

/*
Let’s take ‘n’  = ‘5’. Values of ‘sumOfDivisors(i)’ for each ‘i’ from 1 to 5 is as follows:

sumOfDivisors(1) = 1.
sumOfDivisors(2) = 2 + 1.
sumOfDivisors(3) = 3 + 1.
sumOfDivisors(4) = 4 + 2 +1.
sumOfDivisors(5) = 5 + 1.

Let’s count the number of occurrences of each ‘i’ from 1 to ‘n’ in the above expressions.

1 occurs 5 times.
2 occurs 2 times.
3 occurs 1 time.
4 occurs 1 time.
5 occurs 1 time.
From this we can observe that an integer ‘i’ is added to the final answer 5/i times (where ‘/’ is floor integer division). Therefore our final answer for given ‘n’ would be ∑ i * (n/i) for all ‘i’ from 1 to ‘n’.


The steps are as follows:
function sumOfAllDivisors(int ‘n’)

1> Initialize ‘ans’ = 0
2> For ‘i’ from 1 to ‘n’:
     ‘ans’ += i * (n / i)
3> Return ‘ans’

Time Complexity
O(n), where ‘n’ is the given integer.

We are iterating via ‘i’ from 1 to ‘n’. 
Hence, the time complexity is O(n).

Space Complexity
O(1) b/c We are not using any extra space.


*/

/*
    Time Complexity: O(n)

    Space Complexity: O(1)

    Where 'n' is the given integer.
*/

// int sumOfAllDivisors(int n)
// {
//     int ans = 0;

//     // Iterating over all 'i'. Each 'i' contributes to final answer
//     // exactly 'floor(n/i)' times.
//     for (int i = 1; i <= n; i++)
//     {
//         ans += i * (n / i);
//     }

//     return ans;
// }