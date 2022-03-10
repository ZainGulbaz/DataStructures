let arr=[10,20,20,10,10,30,50,10,20];
let pair=0;

arr=arr.sort();

for(var i=0;i<arr.length;i++)
{
    if(arr[i]==arr[i+1])
    {
            pair++;
            i=i+1;
    }
    

}

console.log(pair);