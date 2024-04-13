#include <iostream>
using namespace std;

struct LinkNode{
    int val;
    LinkNode* next;
    LinkNode(int x) : val(x), next(nullptr) {}
};

LinkNode* removeElem(LinkNode* head, int val){
    if(head == nullptr) return nullptr;
    LinkNode* dummyHead = new LinkNode(0);
    dummyHead->next = head;
    LinkNode* flag = dummyHead;
    while(head){
        if(head->val == val){
            dummyHead->next = head->next;
            head = head->next;
        }else{
            dummyHead = head;
            head = head->next;
        }
    }
    return flag->next;
}

int main(){
    LinkNode* head = new LinkNode(1);
    head->next = new LinkNode(2);
    head->next->next = new LinkNode(6);
    head->next->next->next = new LinkNode(3);
    head->next->next->next->next = new LinkNode(6);

    LinkNode* result = removeElem(head, 6);
    
    LinkNode* curr = result;
    while (curr != nullptr) {
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
    
    // Clean up the memory
    curr = result;
    while (curr != nullptr) {
        LinkNode* temp = curr;
        curr = curr->next;
        delete temp;
    }
    return 0;
}