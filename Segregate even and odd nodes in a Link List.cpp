class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
       Node *even_head = NULL, *odd_head = NULL, *prevodd, *currodd, *preveven, *curreven;
    
    while (head) {
        if (head->data % 2) {
            currodd = head;
            if (!odd_head) {
                odd_head = head;
                prevodd = head;
            }
            else {
                if (prevodd->next != currodd) {
                    prevodd->next = currodd;
                }
                prevodd = currodd;
            }
        }
        else {
            curreven = head;
            if (!even_head) {
                even_head = head;
                preveven = head;
            }
            else {
                if (preveven->next != curreven) {
                    preveven->next = curreven;
                }
                preveven = curreven;
            }
        }
        head = head->next;
    }
    curreven->next = odd_head;
    if (odd_head)
        currodd->next = NULL;
    
    return even_head ? even_head : odd_head;
    }
};
