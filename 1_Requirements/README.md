# Reqiurements
## INTRODUCTION
1.	A vending machine is an automated machine which is intended to provide the users with a diverse range of products. 
2.	A vending machine dispenses a product to the users based on the amount of money inserted and selection of the product.
3.	Many businesses which have opted to use vending machines as an extended business opportunity and have described optimistic reviews.
4.	These machines enable businesses to expand to serve customers 24/7 which is a great asset for  both the businessman and the customer. 
## RESEARCH
During the 1850s and 60s, the first, fully-automatic vending machine was introduced which sold stamps and writing paper. 
By the 1880s, coin-operated vending machines were introduced in London and Percival Everitt invented a machine that dispensed envelopes, postcards and notepapers.
Japan has the highest density of vending machines worldwide. There is approximately 1 vending machine per every 23 people.
Annual sales total more than $60 billion. The Indian vending machine market is expected to witness robust growth over the coming years on account of the growing retail industry and rapid urbanization.
### By Product Type
	1. Beverages
	2. Snacks
	3. Chocolates and Candies
### By End Users
	1. QSR
	2. Shopping Malls
	3. Retail Stores
	4. Offices and Institutions
	5. Public Transport
	
## DEFINING THE SYSTEM
### Shopkeeper/Owner
	1. Stores the list of products,price of product that he want to sell using this Vending Machine.
	2. Can update the name, price, and quantity of the product in the vending machine.
### User
	1. The user is given the choice of the product that he wants to buy. 
	2. Then the user selects the payment mode (i.e Cash or Card).
	3. The balance is returned (if any in case of Cash Mode) along with the product.
	
## SWOT ANALYSIS
 ![SWOT ANALYSIS](https://github.com/manish04-mu/MiniProjectLnT/blob/main/1_Requirements/swot.png)

# 4W&#39;s and 1&#39;H

### Who
* Every Vendor who wants to work 24/7 without much of Manual Labour. 

### What
* Automated Machine which is intended to provide the users with a diverse range of products.
 
### Where
* Anywhere where there is power supply and space.

### When
* Vending Machine was found in mid 1800s. Currently it is booming in India. 

### How
* User selects the desired product and then make the payment using either cash or card mode and then the product is dispensed.

# DETAIL REQUIREMENTS
## High Level Requirements:

ID       | Description                              | Category  | Status      |
------   | -----------------------------------------| -------   | -------     |
HR01     |      Product Selection        			| Technical | Implemented |
HR02     |      Selecting Cash Module    			| Technical | Implemented |
HR03     |      Selecting Card Module               | Technical | Implemented |
HR04     |      Selecting Admin Mode				| Technical | Implemented |


##  Low level Requirements:
ID    | Description                                 | HRID | Status|
------| --------------------------------------------| ------- | -------|
LR01   | Selecting from the List of Product that is displayed. | HR01 | Implemented |
LR02   | Determining whether the selected product is available or not.  | HR01 | Implemented |
LR03   | Authenticating the card id and the password for the payment using Card mode. | HR03 | Implemented |
LR04   | Determing the User ID that is stored in the local database. | HR03 | Implemented |
LR05   | Updating the Name of the Product. | HR04 | Implemented |
LR06   | Updating the Price of the Product. | HR04 | Implemented |
LR07   | Updating the Quantity of the Product. | HR04 | Implemented |

