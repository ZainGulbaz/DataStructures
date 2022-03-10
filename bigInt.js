const arr=[1000000001,1000000002,1000000003,1000000004,1000000005];
let sum = BigInt(0);

arr.map((e)=>{
    sum=sum+BigInt(e);

})
console.log(sum);
