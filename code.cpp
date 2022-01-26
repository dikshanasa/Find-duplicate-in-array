int duplicateNumber(int *arr, int size)
{
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if (j!=i){
            if(arr[i]==arr[j]){
                return arr[i];
            }
            }
        }
    }
    //Write your code here
}
