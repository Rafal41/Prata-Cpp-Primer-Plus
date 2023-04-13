#ifndef R10Z8_H_
#define R10Z8_H_


typedef int Item;
class List
{
    private:
      
        struct element
        {
            Item m_number;
            struct element * m_next;
        };
        typedef struct element Node;

        Node m_node;
        Node * m_headptr;
        Node * m_endptr;
        enum {MAX = 10}; 
        int m_amount;
        // Node m_node[MAX]; 

    public:
        List();
        ~List();
        void Addtolist(Item & item); 
        bool Emptylist();
        bool Fulllist();
        void Visit(void (*pf)(Item & item));
};


#endif