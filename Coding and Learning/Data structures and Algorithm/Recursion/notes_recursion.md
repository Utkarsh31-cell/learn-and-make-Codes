Shree ganeshay Namah :


Begin with Aditya Verma Lectures on Recurssion :

Recurssion : Recalling same thing again and again using different combinations
             untill and unless it reaches its soltuion.

In Recurssion we always try to find a base solution which is [primary condition -> going to apply for all the combinations].
Hence we need to write this for one case and then we can call function again using whatever parameters which we are using.


One Main thing : 

{Most of the person speaking about recursion}

Recursion made input smaller. 

But the question is how it is make it smaller and Is it true that we are making problem into smaller input? 

example : suppose some student want to go to top IT copanies for high packages :

what does he need to do  ?

Decision : t1 -> clear exam and get best colleges ->now again their is case -> if he studies recursion topic then-> he is 
                 prepared better than other person who are in one of the best college where their is more chance of top ompanies will come for placement
           t2 ->(else condition) if unable to clear exam or clear the exam but not get best colleges then try to do good coding then also he/she get good company

Here t1, t2 are choices.

1. So Decision and Choices are main term for Recursion.{[Decision] & [choice]  -> if these two things are their in problem then we will use recursion}
2. Recursive Tree (most imp)

Example : subset problem 

ex: [a,b,c] -> {' ',a,b,c,ab,bc,ca,abc}
|     | a   |  b  |  c
| " " | 0   | 0   |  0
| a   | 1   | 0   |  0
| b   | 0   | 1   |  0
| c   | 0   | 0   |  1
| ab  | 1   | 1   |  0
| bc  | 0   | 1   |  1
| ca  | 1   | 0   |  1
| abc | 1   | 1   |  1     

See how we are making choices  0-> not taken and 1 -> is taken