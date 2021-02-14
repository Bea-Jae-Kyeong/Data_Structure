//둘이 합해 100이 되는 원소가 있을 경우 1 아니면 0 출력하는 함수

int func2(int arr[], int N){
  int arr[101] = {};
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(100-arr[i] == arr[j])
        return 1;
    }
  }
  return 0;
}
