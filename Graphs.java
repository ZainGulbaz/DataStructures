import java.util.*;

class Graph<T>{
    HashMap <T,List<T>> map= new HashMap<>(); 

     public void addVertex(T s)
    {
        map.put(s, new LinkedList<T>());
    }
    public void addEdge(T source, T destination, boolean bidirectional)
    {
      if(!map.containsKey(source))
      {
          addVertex(source);
      }
     else if(!map.containsKey(destination))
      {
          addVertex(destination);

      }
    map.get(source).add(destination);

    if(bidirectional==true)
    {
        map.get(destination).add(source);
    }

            
    }

     public String tostring()
    {
        StringBuilder builder = new StringBuilder();
 
        for (T v : map.keySet()) {
            builder.append(v.toString() + ": ");
            for (T w : map.get(v)) {
                builder.append(w.toString() + " ");
            }
            builder.append("\n");
        }
 
        return (builder.toString());
    }
}




public class Graphs{

  public static void main(String args [])
  {

      Graph<Integer> g = new Graph<Integer>();
      g.addEdge(1,2,false);
      g.addEdge(2,3,false);
      System.out.println("Graph:\n"
                           + g.tostring());
    

  }


}