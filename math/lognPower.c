#include<stdio.h>


int power1(int x, unsigned int y)
{
    int res = 1; // Initialize result
 //y = 6 -> 110 -> ans = (x*x*x*x) * (x*x) 
 //y = 8 -> 1000 -> ans = (x*x*x*x*x*x*x*x)
 //y = 3 -> 11  -> ans = (x*x) * (x) 
 //y = 7 -> 111 -> ans = (x*x*x*x) * (x*x) * (x)
 
 //so we increase power of x with multiple of x, along with dividing y by 2
 //and when we encounter y%2==1 we multiply that in our ans , 
 //<basicalling adding of powers where base is x>
 
 
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1){
          res = res * x;
          if(y==1)break;
        }
        
        y /= 2;
        x = x * x; 
    }
    return res;
}
int power2(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

void main(){

  int ans = power1(2,31);
  printf("%d",ans);

}
