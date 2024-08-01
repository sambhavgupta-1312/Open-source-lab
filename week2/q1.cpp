#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int matrix[r][c];
    int ans[c][r];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter element "<<i<<" , "<<j;
            cin>>matrix[i][j];
            ans[j][i]=matrix[i][j];
        }
    }

    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}