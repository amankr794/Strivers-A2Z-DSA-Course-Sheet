// https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9

// Diamond Star Pattern

class Solution {
  public:
    void printDiamond(int n) {
        
    //1st part
    //outer for loop
        for(int i=0;i<n;i++){
            
            //three inner loop

                //space
                int space = 1;
                while(space <= n-(i+1)){
                    cout<<" ";
                    space++;
                }
                
                //stars
                int star=1;
                while(star<=i+1){
                    cout<<"* ";
                    star++;
                }

                //space
                // int Space = 1;
                // while(Space <= n-(i+1)){
                //     cout<<" ";
                //     Space++;
                // }
                
            cout<<endl;
            
        }



    //2nd part
    //outer for loop
    for(int i=0; i<n; i++){

        //three inner for loop

        //space
        for(int j=0; j<i; j++)
            cout<<" ";

        //star
        for(int j=0; j<n-i; j++)
            cout<<"* ";

        //space
        // for(int j=0; j<i; j++)
        //     cout<<" ";

        cout<<endl;
    }
    }
};