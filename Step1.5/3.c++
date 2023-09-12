// Problem: Print from N to 1 using Recursion

/*
    pseudocode:

void func( i, n )
{
   if(i<1) return;
 print(i);
   f( i-1,N );
}
main()
{
  int n;
  input(n);
  f(n,n);
}

*/

//code:
// #include<bits/stdc++.h>
// using namespace std;

// void func(int i, int n){
   
//    // Base Condition.
//    if(i<1) return;
//    cout<<i<<endl;

//    // Function call to print i till i decrements to 1.
//    func(i-1,n);

// }

// int main(){
  
//   // Here, let’s take the value of n to be 4.
//   int n = 4;
//   func(n,n);
//   return 0;

// }



// https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void insertReversento1(vector<int>&arr,int i,int n){

    //base case
    if(i<1)
        return;

    arr.push_back(i);

    //function call to push i into vector till i decrements to 1
    insertReversento1(arr,i-1,n);
}

vector<int> printNos(int x) {
    // Write Your Code Here

    vector<int>arr;

    insertReversento1(arr,x,x);

    return arr;

}