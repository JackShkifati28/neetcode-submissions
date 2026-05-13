

class DynamicArray {

int * arr;
int size;
int capacity; 

public:

    DynamicArray(int capacity): arr{nullptr}, capacity{capacity}, size{0}  {
     
      if (capacity > 0) arr = new int[capacity]{};
      
    }

    int get(int i) {

    return this->arr[i];

    }

    void set(int i, int n) {
        this->arr[i]=n;
    }

    void pushback(int n) {
        if (this->size == this->capacity) resize();
        this->arr[this->size++]=n;
    }

    int popback() {
      int last = this->arr[this->size-1];
      this->size--;
      return last;

    }

    void resize() {

    int newCapacity = (this->capacity == 0) ? 1 : this->capacity * 2;
    int* newArr = new int[newCapacity]{};

    for (int i =0; i < this->size; ++i) newArr[i]=this->arr[i];
    
    delete[] arr;
    
    this->arr = newArr;
    this->capacity = newCapacity;

    }

    int getSize() {
      return size;
    }

    int getCapacity() {
     return capacity;
    }
    ~DynamicArray() {
        delete[] arr;
    }
};
