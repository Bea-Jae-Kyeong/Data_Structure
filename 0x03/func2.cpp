//둘이 합해 100이 되는 원소가 있을 경우 1 아니면 0 출력하는 함수
//O(N^2)
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

//O(N)
int func2(int arr[], int N){
  int occur[101] = {};
  for(int i = 0; i < N; i++){
    if(occur[100-arr[i]] == 1)
      return 1;
    occur[arr[i]] = 1;
  }
  return 0;
}
