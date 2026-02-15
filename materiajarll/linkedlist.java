package org.example;
import java.util.*;

class linkedlist{
  // dari data
  class Node{
    int val ;
    Node next;
  }

  Node head;

  //method untuk menambahkan anggota
  //lihat contoh penggunaannya pada file App.java
  void add(int newval){
    Node newnode = new Node();
    newnode.val = newval;
    newnode.next = head;
    head = newnode;
  }

  //method print
  public String print(){
    Node temp = head; 
    String result = "[";
    while (temp != null){
      result = result + " "+ Integer.toString(temp.val);
      temp = temp.next;
    }

    result = result + " ]"; 
    return result;
  }
}
