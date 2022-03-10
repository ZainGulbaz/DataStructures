let arr=[1,2,3,4,5,4,3,2,1,3,4],number=0,oldCount=0;


for(var i=0; i<arr.length;i++)
{
       let count=0;
    for(var j=i+1; j<arr.length;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
        }
            
    }
   
    if(count>oldCount)
    {
        oldCount=count;
        number=arr[i];
    }
    else if(count==oldCount)
    {
        
        if(number>arr[i])
        {
            number=arr[i];
        }
    }
}

console.log(number);