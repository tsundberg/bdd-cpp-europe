all: compile runTest

compile:
	g++ -I./cucumber-cpp/include -L./cucumber-cpp/lib ./features/step_definitions/StepsDefinitionRunner.cpp -lcucumber-cpp -lboost_unit_test_framework -lboost_program_options -lboost_system -lboost_regex -lboost_filesystem -lboost_thread -o toDoListFeaturesTest 

runTest:
	./toDoListFeaturesTest >/dev/null &
	cucumber ./features/todo-list.feature
