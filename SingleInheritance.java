
class Student{

   int age,rollNo;
   String name;
   
   public void getDetails(){

       System.out.println("Name:"+name+" Age:"+age+" Roll no:"+rollNo+"\n");
   }


}

class player extends Student{

   String player;

   public void getDetails(){


    System.out.println("Name:"+name+" Age:"+age+" Roll no:"+rollNo+" Player:"+player+"\n");

   }


}


public class SingleInheritance{


 public static void main(String args [])
 {

    Student zain = new Student();
    zain.age=24;
    zain.name="Zain";
    zain.rollNo=11;
    zain.getDetails();
    
    player irtaza = new player();
    irtaza.age=24;
    irtaza.name="irtaza";
    irtaza.rollNo=11;
    irtaza.player="cricket";
    irtaza.getDetails();

 }


}