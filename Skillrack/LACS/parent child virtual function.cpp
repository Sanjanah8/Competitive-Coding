class Parent{
    public:
    virtual void callMe(){
        cout<<"Parent\n";
    }
};
class Child:public Parent{
    public:
    void callMe() override{
        cout<<"Child\n";
    }
};
