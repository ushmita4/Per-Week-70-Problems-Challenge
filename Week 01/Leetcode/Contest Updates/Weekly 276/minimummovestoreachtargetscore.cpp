class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int moves=0;
        while(target>1)
        {
            if(target%2!=0)
            {
                target--;
                moves++;
            }
            else
            {
                if(maxDoubles!=0)
                {
                    target/=2;
                    moves++;
                    maxDoubles-=1;
                }
                else
                {
                    return (moves+target-1);
                }
            }
        }
        return moves;
}
};
