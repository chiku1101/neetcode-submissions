class Solution {
public:
    int scoreOfString(string s) {
        int sum =0;
     


        
        for(int i =0; i < s.length()-1; i++){

            int a = s[i];
            int b = s[i+1];

            int result = a - b;

            if(result < 0){
                
                result = result * -1;

            }

            sum += result;

        }


       return sum;


        


    }
};