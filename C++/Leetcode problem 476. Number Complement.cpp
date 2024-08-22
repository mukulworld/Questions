class Solution {
public:
    int findComplement(int num) {
        int mask = ~0; // created largest integer 1111111111 as compliment of 0
        
        while(num & mask){
            mask = mask<<1; // left shoift the 1 till it matches the nums.size
        }

        return ~mask^num;

    }
};
