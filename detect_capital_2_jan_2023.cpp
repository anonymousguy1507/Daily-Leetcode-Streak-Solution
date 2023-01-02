TWO CONDITION
1.check first letter is capital
  a.check for second letter , if capital then rest all will be capital.
  b.if second letter is small , then rest all must be small;
2.if first letter is small,
     then rest will be small.



bool detectCapitalUse(string str) {
        int n = str.length();
        if(isupper(str[0])){
            if(isupper(str[1])){
                for(int i=2;i<n;i++){
                    if(islower(str[i]))
                       return false;
    
                }
                
            }
            else{
                for(int i=2;i<n;i++){
                    if(isupper(str[i]))
                    return false;
                }
            }

        }
        else{
            for(int i=0;i<n;i++){
                if(isupper(str[i]))
                  return false;
            }
            

        }
        return true;
    }
