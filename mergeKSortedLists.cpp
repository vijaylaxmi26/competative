
class Solution {
public:
    ListNode* merge(ListNode* l1,ListNode* l2){
         ListNode* head=NULL;
        ListNode* temp=NULL;
        ListNode* temp1;
        ListNode* temp2;
        temp1=l1;
        temp2=l2;

        if(l1==NULL){
            return l2;
        }

        if(l2==NULL){
            return l1;
        }

        if(l1==NULL && l2==NULL){
            return head;
        }

        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val>temp2->val){
                if(temp==NULL){
                    head=temp2;
                    temp=temp2;
                }else{
                    temp->next=temp2;
                    temp=temp2;
                }
                temp2=temp2->next;

            }else{
                 if(temp==NULL){
                     head=temp1;
                    temp=temp1;
                }else{
                    temp->next=temp1;
                    temp=temp1;
                }
                temp1=temp1->next;
            }
        }


        if(temp1==NULL){
            while(temp2!=NULL){
                temp->next=temp2;
                temp=temp2;
                temp2=temp2->next;
            }
        }else{
            while(temp1!=NULL){
                temp->next=temp1;
                temp=temp1;
                temp1=temp1->next;
            }
        }

        return head;
    }

    ListNode* partision(vector<ListNode*> lists,int lb,int ub){
        if(lb==ub){
            return lists[lb];
        }
        int mid=(lb+ub)/2;
        ListNode* head=NULL;
        if(lb<ub){
            ListNode* left=partision(lists,lb,mid);
            ListNode* right=partision(lists,mid+1,ub);
             return merge(left,right);
        }

        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return partision(lists,0,lists.size()-1);
    }
};
