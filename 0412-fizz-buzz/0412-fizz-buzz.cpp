class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> array(n);

        for(int i=1;i<=n;i++)
        {
            if(i%5==0 && i%3==0)
            array[i-1]="FizzBuzz";
            else if(i%3==0)
            array[i-1]="Fizz";
            else if(i%5==0)
             array[i-1]="Buzz";
            else
             array[i-1]=to_string(i);
        }
        return array;
        
    }
};