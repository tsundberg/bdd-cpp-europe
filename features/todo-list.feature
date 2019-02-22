
Feature: In order to remember what to do, one might need a todo list 

  Scenario: Remeber to buy food for the cat 
    Given that we are out food for the cat 
    When Thomas adds buy food for the cat to his todo list 
    Then should the todo list contain buy food for the cat
    
