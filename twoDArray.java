
public class twoDArray{


// -9 -9 -9  1 1 1 
//  0 -9  0  4 3 2
// -9 -9 -9  1 2 3
//  0  0  8  6 6 0
//  0  0  0 -2 0 0
//  0  0  1  2 4 0

   public static void main(String args [])
   {
    int sum=0,tempSum=0;
    
    int arr[][]={{-9,-9,-9,1,1,1},{0,-9,0,4,3,2},{-9,-9,-9,1,2,3},{0,0,8,6,6,0},{0,0,0,-2,0,0},{0,0,1,2,4,0}};

    for(int i=0;i<arr.length-2;i++){
    

    for(int j=0;j<arr.length/2+1;j++)
    {

    tempSum=(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);  

   if(tempSum>sum)
   {
       sum=tempSum;
   }
    }

    
    
    }
    
   
   System.out.println(sum);

   }



}