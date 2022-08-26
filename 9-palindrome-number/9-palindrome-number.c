

bool isPalindrome(int x){
        if(x<0)
            return false;
        long a=0;
        long b=x;
        while(b>0)
        {
            a=(a*10)+(b%10);
            b/=10;
        }
        
        return (a==x);
    
     /*   
    
    
    if (x < 0) return false;
    long y=0;
    long xx=x;
    while (xx>0) {
        y = y*10 + xx%10;
        xx/=10;
    }
    return (y == x);
*/
}