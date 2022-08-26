

bool isPalindrome(int x){
        if(x<0)
            return false;
        long a=0,b=x;
        while(b>0)
        {
            a=(a*10)+(b%10);
            b/=10;
        }
        
        return (a==x);   //compare with original variable
}