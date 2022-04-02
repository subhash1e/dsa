class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }else{
            return Count(countAndSay(n-1));
            // Count("1") => return "11" => countAndSay(2) => "11"
            // countAndSay(3) => Count("11") => "21"
            // tail recursion
        }
      
        
    }
        string Count(string ans){
            
            
            int j=ans.length();
           

            int curr = 1,k=0;
            string ret = "";
           
           
            for(int i=0;i<j-1;i++){
                if(ans[i]==ans[i+1]){
                    curr++;
                }else{
                   
                    ret+= char(curr+'0');
                     ret+=char(ans[i]);
                    k++;
                    curr=1;     
                }
            }
           
                    ret+= char(curr+'0');
                    ret+=char(ans[j-1]);
           
                    k++;
       
            
           return ret; 
            
        }
};
