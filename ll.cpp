#include<bits/stdc++.h>
using namespace std;


struct    Node {
    int data;

    Node *next;
    Node(int d)
     
     {

        data = d;
        next = NULL;


     }


};

  void printlist(Node *head ) {
     Node *curr =   head;

      while (curr!=NULL) {


        cout<<curr->data<<" ";

        curr = curr->next;
      }

  }

  Node *even_Odd(Node *head) {

       Node *es = NULL;
       Node *ed = NULL;

       Node *os = NULL;
       Node *od = NULL;
        // Node *current = head;

        for(Node *current = head ; current !=NULL; current++) {

            int x = current->data;


            
            if(x%2==0) {
                   
                   if(es==NULL) {

                    es= current;
                    ed = es;

                      
                   }
                   else {
                      ed ->next = current;
                       ed = ed->next;




                   }

            }
             else  {
                   
                   if(os==NULL) {

                    os= current;
                    od = os;

                      
                   }
                   else {
                      od ->next = current;
                       od = od->next;




                   }

            }

        }

        // if(os==NULL) {

        //     return es;

        // }

        // if(es==NULL) {
        //     return os;

        // }

        if(os==NULL||es==NULL) {
            return head;

        }

        ed->next = os;
        od->next = NULL;

        return es;

  }



int main() {

    Node *head = new Node(17);

    head ->next = new Node(15);
    head ->next ->next = new Node(18);
    head ->next ->next ->next = new Node(12);
    // head ->next ->next ->next = new Node(15);
    head ->next ->next ->next ->next = new Node(10);
    head ->next ->next ->next ->next ->next = new Node(5);
    head ->next ->next ->next ->next ->next ->next = new Node(4);

            //   even_Odd(head);

            printlist(head);
            
                
                 head = even_Odd(head);


        printlist(head);



    return 0;

}