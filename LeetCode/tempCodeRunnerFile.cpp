int s = board.size();
    // for (int i = 0; i < s; i++)
    // {
    //     unordered_map<int, int> mHor, mVer;
    //     for (int j = 0; j < s; j++)
    //     {
    //         char key1 = board[i][j];
    //         char key2 = board[j][i];

    //         if (key1 != '.')
    //         {
    //             if (mHor.find(key1) == mHor.end())
    //             {
    //                 mHor.insert({key1, 1});
    //             }
    //             else
    //             {
    //                 return false;
    //             }
    //         }
    //         if (key2 != '.')
    //         {
    //             if (mVer.find(key2) == mVer.end())
    //             {
    //                 mVer.insert({key2, 1});
    //             }
    //             else
    //             {
    //                 return false;
    //             }
    //         }
    //     }
    // }