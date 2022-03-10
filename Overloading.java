
class Student{

     String name;
     int age;


     public void getDetails()
     {
System.out.println("Name:"+name+"\n"+"Age:"+age);
     }

     public void getDetails(int zain)
     {
         System.out.println("Name:"+name);
     }
   


}





class Overloading{

  
  public static void main(String args [])
  {

     Student zain = new Student();
     zain.age=24;
     zain.name="zain";
     zain.getDetails(22);

  }


}