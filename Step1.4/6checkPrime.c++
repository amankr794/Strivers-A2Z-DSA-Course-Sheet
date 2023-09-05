/*Brute Force*/
// bool isPrime(int N) {
//   for (int i = 2; i < N; i++) {
//     if (N % i == 0) {
//       return false;
//     }
//   }
//   return true;
// }


// or

// int cnt=0; //initial count of divisor
// for(int i=1;i<=n;i++){
//     if(n%i==0){
//         //found divisor count it
//         cnt++;
//     }

// if(cnt==2)
//     cout<<"Prime";
// else
//     cout<<"Not Prime"
// }


//Complexity Analysis
//Time Complexity: O(n)
//Space Complexity: O(1)



/****Optimal Approach****/
//Approach: Running the for loop till the square root of the number

// bool isPrime(int N) {
//   for (int i = 2; i < sqrt(N); i++) {
//     if (N % i == 0) {
//       return false;
//     }
//   }
//   return true;
// }

//or

// for(int i=1; i*i<=n; i++){
//     if(n%i==0){
//         cnt++;     //one factor
//         if((n/i) !=i )
//            cnt++   //other factor
//     }
// if(cnt==2)
//     cout<<"Prime";
// else
//     cout<<"Not Prime"
// }

//Complexity Analysis
//Time Complexity: O(√n)
//Space Complexity: O(1)