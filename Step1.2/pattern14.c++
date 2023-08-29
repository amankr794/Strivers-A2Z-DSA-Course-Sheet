// Increasing Letter Triangle Pattern

// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662284916/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_14

class Solution {
  public:
    void printTriangle(int n) {
        // code here
         for(int i=0; i<n; i++){

        for(char ch = 'A'; ch<='A'+i; ch++)
            cout<<ch;
        
        cout<<endl;
    }
    }
};