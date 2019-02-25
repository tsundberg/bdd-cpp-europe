#include "ToDoList.h"
#include <cucumber-cpp/autodetect.hpp>
using cucumber::ScenarioScope;

struct ToDoListContext {
    ToDoList toDoList;
    string expectedName;
    string expectedLastItem;
};

GIVEN("^that Thomas is out of cat food$"){
    ScenarioScope<ToDoListContext> context;
    string name = "Thomas' To Do List";

    context->toDoList.setName(name);
    context->expectedName = name;
}

WHEN("^he adds buy cat food to his todo list$"){
    ScenarioScope<ToDoListContext> context;
    
    string buyCatFood = "buy cat food";

    context->toDoList.add(buyCatFood);
    context->expectedLastItem = buyCatFood;
}

THEN("^should Thomas todo list contain buy cat food$"){
    ScenarioScope<ToDoListContext> context;

    EXPECT_EQ(context->expectedName, context->toDoList.getName());
    EXPECT_EQ(context->expectedLastItem, context->toDoList.getLast());
}
