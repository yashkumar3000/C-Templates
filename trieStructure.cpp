class Solution {
    struct Node{
      char ch ; 
      string str; 
      int end ; 
      Node* arr[26] ;
    };
    
    struct Node* init(char ch)
    {
        Node *node = new Node; 
        node -> ch = ch ;
        node -> end =1 ; 
        node->str = "" ;
        for(int i = 0 ;i < 26 ;i++) 
            arr[i] = nullptr;
        return node;
    }
    Node* root = init('\0') ;
    
    void insert(string str)
    {
        Node* curr = root; 
        for(int i = 0 ;i < str.length();i++) {
            int idx = str[i] - 'a' ;
            if(curr->arr[idx] == nullptr) {
                curr->arr[idx] = init(str[i]) ;
            }
            curr = curr->arr[idx] ;
        }
        curr->str= str; 
        curr->end+=1 ;
        return;
    }
