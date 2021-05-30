#include <iostream>

using namespace std;
void insertion(int x[],int size){
 for(int i=1,j;i<size;i++){
      int first=x[i];
    for (j=i ; j > 0&&first<x[j-1] ; j--){
        x [j] = x [j-1];}
        x [j] = first;

 }


  for(int i=0;i<size;i++){

 cout<<x[i]<<" ";
  }

}
void selection(int x[],int size){
  for(int i=0;i<size-1;i++){
        int mini=i;
    for(int j=i+1;j<size;j++){
        if(x[mini]>x[j]){
            mini=j;
        }}
        swap(x[mini],x[i]);


  }
 for(int i=0;i<size;i++){

 cout<<x[i]<<" ";
  }




}
void merge(int arr[],int l,int m,int r){
int n1=m-l+1;
int n2=(r-m);
int arr1[n1];
int arr2[n2];
for(int i=0;i<n1;i++){
    arr1[i]=arr[l+i];
}
for(int j=0;j<n2;j++){
    arr2[j]=arr[m+j+1];

}
int i=0,j=0,k=l;
while (i < n1&&j < n2) {
	  if (arr1[i] <arr2[j])
		{arr[k++] = arr1[i++];}
	  else
		{arr[k++] = arr2[j++];}
}
while (i < n1){
	arr[k++] = arr1[i++];}
while (j < n2){
	arr[k++] = arr2[j++];}




}

int merge_sort(int A[],int left,int right){

    if(left>=right){return 0;}

else{
    int middle=(left+right)/2;

    merge_sort(A,left,middle);
    merge_sort(A,middle+1,right);

    merge(A,left,middle,right);
}
return A;
}

int main()
{
int x[5]={10,4,7,2,1};
 insertion(x,5);
 selection(x,5);
 merge_sort(x,0,4);
    return 0;
}
