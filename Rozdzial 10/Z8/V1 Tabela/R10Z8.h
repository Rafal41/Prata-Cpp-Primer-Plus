#ifndef R10Z8_H_
#define R10Z8_H_

typedef int Item;


class List
{
    private:
        struct element
        {
            Item m_number;
        };
        typedef struct element Node;
        
        enum {MAX = 10}; 
        Node m_node[MAX]; 
        int m_pos;
        

    public:
        List();
        ~List();
        void Addtolist(Item & item); 
        bool Emptylist();
        bool Fulllist();
        void Visit(void (*pf)(Item & item));
};


#endif