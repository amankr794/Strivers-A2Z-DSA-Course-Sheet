// https://practice.geeksforgeeks.org/problems/square-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_1

// Pattern-1: Rectangular Star Pattern

class Solution {
  public:
    void printSquare(int n) {
        // code here
        
        //outer for loop(for rows)
        
        for(int i=0; i<n; i++)
        {
            
            //inner for loop(for col)
            
            for(int j=0; j<n; j++)
            {
                
                cout<<"* ";
            }
            
            cout<<endl;
        }
    }
};