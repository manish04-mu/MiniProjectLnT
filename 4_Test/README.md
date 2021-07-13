# TEST PLAN:

## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| H1|Display of Menu| None | Menu<br>(1)Frooti<br>(2)Fanta<br>(3)Cocacola<br>(4)MountainDew<br>(5)Nachos<br>(6)Lays<br>(7)Sandwich<br>(8)Hide'n'seek<br>(9)Kitkat<br>(10)DairyMilk| PASS | Scenario|
| H2|Carrying payment through cash mode |Product Id <br> Amount Inserted|Display which Product is dispensed <br>Display the Balance in the multiples of the accepted denominations  |PASS|Requirement based |
| H3|Carrying payment through card mode |Product Id <br> User ID|Display which Product is dispensed <br>Display the Remianing Balance|SUCCESS|Requirement based |
| H4|Accessing the Admin Mode |None|(1)View the Menu <br>(2)Update the Name of Product <br>(3)Update the Price of Product <br>(4)Update the Quantity of Product |SUCCESS| Requirement based |




## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L1|H1|Checking whether the give product is available or not. | Giving any product ID| If Product is Available return '1' | SUCCESS |Requirement based |
|  L2|H2|Checking wheter the given amount is the valid in denomination or not| Giving the Amount that the user wants to insert in the vending machine |If the inserted amount is valid the return '1' |SUCCESS|Requirement based|
|  L3|H3|Authenticating the card ID and Password|Card ID <br>Password |If the authentication is done then return '1'| SUCCESS |Requirement based|
|  L4|H3|Checking the User Id stored in local datbase|Card ID|Return the User ID| SUCCESS |Requirement based|
|  L5|H4|Updating the Name of the Product |Product ID <br> Name of New Product|Update the Name of the Product| SUCCESS |Scenario|
|  L6|H4|Updating the Price of the Product |Product ID <br> New Price of the Product|Update the Price of the Product| SUCCESS |Scenario|
|  L7|H4|Updating the Quantity of the Product |Product ID <br> New Quantity of the Product|Update the Quantity of the Product| SUCCESS |Scenario|