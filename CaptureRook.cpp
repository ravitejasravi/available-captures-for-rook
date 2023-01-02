class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {

        int left, right, count1 = 0;

        for(int i = 0; i < 8; i++) 
            for(int j = 0; j < 8; j++)
                if(board[i][j] == 'R') {
                    left = i;
                    right = j;
                    break;
                }
        
        for(int i = right; i < 8; i++)
            if(board[left][i] == 'p') {
                count1++;
                break;
            }
            else if(board[left][i] == 'B') {
                break;
            }
        
        for(int i = right; i >= 0; i--)
            if(board[left][i] == 'p') {
                count1++;
                break;
            }
            else if(board[left][i] == 'B') {
                break;
            }
        
        for(int i = left; i < 8; i++)
            if(board[i][right] == 'p') {
                count1++;
                break;
            }
            else if(board[i][right] == 'B') {
                break;
            }
        
        for(int i = left; i >= 0; i--)
            if(board[i][right] == 'p') {
                count1++;
                break;
            }
            else if(board[i][right] == 'B') {
                break;
            }
        
        return count1;
    }

};