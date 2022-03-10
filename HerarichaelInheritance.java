



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

class Society extends Student{

    String society;
    
    public void getDetails(){

    System.out.println("Name:"+name+" Age:"+age+" Roll no:"+rollNo+" Society:"+society+"\n");


    }

}


public class HerarichaelInheritance{


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

    Society waleed = new Society();
    waleed.name="waleed";
    waleed.age=25;
    waleed.rollNo=22;
    waleed.society="ASME";
    waleed.getDetails();

 }


}

