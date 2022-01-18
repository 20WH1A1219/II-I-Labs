# Experiment 14
## Aim of the Experiment
#### A program on user defined exception
### Step by Step procedure of the Experiment
1.In order to create a custom program, we have included a header file initially along with iostream.

2.Create exception class.

3.Here we have created a class MyException which will inherit base class exception.

4.Inside the exception class MyException we will have the functions. Here we have the function char* what() which is of const type.

5.On the next line, we have created two objects one of user defined exception class and one for the exception class.

6.Then inside try block we have operated the divide functions and if there error occurs in the logic or mathematical operation, we will throw the exception class object.

7.Inside the catch block, we have included the exception object with its exact address pointer. There we are showing the result by calling what function through the exception object.
