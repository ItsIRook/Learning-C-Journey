#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void bindec(){
  int bi, de=0,i=0;
  printf("Enter the binary number : ");
  scanf("%d",&bi);
  do{
    de=de+(bi%10)*pow(2,i);
    i++;
    bi = bi/10;
  }while(bi!=0);
  printf("The decimal value is %d.\n",de);
}

void si(){
  int n;
  float x, x1, term, sum;
  printf("Enter the angle in degrees : ");
  scanf("%f",&x);
  printf("Enter the number of iterations : ");
  scanf("%d",&n);
  x1 = x;
  x = x*M_PI/180;
  term = x;
  sum = x;
  for(int i=1; i<=n; i++){
    term = term*((-1)*x*x)/(2*i*(2*i+1));
    sum = sum + term;
  }
  printf("sin(%.2f) = %.5f\n",x1,sum);
}

void lc(){
  int a,b,lcm;
  printf("Enter two numbers : ");
  scanf("%d %d",&a,&b);
  lcm = (a>b) ? a:b;
  while(1){
    if(lcm%a==0 && lcm%b==0){
      printf("LCM of the numbers is %d",lcm);
      break;
    }
    lcm++;
  }
}

void binoct(){
  int oct=0,pl=1;
  long long bi;
  printf("Enter the binary number : ");
  scanf("%lld",&bi);
  while(bi>0){
    int gr=0, po = 1;
    for(int i=0;i<3;i++){
      gr += (bi%10)*po;
      po = po*2;
      bi = bi/10;
    }
    oct = oct+gr*pl;
    pl = pl*10;
  }
  printf("The octal value is %d",oct);
}

void binseach(){
  int a[10],n,v,mid,flag,pos,i,low=0,high;
  printf("Enter the number of elements (1 to 10) : ");
  scanf("%d",&n);
  if(n<1||n>10){
    printf("Enter valid number.\n");
    exit(0);
    }
  printf("Enter the elements :");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched : ");
  scanf("%d",&v);
  high = n-1;
  do{
    mid = (low+high)/2;
    if(v<a[mid])
      high = mid-1;
  else if(v>a[mid])
      low = mid+1;
  }while(v!=a[mid] && low<=high);
  if(v==a[mid])
    printf("Succesful search.\nElement found at postion %d.\n",mid+1);
  else
    printf("Element not found.\n");
}

void bub(){
  int a[10],n,i,j;
  printf("Enter the number of elements (1 to 10) : ");
  scanf("%d",&n);
  if(n<1||n>10){
    printf("Enter valid number.\n");
    exit(0);
    }
  printf("Enter the elements :\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  printf("The sorted array is :\n");
  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
  }
}

void arrsum(){
  int m ,n, i, j, a[10][10], cs[10], rs[10];
  printf("Enter the array dimensions : ");
  scanf("%d%d",&n,&m);
  printf("Enter the elements :\n");
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0; i<n; i++){
    rs[i] = 0;
    cs[i] = 0;
    for(j=0; j<m; j++){
      rs[i]+=a[i][j];
      cs[i]+=a[j][i];
    }
  }
  for(i=0; i<m; i++){
    cs[i] = 0;
    for(j=0; j<n; j++){
      cs[i]+=a[j][i];
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("%d\t",a[i][j]);
    }
    printf("-->&d",rs[i]);
    printf("\n");
  }
  for(i=0; i<m; i++){
    printf(" |\n""\/""%d\t",cs[i]);
  }
  printf("\n");
}

int main(){
  int choice;
  printf("Enter the option :"
  "\n1. Convert binary into decimal."
  "\n2. Find value of sin x."
  "\n3. Find LCM of two numbers."
  "\n4. Find the octal value from binary."
  "\n5. Binary search."
  "\n6. Bubble sort."
  "\n7. Row and Column Sum."
  "\nEnter your choice : ");
  scanf("%d",&choice);
  switch(choice){
    case 1:
      bindec();
      break;
    case 2:
      si();
      break;
    case 3:
      lc();
      break;
    case 4:
      binoct();
      break;
    case 5:
      binseach();
      break;
    case 6:
      bub();
      break;
    case 7:
      arrsum();
      break;
    default:
      printf("Enter a valid option.\n");
  }
  return 0;
}
