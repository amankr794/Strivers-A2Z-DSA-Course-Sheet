//https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<bits/stdc++.h>
using namespace std;


int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

        int n;
        cin>>n;

        int a=1,b=0,c;
        
        for(int i=1; i<=n; i++){
                c=a+b;
                a=b;
                b=c;
        }

        cout<<c;


        return 0;
       

}
