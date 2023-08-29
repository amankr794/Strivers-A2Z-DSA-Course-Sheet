// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718013/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_10

// Pattern – 10: Half Diamond Star Pattern

class Solution{
public:
    void printTriangle(int n) {
        // code here
        
        //outer for loop
        for(int i=1; i <= 2*n-1; i++){
            
            int star = i;
            
            if(i>n) star = 2*n-i;
            
            //inner for loop
            for(int j=1; j<=star; j++){
                cout<<"* ";
            }
            
            cout<<endl;
        }
    }
};