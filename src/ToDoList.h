#include <list>
using namespace std;

class ToDoList{
    private:
        string name;
        list<string> items;

    public:
        ToDoList() : name(), items(){}

        void add(const string& name){
            items.push_back(name);
        }

        string getLast() const{
            return items.back();
        }

        void setName(const string& name){
            this->name = name;
        }

        string getName() const{
            return name;
        }
};
