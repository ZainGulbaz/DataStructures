



function func1(a){
  
    return function(b){
        return a+b;
    }

};


const func2=(a)=>{
   
    return function(b){
        if(b)
        {
            return func2(a/b);
        }
        return a;

    } 
    

};


console.log(func2(6)(3)(2)());