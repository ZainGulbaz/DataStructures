import java.io.*;

public class Linkedlist {

  static class Node {
    int data;
    Node next;

    Node(int d) {
      data = d;
      next = null;
    }
  }

  static Node header;

  public static Linkedlist insertNode(Linkedlist list, int data) {
    Node new_node = new Node(data);
    new_node.next = null;

    if (list.header == null) {
      list.header = new_node;
    } else {
      Node tempNode = list.header;
      while (tempNode.next != null) {
        tempNode = tempNode.next;
      }
      tempNode.next = new_node;
    }

    return list;
  }

  public static void printList(Linkedlist list) {
    Node currNode = list.header;
    System.out.print("LinkedList: \n");

    while (currNode != null) {
      System.out.println(currNode.data + "");

      currNode = currNode.next;
    }
  }

  public static Linkedlist deleteNode(Linkedlist list, int index) {
    Node tempNode = list.header;
    Node prevNode = tempNode;
    int dummy = 0;

    if (index == 0) {
      list.header = list.header.next;
    } else {
      while (dummy != index) {
        prevNode = tempNode;
        tempNode = tempNode.next;
        dummy++;
      }

      prevNode.next = tempNode.next;
    }

    return list;
  }

  public static void main(String args[]) {
    Linkedlist list = new Linkedlist();
    list = insertNode(list, 2);
    list = insertNode(list, 4);
    list = insertNode(list, 6);
    list = insertNode(list, 7);
    list= insertNode(list,8);
    printList(list);
  }
}
