
#include <iostream>
using namespace std;


int main(){
  //  vector< vector<int> > arr(6,vector<int>(6));
    //for(int arr_i = 0;arr_i < 6;arr_i++){
      // for(int arr_j = 0;arr_j < 6;arr_j++){
        //  cin >> arr[arr_i][arr_j];
       //}
    //}
    int arr [6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k=-63;
   // int i=2 ,j=0;
        for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>k)
                k=sum;
       }
       
    }
    
    cout<<k;
    return 0;
}

