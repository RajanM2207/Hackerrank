/*
Print the largest (maximum) hourglass sum found in A.

Sample Input

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
Sample Output

19
Explanation

A contains the following hourglasses:

1 1 1   1 1 0   1 0 0   0 0 0
  1       0       0       0
1 1 1   1 1 0   1 0 0   0 0 0

0 1 0   1 0 0   0 0 0   0 0 0
  1       1       0       0
0 0 2   0 2 4   2 4 4   4 4 0

1 1 1   1 1 0   1 0 0   0 0 0
  0       2       4       4
0 0 0   0 0 2   0 2 0   2 0 0

0 0 2   0 2 4   2 4 4   4 4 0
  0       0       2       0
0 0 1   0 1 2   1 2 4   2 4 0
The hourglass with the maximum sum (19) is:

2 4 4
  2
1 2 4
*/






using namespace std;
int main(){
    vector< vector<int> > arr(6,vector<int>(6));

    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
   vector<int> result;
result.reserve(18);// create new vector and return maximum element of that vector
   for(unsigned int arr_j = 0;arr_j < 4;++arr_j){
       for(unsigned int arr_i = 0;arr_i < 4;++arr_i)
       {
           result.push_back(arr[arr_i][arr_j]+ 
                arr[arr_i][arr_j+1]+
                arr[arr_i][arr_j+2]+
                arr[arr_i+1][arr_j+1]+
                arr[arr_i+2][arr_j]+
                arr[arr_i+2][arr_j+1]+
                arr[arr_i+2][arr_j+2]);
      
       }}
    cout<< *max_element(result.begin(),result.end());
    return 0;  //return 0, if return directly max element, run time occurs.
}

