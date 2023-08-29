// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_8

// Inverted Star Pyramid

class Solution{
public:

void printTriangle(int n){
     //outer for loop(rows)
    for(int i=0; i<n; i++){

        //three inner for loop

        //space
        for(int j=0; j<i; j++)
            cout<<" ";

        //star
        for(int j=0; j<2*n-(2*i+1); j++)
            cout<<"*";

        //space
        for(int j=0; j<i; j++)
            cout<<" ";

        cout<<endl;
    }
}
	    
};