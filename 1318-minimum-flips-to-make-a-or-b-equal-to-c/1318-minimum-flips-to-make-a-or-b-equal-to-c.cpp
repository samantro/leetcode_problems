class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
    
    for (int i = 0; i < 32; i++) {
        bool bitA = a & (1 << i);
        bool bitB = b & (1 << i);
        bool bitC = c & (1 << i);
        
        if ((bitA | bitB) != bitC) {
            if (bitC) {
                if (!bitA && !bitB)
                    flips++;
            } else {
                if (bitA)
                    flips++;
                if (bitB)
                    flips++;
            }
        }
    }
    
    return flips;
    }
};