# Lab 3 -- Counting Assembly

This is the starting readme for this assignment.  Please edit the following 
information by removing the "*edit me*" and replace it with appropriate 
information your assignment. If it is asking you a question, please provide 
a response.

- Name: Chenyi Xiang

- Title: Lab03

- How many hours did it take you to complete this assignment? 20 hours

- Did you collaborate with any other students/TAs/Professors? If so, tell 
  us who and in what capacity.
  - Eddie, Yue Liu
  
- Did you use any external resources? (Cite them below)
  - Wikipedia, W3School, chatGPT.
  
- Use your tool to measure the  number of instructions that are require to 
  execute your implementation of the guessing game program that you 
  implemented in Homework 1 using two different levels of optimization:

  - When your program is compiled using the -O0 flag:
    add: 19
    sub: 14
    mul: 1
    div: 1
    mov: 14
    lea: 0
    push: 0
    pop: 0
    res: 1
    Total Instructions: 50
    Total Cycles: 75


  - When your program is compiled using the -O3 flag:

    add: 64
    sub: 7
    mul: 5
    div: 0
    mov: 62
    lea: 0
    push: 0
    pop: 0
    res: 1
    Total Instructions: 139
    Total Cycles: 149

- (Optional) What was your favorite part of the assignment? 
  - The counting for assembly code and terminal command i learnt.
  
- (Optional) How would you improve the assignment? 
  - less homework. 

## Logistics

For this assignment (and every assignment/lab), you must login into the 
servers through `your_khoury_name@login.khoury.northeastern.edu` to complete 
and test your work. The reason is the examples I will provide below are 
compiled strictly for our machine's architecture, and this is a consistent 
architecture where your submission will be graded.

### Important notes

* Your code **must compile and run** on the Khoury machines to earn credit. 
  Make sure you test your programs on these machines, as this is where we 
  grade your assignments.
* You must commit any additional files (if any) into your repository so we 
  can test your code.
  * Points will be lost if you forget!
* Do not forget to push your changes in your private repo for grading before 
  the assignment deadline!**

