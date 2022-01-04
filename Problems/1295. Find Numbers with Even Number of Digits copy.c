int findNumbers(int* nums, int numsSize){
    int i,j,a=0,b;
   for(i=0;i<numsSize;i++)
   {
       int num = nums[i];
       b=0;
       while(num > 0){
        num=num/10;
        b++;
       }
       if(b%2 == 0 && b!=0){
        a++;
       }
   }
   //printf("%d",a);
  return a;

}
