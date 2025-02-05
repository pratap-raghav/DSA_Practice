#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    int s = board.size();
    for (int i = 0; i < s; i++)
    {
        unordered_map<char, int> mHor, mVer;
        for (int j = 0; j < s; j++)
        {
            char key1 = board[i][j];
            char key2 = board[j][i];
            // cout<<key1<<"\t"<<key2<<endl;
            cout<<i<<","<<j<<"\t";
            if(j%3==2){
                cout<<"\t";
            }

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
        cout<<endl<<endl<<endl;
        if(i%3==2){
            cout<<endl<<endl<<endl;
        }


        int k = 0;
        unordered_map<char, int> m1, m2, m3;
        int s1=0, s2=3, s3=6;
        while(k<s){
            char key1 = board[k][s1];
            char key2 = board[k][s2];
            char key3 = board[k][s3];

            if (key1 != '.')
            { 
                if (m1.find(key1) == m1.end())
                {
                    m1.insert({key1, 1});
                }
                else
                {
                    return false;
                }
            }

            if (key2 != '.')
            { 
                if (m2.find(key2) == m2.end())
                {
                    m2.insert({key2, 1});
                }
                else
                {
                    return false;
                }
            }

            if (key3 != '.')
            { 
                if (m3.find(key3) == m3.end())
                {
                    m3.insert({key3, 1});
                }
                else
                {
                    return false;
                }
            }

            if(k%3==2){
                m1.clear();
                m1.clear();
                m3.clear();
                s1=0;
                s2=3;
                s3=6;
            }

            k++;
        }
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