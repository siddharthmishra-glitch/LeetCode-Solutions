class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int c1=0;
        int c2=0;

        for(int i=0 ; i<n ; i++ ){
            if(s[i]=='('){
                c1++;
            }
            else if(s[i]==')'){
                c1--;
                if(c1<0){
                    c2++;
                    c1=0;
                }
            }
        }
        return c1+c2;
    }
};