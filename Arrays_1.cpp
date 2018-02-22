using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
     for(int arr_i = n-1;arr_i >=0 ;arr_i--){
       cout<< arr[arr_i]<<" ";
         
    }
    
    return 0;
}


/*

Print all N integers in A  in reverse order as a single line of space-separated integers.

Sample Input

N=4
A= 1 4 3 2
Sample Output

2 3 4 1



*/
