#include<iostream>
#include<vector>
using namespace std;


class ListNode
{
public:
    int val;
    ListNode* next;

    void setData(ListNode* ptr1, ListNode* ptr2, vector<int> &vec1, vector<int> &vec2);
    void display(ListNode* ptr);
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2, ListNode* l3);

};

void ListNode :: setData(ListNode* ptr1, ListNode* ptr2, vector<int> &A,vector<int> &B){
    // FOR PTR1
    int i = 0;
    while (ptr1 != NULL)
    {
        ptr1->val = A[i];
        // cout<<"ptr1:   "<<ptr1->val<<endl;
        ptr1 = ptr1->next;
        i++;
    }

    int j = 0;
    while (ptr2 != NULL)
    {
        ptr2->val = B[j];
        // cout<<ptr2->val<<endl;
        ptr2 = ptr2->next;
        j++;
    }

}

ListNode* ListNode :: mergeTwoLists(ListNode* h1, ListNode* h2, ListNode* l3){
    ListNode* temp_head = l3;
    bool first_run = true;
    
    int iter_i = 0, iter_j = 0;
    while (h1 != NULL && h2 != NULL)
    {   
        cout<<"runs";
        if (first_run)
        {
            if (h1->val <= h2->val)
            {
                l3->val = h1->val;
                h1 = h1->next;
                first_run = false;
                iter_i++;  
            }
            else
            {
                l3->val = h2->val;
                h2 = h2->next;
                first_run = false;
                iter_j++;
            }
            
        }
        

        else if (h1->val <= h2->val)
        {   
            l3->next = h1;
            l3 = l3->next;
            h1 = h1->next;
            iter_i++;
        }

        else
        {
            l3->val = h2->val;
            l3 = l3->next;
            h2 = h2->next;
            iter_j++;
        }

        
    }

    if (iter_i <= 2)
    {
        while (iter_i <= 2){
            l3->next = h1;
            l3 = l3->next;
            h1 = h1->next;
            iter_i++;
        }
    }

    
    else if (iter_j <= 2)
    {
        while (iter_j <= 2){
            cout<<"runs"<<iter_j;
            l3->next = h2;
            l3 = l3->next;
            h2 = h2->next;
            iter_j++;
        }
    }


    l3->next = NULL;
    return temp_head;

}


void ListNode :: display(ListNode* ptr){
    cout<<"NOW PRINTING L3:"<<endl;
    while (ptr != NULL)
    {
        cout<<ptr->val<<" | ";
        ptr = ptr->next;
    }
    
}


int main(){
    ListNode* oper = new ListNode;
    ListNode* l1 = new ListNode;
    ListNode* l12 = new ListNode;
    ListNode* l13 = new ListNode;

    l1->next = l12;
    l12->next = l13;
    l13->next = NULL;
    
    ListNode* l2 = new ListNode;
    ListNode* l22 = new ListNode;
    ListNode* l23 = new ListNode;

    l2->next = l22;
    l22->next = l23;
    l23->next = NULL;

    ListNode* l3 = new ListNode;


    vector<int> vec1 = {1, 2, 4};
    vector<int> vec2 = {1, 3, 4};

    oper->setData(l1, l2, vec1, vec2);

    l3 = oper->mergeTwoLists(l1, l2, l3);

    oper->display(l3);

    







    return 0;
}