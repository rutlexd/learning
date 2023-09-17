void quickSort(int arr[], int low, int hight){
    int middle = arr[(low + hight) / 2];
    int i = low;
    int j = hight;
    do{
        while(arr[i] < middle){
            i++;
        }
        while(arr[j] > middle){
            j--;
        }
        if (i <= j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }while(i <= j);
    if (i < hight){
        quickSort(arr, i,hight);
    }
    if (j > low){
        quickSort(arr, low, j);
    }
}
