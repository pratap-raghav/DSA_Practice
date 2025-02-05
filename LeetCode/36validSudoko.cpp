#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    int s = board.size();
    for (int i = 0; i < s; i++)
    {
        unordered_map<int, int> mHor, mVer;
        for (int j = 0; j < s; j++)
        {
            char key1 = board[i][j];
            char key2 = board[j][i];
            cout<<key1<<"\t"<<key2<<endl;
            if (key1 != '.')
            {   
                if (mHor.find(key1) == mHor.end())
                {
                    mHor.insert({key1, 1});
                }
                else
                {
                    return false;
                }
            }
            if (key2 != '.')
            { 
                if (mVer.find(key2) == mVer.end())
                {
                    mVer.insert({key2, 1});
                }
                else
                {
                    return false;
                }
            }
        }
        cout<<endl;
    }

    return true;
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout<<isValidSudoku(board);

    return 0;
}