class Child : public Parent
{
public:
    Child() : Parent(2)
    {
        cout << "No argument Child" << endl;
    }
    Child(int n) : Parent(n * n)
    {
        cout << n * n << endl;
    }
};
