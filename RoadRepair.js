crew=[4,5,1,4,2];
job=[4,4,7,9,10];

for(i=0;i<crew.length;i++)
{
    for (j=0;j<crew.length;j++)
    {
        if(crew[i]==job[j])
        {
            crew.splice(i,1);
            job.splice(j,1);
        
        }
    }
}
let cost=0,length=crew.length;

for(i=0;i<length;i++)
{
let minCrew=Math.min(...crew);
let minJob=Math.min(...job);
cost=cost+Math.abs(minCrew-minJob);
crew.splice(crew.indexOf(minCrew),1);
job.splice(job.indexOf(minJob),1);


}
console.log(cost);
