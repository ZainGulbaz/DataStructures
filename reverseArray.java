import java.util.*;





public class reverseArray{




 public static void main(String args [])
 {
     List<Integer> list= new ArrayList<>();
     list.add(0,1);
     list.add(1,2);
     list.add(2,4);

     List<Integer> list2= new ArrayList<>();


     for(int i=0; i<list.size();i++)
     {

          list2.add(i,list.get(list.size()-1-i));

     }

     System.out.println(list2);



      
     



}

}