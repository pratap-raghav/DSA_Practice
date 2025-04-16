#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v)
{
    int size = v.size();
    cout << "Array-\t";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}
void querySum(vector<int> &v, int q){
    vector<int> sumTrack;
    int size = v.size();
    sumTrack.push_back(v[0]);
    for(int i = 1; i<size; i++){
        sumTrack.push_back(v[i]+sumTrack[i-1]);
    }

    printVector(v);
    printVector(sumTrack);

    for(int i=0; i<q; i++){
        int l,r;
        cin>>l>>r;
        if(l==0){
            cout<<sumTrack[r]<<endl;
        }
        else{
            cout<<sumTrack[r]-sumTrack[l-1]<<endl;
        }
    }
}

int main(){
    vector<int> v = {4, 5, 3, 2, 5};
    int q;
    cin>>q;
    querySum(v,q);
    return 0;
}