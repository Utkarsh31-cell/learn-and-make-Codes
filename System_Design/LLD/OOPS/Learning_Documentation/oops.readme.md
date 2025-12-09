We are here working on the 

code link for reference : https://github.com/prateek27/design-patterns-java/

Their are overall 3 major topics :

1. CLasses and 4 Pillars of OOPS 
    (1. Abstraction 2. Encapsulation 3. Polymorphism  4. Inheritance)

2. Access Modifiers  (public, private, protected and default)

3. UML Diagrams (unified modelling language diagrams)

Design Payment Service :

Here we are using all the 4 pillar of OOPS.

1. We will create Bad code and then correct it to make good code.

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            __   _             __       _ _    __   __  __        ___   __  __
    Design |_ | /_\  \ / |\/| |__  |\ |  |    |__  |__ |_ |  \  /  |   |   |__
           |   /   \  /  |  | |__  | \|  |     __| |__ |  \   \/  _|_  |__ |__

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

For this basically what we are doing here is we want to make payment system which has option of different payment system

example 1. Credit Card 2. Debit Card 3. UPI 3. Paypal 4. Wallet etc

Pyament system had above different way of payment and they will have makePayment() method to do the payment

We are creating one PaymentService which has addPayer(), makePayment()

different payment method -> {creditCard, debitCard, UPI, payPal etc}

In first attempt we try to create one Card class which is parent class and other class CreditCard and DebitCard etc are inherit from this Card class.

super()  method -> is invoked inside the CreditCard whenever object of child class (ex CreditCard) is created it will call the constrcutor of parent class (Card).