// Introduction to Recursion – Understand Recursion by printing something N times

// Q> Let’s say we have to print integers starting from 0 till 3 using recursion

/**** Approach: using global variable concept in recursion *****/

                      
                      /****  Pseudocode ****/
/*
        int count = 0;
        void func(){

        if(count == 3 ) return;
        print(count);
        count++;
        func();
        }

        main()
        {

            func();
        }

*/



//Recursive code:

#include<iostream>
using namespace std;

int count=0; //declaring a global variable

void func(){

    // Base Condition.
    if(count==3)
        return;

    cout<<count<<" ";
    // Count Incremented
    count++;

    // Recursive function call
    func();
    
}

int main(){

    func();
}

/*
    output:
    0
    1
    2

*/