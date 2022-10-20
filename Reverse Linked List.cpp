class Solution {
    private:
  ListNode* reverse(ListNode* start, ListNode* end ){
      
         ListNode *curr = start;
         ListNode *prev = NULL ;
         ListNode *forward = NULL;
              
           while(curr != end  ){
            
              forward = curr->next;
              curr -> next = prev;
         
             prev = curr;
            curr = forward;
        }
          
        return prev;
    }

public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head->next==NULL || head==NULL){
            return head;
        }
        
        ListNode *start=head;
        ListNode *end = head;
        ListNode *temp = start;
        ListNode* nextToEnd = NULL;
       if(left==1 && right==1){
           return head;
       }
        int cnt = 1 ;
        
        while(cnt<left){
            temp=start;
            start=start->next;
            cnt++;
        }
        cnt = 1;
           while(cnt<right){
            end=end->next;
               
            cnt++;
        }
        nextToEnd = end->next  ;
        //for left = 1
        
        if(left==1 ){
         head = reverse(start, nextToEnd);
          ListNode *tail = head;
        
        while(tail->next!=NULL){
            tail=tail->next;
         }
                    tail->next = nextToEnd ;
             return head;
        }
        
       temp->next = reverse(start, nextToEnd);
    
        ListNode *tail = head;
        
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next = nextToEnd ;
       return head;
    }
};
