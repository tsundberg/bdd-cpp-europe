#include "ToDoList.h"
#include <cucumber-cpp/autodetect.hpp>
using cucumber::ScenarioScope;

struct ToDoListContext {
    ToDoList toDoList;
};

GIVEN("^that Thomas is out of cat food$"){
    ScenarioScope<ToDoListContext> context;
    context->toDoList.setName("Thomas To Do List");
}

WHEN("^he adds buy cat food to his todo list$"){
    ScenarioScope<ToDoListContext> context;
    context->toDoList.add("buy cat food");
}

THEN("^should Thomas todo list contain buy cat food$"){
    ScenarioScope<ToDoListContext> context;

    string expectedName = "Thomas To Do List";
    string actualName = context->toDoList.getName();
    EXPECT_EQ(expectedName, actualName);

    string expectedItem = "buy cat food";
    string actualItem = context->toDoList.getLast();
    EXPECT_EQ(expectedItem, actualItem);
}