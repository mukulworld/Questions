//  O(1) time & space  complexity approach
class Solution {
public:
    int addDigits(int num) {
      if(num==0)
          return 0;
      else if(num%9==0)
          return 9;
      else
          return num%9;
    }  
    
    /*  
    
    //  O(n) time & O(1) space  complexity approach
    
    
    class Solution {
public:
    int addDigits(int num) {        
      if(num < 10)
          return num;
          else 
      { 
          int summ=0;
        while(num>0){
            summ += num%10;
            num=num/10;
        }    
         return addDigits(summ);
      } 
    }
};
    */
