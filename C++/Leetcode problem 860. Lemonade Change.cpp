class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<long int,long int>mapp;

        for(int i=0;i<bills.size();i++){

            if(bills[i]==5) mapp[5]++;
            
            else if(bills[i]==10) {
                mapp[10]++;
                if(mapp[5]>0)
                    mapp[5]--;
                
                else return false;
            }
           
            else if (bills[i] == 20){ 
                mapp[20]++;
                if(mapp[10]>0 && mapp[5]>0 ){
                mapp[10]--;
                mapp[5]--;
                }
                else if(mapp[5]>2){
                    mapp[5]=mapp[5]-3;
                }
                else return false;
            }

            }
        
        return true;
    } 
};
