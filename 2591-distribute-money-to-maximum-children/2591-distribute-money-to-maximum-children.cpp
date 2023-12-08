class Solution {
public:
    int distMoney(int m, int c) {
       if(m < c)
            return -1;
        if(m < (c+7))
            return 0;
        int max = (m-c)/7;
        float k = float(m)/(8*c);

        if(k>1)
            return c-1;
        else if(k==1)
            return c;
        else{
            if((m-8*(c-1))==4)
                return max-1;
            else
                return max;
        }
        
    }
};