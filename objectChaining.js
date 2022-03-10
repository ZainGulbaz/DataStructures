 const obj={
   
    total:0,
    add(a)
    {
         this.total=a+this.total;
         return this        

        },     

    sub(a)
    {
        this.total=this.total-a;
        return this
    }
    
}
console.log(obj.sub(5).sub(2).add(10).total);

