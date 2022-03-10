public class Binarytree {

  static class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
      this.data = data;
      this.left = null;
      this.right = null;
    }
  }

  public static void insert(Node rootNode, int data) {
    if (rootNode.data < data) {
      if (rootNode.left != null) {
        insert(rootNode.left, data);
      } else {
        Node new_node = new Node(data);
        rootNode.left = new_node;
      }
    } else {
      if (rootNode.right != null) {
        insert(rootNode.right, data);
      } else {
        Node new_node = new Node(data);
        rootNode.right = new_node;
      }
    }
  }

  public static void preorder(Node rootNode){

   
    if(rootNode==null)
    {
        return;
    }
    
   
   System.out.println(rootNode.data);
   preorder(rootNode.left);
   preorder(rootNode.right);

  }

public static void inorder(Node rootNode)
{
    if(rootNode==null)
    {
        return;
    }
    inorder(rootNode.left);
    System.out.println(rootNode.data);
    inorder(rootNode.right);

}
public static void postorder(Node rootNode)
{
    if(rootNode==null)
    {
        return;
    }
    inorder(rootNode.left);
    inorder(rootNode.right);
    System.out.println(rootNode.data);

}

  public static void main(String args[]) {
    System.out.println("Binary Trees");
    Node rootNode = new Node(24);
    insert(rootNode, 5);
    insert(rootNode,40);
    insert(rootNode,20);
    insert(rootNode,50);
    insert(rootNode,6);
    postorder(rootNode);
    
  }
}
