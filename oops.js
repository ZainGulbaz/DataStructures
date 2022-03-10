// class student {
//   constructor(name, age) {
//     this.name = name;
//     this.age = age;
//   }

//   getDetails() {
//     console.log(`Age ${this.age}`);
//     console.log(`Name ${this.name}`);
//   }
// }

// //objects
// let zain= new student("zain",24);
// zain.getDetails();


// class player extends student{


//   constructor(name,age,isPlayer){


//    super();
//      this.name=name;
//      this.age=age;
//      this.isPlayer=isPlayer;
//    }
//    constructor(isPlayer,name)  {
//     super();
//      this.isPlayer=isPlayer;
//      this.name=name;

//    }

// getDetails(){
//   console.log(`Name:${this.name} Age:${this.age} isPlayer:${this.isPlayer} `);
// }


// }

// let irtaza = new player(true,"Zain");
// irtaza.getDetails();


//Method overloading

class office{

   constructor(name,id){

    this.name=name;
    this.id=id;

   }

   getDetails(){

     console.log(`Name:${this.name}  ID:${this.id}`);
   }
   getDetails(noID){

    console.log(`Name:${this.name}`);

   }



};


const zain = new office('zain',123);
zain.getDetails();