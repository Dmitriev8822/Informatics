#ifndef S_STACK_H
#define S_STACK_H


class s_queue
{
    public:
    explicit s_queue(int size);
    virtual ~s_queue();

    bool push(int v);
    bool pop(int &v);
    bool peak(int &v);

    protected:

    private:
    int *p;
    int *pmax;
    int *h;
    int *t;

};

#endif // S_STACK_H
