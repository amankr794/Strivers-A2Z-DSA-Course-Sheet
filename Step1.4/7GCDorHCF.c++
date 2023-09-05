// Brute Force Approach
// Approach: Simply traverse from 1 to min(a,b) and check for every number.

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int num1 = 4, num2 = 8;
// 	int ans;
// 	for (int i = 1; i <= min(num1, num2); i++) {
// 		if (num1 % i == 0 && num2 % i == 0) {
// 			ans = i;
// 		}
// 	}
// 	cout << "The GCD of the two numbers is "<<ans;
// }

// Output: The GCD of the two numbers is 4

//Complexity Analysis
//Time Complexity: O(N). or O(min(num1,num2)
//Space Complexity: O(1).


//Optimal Approach
//Approach:Using Euclidean’s theorem -->  gcd(a,b)=gcd(a%b, b) where a>b
 int a, b;
 cin>>a>>b;
  while (a > 0 && b > 0) {
    if (a > b) {
      // a is greater
      a = a % b;
    } else {
      // means b is greater
      b = b % a;
    }
  }
  if (a == 0)
    return b; // gcd is b
  else
    return a; // gcd is a
}

//Complexity Analysis
//Time Complexity: O(logɸmin(a,b)), where ɸ is 1.61.
//Space Complexity: O(1).


// https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
int calcGCD(int n, int m) {
  // Write your code here.

  // int gcd=1,divisor,dividend;

  // if(n<=m){
  //     divisor=n;
  //     dividend=m;
  // }
  // else{
  //     divisor=m;
  //     dividend=n;
  // }

  //     while(1){
  //         int rem=dividend%divisor;
  //         if(rem==0){
  //             gcd=divisor;
  //             return gcd;
  //         }
  //         dividend=divisor;
  //         divisor=rem;
  //     }



  /*Using eucliden algorithm
    
    a> gcd(a,b)=gcd(a%b, b) where a>b  this approach is better than below b option
                   or
    b> gcd(a,b)=gcd(a-b, b) where a>b
  
  
  */

//a> gcd(a,b)=gcd(a%b, b) where a>b (OPTIMAL APPROACH)
  int a = n, b = m;
  while (a > 0 && b > 0) {
    if (a > b) {
      // a is greater
      a = a % b;
    } else {
      // means b is greater
      b = b % a;
    }
  }
  if (a == 0)
    return b; // gcd is b
  else
    return a; // gcd is a
}



// b> gcd(a,b)=gcd(a-b, b) where a>b    (Partially Accepted -- TLE)
//   int a = n, b = m;
//   while (a > 0 && b > 0) {
//     if (a > b) {
//       // a is greater
//       a = a - b;
//     } else {
//       // means b is greater
//       b = b - a;
//     }
//   }
//   if (a == 0)
//     return b; // gcd is b
//   else
//     return a; // gcd is a
// }