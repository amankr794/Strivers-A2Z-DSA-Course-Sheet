// https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int sumodd=0, sumeven=0, digit;

    while(n){
 
        digit = n%10;

        if(digit%2)
            sumodd+=digit;
        else
            sumeven+=digit;
       
       n/=10;
    }
	
	cout<<sumeven<<" "<<sumodd;

}
