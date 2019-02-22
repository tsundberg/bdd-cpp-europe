#include <cucumber-cpp/autodetect.hpp>
using cucumber::ScenarioScope;

#include <list>
using namespace std;

typedef list<string> ToDoList;

struct ToDoListContext {
    ToDoList toDoList;
};

GIVEN("^that we are out food for the cat$"){
}

WHEN("^Thomas adds buy food for the cat to his todo list$"){
    ScenarioScope<ToDoListContext> context;
    context->toDoList.push_back("Buy food for the cat");
}

THEN("^should the todo list contain buy food for the cat$"){ 
    ScenarioScope<ToDoListContext> context;
    EXPECT_EQ(1, context->toDoList.size());
}
