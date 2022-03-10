//Direct Binding
function func1(){
    
    console.log(this);


}

func1();

//Implicit Binding
function func2(){

 console.log("Zain");

}

const obj2={
    func2
};

obj2.func2();

//Explicit Binding


const obj3={

   name:"zain",
    func3(name){
        console.log(this.name);
    
    }

}

const obj4={
    name:"Zain222"
};

obj3.func3.call(obj4);