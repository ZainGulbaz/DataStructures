



public class Practice{

static class Node{
    int data;
    Node next;
    Node(int data){
        this.data=data;
        this.next=null;
    }
}

static Node header;

static void push(int data)
{
   Node temp_node = header;
   while(temp_node.next!=null)
   {
       temp_node= temp_node.next;
   }
    Node new_node = new Node(data);
    temp_node.next=new_node;
    

}


static int pop(){

   Node temp_node = header;
   while(temp_node.next.next!=null)
   {
      temp_node=temp_node.next;
   }

 int data= temp_node.next.data;
 temp_node.next=null;

 return data;
      

}

public static void traverse(){

   Node temp_node= header;
   while(temp_node!=null)
   {
       System.out.println(temp_node.data);
       temp_node= temp_node.next;
   }


}


  public static void main(String args [])
{
   
   header= new Node(2);
   push(4);
   push(50);
   pop();
   push(200);
   push(10);
   traverse();
   
    
}


};