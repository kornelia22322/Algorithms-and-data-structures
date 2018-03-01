#include <iostream>

using namespace std;

int partition(int* a, int left, int right);
void quicksort(int* a, int size, int pos, int r);
void swap(int &a, int &b);

void swap(int &a, int &b){
  int c = b;
  b = a;
  a = c;
}

/* Sort table from pos to size */
void quicksort(int* a, int pos, int r, int size){
  if(pos<r){
    int pivot = partition(a, pos, r);
    quicksort(a, pos, pivot, size);
    quicksort(a, pivot+1, r, size);
  }
}

int partition(int* a, int left, int right){
  int pivot = a[left];
  int pivotpos = left;
  int l = left+1;
  while(l<=right){
    if(a[l]<pivot){
      swap(a[pivotpos+1], a[l]);
      pivotpos++;
    }
    l++;
  }
  swap(a[left], a[pivotpos]);

  return pivotpos;
}

int main(){
  int n;
  cin>>n;
  for(int j=0;j<n;j++){
    int a;
    cin>>a;
    int* tab = new int[a];
    for(int i=0;i<a;i++){
      cin>>tab[i];
    }

    int max = tab[0];
    int maxind = 0;
    for(int i=0;i<a;i++){
      if(tab[i]>max){
        max=tab[i];
        maxind = i;
      }
    }


    int start = 0;
    swap(tab[start], tab[maxind]);
    start++;

    for(int i=1;i<a;i++){
      if(tab[i]==max){
        swap(tab[i], tab[start]);
        start++;
      }
    }


    quicksort(tab, start, a-1, a-1);

    for(int i=0;i<a;i++){
      cout<<tab[i]<<" ";
    }

  }
}
