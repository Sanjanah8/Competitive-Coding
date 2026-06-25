
class Solution {
    public static void countOddEven(Integer arr[]) {
    int co=0;
    int ce=0;
      for(int i=0;i<arr.length;i++){
          if(arr[i]%2==0){
              ce++;
          }else{
          co++;
      }  
    }
      System.out.println(co+" "+ce);
    }
}
