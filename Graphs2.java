import java.util.*;


class Graph<T>{

  HashMap<T,List<T>> map = new HashMap<>(); 
  

  public void addVertex(T s){

       map.put(s,new LinkedList<T>());

  }
  
  public void addEdge(T source, T destination, boolean bidirectional)
  {

   if(!map.containsKey(source)){
       addVertex(source);
   }
   if(!map.containsKey(destination)){
       addVertex(destination);
   }
    
    map.get(source).add(destination);

    if(bidirectional==true)
    {
        map.get(destination).add(source);
    }

  }
 
 public String tostring(){
   


   for(T k :map.keySet()){

    System.out.print(k+": ");
     for(T v: map.get(k))
     {
         System.out.print(v+" ");
     }

   System.out.println("");
   }

   
   return "hello";


 }
   



}





public class Graphs2{

 public static void main(String args [])
 {
   
   Graph<Integer> g = new Graph<>();
   g.addEdge(1,2,false);
   g.addEdge(2,3,false);
   g.addEdge(1,2,false);
   g.tostring();

 }


}