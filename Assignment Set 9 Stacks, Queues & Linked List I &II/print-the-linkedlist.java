/*
class Node {
    Node next;
    int val;

    Node(int val) {
        this.val = val;
        next = null;
    }
}
*/
/*
class Node {
    Node next;
    int val;

    Node(int val) {
        this.val = val;
        next = null;
    }
}
// */
     public static void printList(Node head) {
        Node currNode = head;
        while (currNode != null) {
            System.out.print(currNode.val + " ");
            currNode = currNode.next;
        }
    }