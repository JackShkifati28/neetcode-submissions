class Node{
    public:
    Node * next;
    int value;
    Node(int val) : value(val), next(nullptr) {}
};

class LinkedList {
public:
    Node * head;
  
    LinkedList() {
      head = nullptr;
      
    }

    int get(int index) {
      
      if (head == nullptr) return -1;

      Node* current = head; 

      int count =0;

      while (current != nullptr){
        if(count == index ) return current->value;
        current=current->next;
        count++;
      }

      return -1; // if index is out of bound


    }

    void insertHead(int val) {
        Node * newHead = new Node(val);
        newHead->next = head;
        head = newHead;
       
    }
    
    void insertTail(int val) {
        Node * newNode = new Node(val);

      
    if (head == nullptr) {
        head = newNode;
        return;
    }

        Node * current = head;
        while(current->next != 0) current = current->next;
        current->next = newNode;
     
    }

    bool remove(int index) {

    if (head == nullptr) return false;

    // Special Case: Removing the head
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }
     
      Node* current = head; 

      int count =0;

      while (current != nullptr && count < index -1){
        
        current = current->next;
        count++;
      }
      
      // If index is out of bounds or there's no node to delete
    if (current == nullptr || current->next == nullptr) {
        return false;
    }

    // Node to be deleted
    Node* target = current->next;
    
    // The "Unhooking" step: Skip over the target
    current->next = target->next;

    // The "Cleanup" step: Free the memory
    delete target;

    return true;

    }

    vector<int> getValues() {

        vector<int> v;

        Node * current =head;

        while (current != nullptr){
            v.push_back(current->value);
            current = current->next;
        }

        return v;
        
    }
};
