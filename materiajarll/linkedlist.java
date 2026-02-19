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
    Node newnode = new Node(); // kelas baru dideklarasikan dengan seluruh atribut bernilai 0
    newnode.val = newval; //atribut val dideklarasikan
    newnode.next = head; //atribut next dideklarasikan
    head = newnode;
  }

  //method print
  public String print(){
    Node temp = head; 
    String result = "[";
    while (temp != null){
      result = result + " " + Integer.toString(temp.val) + " - ";
      temp = temp.next;
    }
    result += " END";
    result = result + " ]"; 
    return result;
  }

  public String checkval(int fi){
    Node C = head ;
    System.out.println("loop start");
    while(C != null){
      System.out.println("C val" +C.val);
      System.out.println("fi " + fi);
      if (C.val == fi){
        System.out.println("test");
        return "ADA";}
      C = C.next;
    }
    return null;
  } 

  public Node find(int fi){
    Node C = head ;
    while(C != null){
      if (C.val == fi){
        return C;}
      C = C.next;
    }
    return null;
  }

  public Node insert(int fi, int tval){
    Node C = head ;
    while(C != null){
      if (C.val == fi){
        return C;}
      C = C.next;
    }
    return null;
  }
}
