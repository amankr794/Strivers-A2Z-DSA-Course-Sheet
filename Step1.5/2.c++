// Problem: Print your Name 5 times using recursion

/***** Concept 1: Using Global Variable Concept ****/

//In this problem, we can use a global variable count that can be incremented each time we call a function, and keep a track of how many times we have printed the name?

//pseudocode:
/*
    count=0;
    
    void printName(){

        if(count>5)return;
        print(name);
        count++;

        printName();
    }

    main(){
        int n=5;
        printName();
    }
*/

// Recursive code:
// #include<iostream>
// using namespace std;

// int count=1; //declaring a global variable

// void printName(){

//     //base case
//     if(count>5)
//         return ;

//     cout<<"Aman"<<" ";
//     count++;

//     //recursive call
//     printName();
// }

// int main(){
//     printName();
// }



/************* Problem: Print your Name N times using recursion ************/

/***** Concept 1: Using Change of Parameter Concept ****/

//Approach: For this problem, we’re going to be using a function along with parameters in which 
//we can keep track of the number of times we’ve printed something

/*
    pseudocode:

    void printName(i,n){

        if(i>n) return;

        print(name);

        printName(i+1,n);
    }

    main(){
        int n;
        input(n);
        printName(1,n);
    }
*/

//Code:
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<"Aman"<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 5.
  int n = 5;
  func(1,n);
  return 0;

}

/*
    T.C: O(n) { Since the function is being called n times, and for each function, 
                we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }


    S.C:O(n)   { In the worst case, the recursion stack space would be full with all 
                 the function calls waiting to get completed and that would make it an O(N) recursion stack space }.
*/