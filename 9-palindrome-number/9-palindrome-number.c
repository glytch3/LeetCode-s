

bool isPalindrome(int x){
     /*   long b=0,a=x;
        if(x<0)
            return false;
        
        while(a>0)
        {
            b=b*10+a%10;
            a=a/10;
        }
        
        return (b==a);
    
    */
    
    if (x < 0) return false;
    long y=0;
    long xx=x;
    while (xx>0) {
        y = y*10 + xx%10;
        xx/=10;
    }
    return (y == x);

}