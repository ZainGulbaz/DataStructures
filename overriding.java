import java.util.Random;
import javax.swing.JOptionPane;
import java.lang.String;


class Human{

public static void isEat(){

    System.out.println("Human Eats");
}


}

class Student extends Human{

   public static void isEat(){

       System.out.println("The Student Eats");
   }

}



class overriding {


    
    public static void main(String[] args) {
          
          Student zain = new Student();
          zain.isEat();


    }
}

