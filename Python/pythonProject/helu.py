import calendar
import random

# print("Hello \n hello")
# a = input("Enter something: ")
# print("You entered: ", a)
# speed = 45
# vehicleName = "car"
# print("The speed of the", vehicleName, "is", speed, "km/hr")
#
# isPossible = False
# print("Is it possible: ", isPossible)

# string = "hello hello hello"
# print(len(string))
# print(string.replace("hello", "hi"))
# print(len(string.replace("hello", "hi")))
# print(string[0:10])

# a = 50
# line = "hello"
# print(a, line)

# inputLine = input("Enter a line: ")
# inputNumber = int(input("Enter a number: "))
# print("You entered: ", inputLine, inputNumber)

# list = [1, 2, 3, 4, 5, "hello", "hi", True, ]
# print(list)
# list.remove(5)    removes 5 from the list
# print(list)
#
# numberList = [1, 2, 3, 4, 5]
# numberList.sort()       sorts in ascending order
# print(numberList)
# numberList.sort(reverse=True)    sorts in descending order
# print(numberList)
#
# touples = (1, 2, 3, 4, 5)          similar to list, only it is fixed and cant be modified
# print(touples)
#
# friends = {"name": "John", "age": 25, "isStudent": False}
# print(friends["name"])
# print(friends["age"])
# print(friends["isStudent"])

# input_1 = input("Enter the first number: ")
# input_3 = input("Enter the operator: ")
# input_2 = input("Enter the second number: ")
#
# if input_3 == "+":
#     print(int(input_1) + int(input_2))
# elif input_3 == "-":
#     print(int(input_1) - int(input_2))
# elif input_3 == "*":
#     print(int(input_1) * int(input_2))
# elif input_3 == "/":
#     print(int(input_1) / int(input_2))

# for l in "hello":
#     print(l)

# Translator
# line = input("Enter a sentence")
#
# def method_1(line):
#     translation = ""
#     for l in line:
#         if l in "AEIOUaeiou":
#             translation = translation + "g"
#         else:
#             translation = translation + l
#     return translation
#
# print(method_1(line))

# text_file = open("textFile.txt", "r")
# print(text_file.readlines())
# text_file.close()

# line = "12"
# print(int(line) * 2)

# date = calendar.month(2029, 1)
# print(date)
#
# random_number = random.randint(1, 10)
# print(random_number)

# class randon:
#     name = "Fahmid"
#     def  __init__(self, id):
#         self.id = id
#         print("Hello")
#
# randon1 = randon(12)
# randon1.name = "Nuren"
# print(randon1.name)
# print(randon1.id)
#
# class average:
#     def __init__(self, number1, number2, number3):
#         self.number1 = number1
#         self.number2 = number2
#         self.number3 = number3
#
#     def average(self):
#         print((self.number1 + self.number2 + self.number3) / 3)
#
# average1 = average(1, 2, 3)
# average1.average()


# class hello:
#     def __init__(self, name, age, department, year, password):
#         self.name = name
#         self.age = age
#         self.department = department
#         self.year = year
#         self.__pasword = password
#
#     def get_age(self):
#         print()
#
#
# hello1 = hello("Fahmid", 22, "CSE", 1, "abc")
# print(hello1.get_age)
# print(hello1.get_password)


class parent:
    name = "IUT"
    address = "Boardbazar"

    def national_bird(self):
        return "Mosquito"

class child( parent ):
    def __init__(self, department, students):
        self.department = department
        self.students = students

child1 = child("CSE", 180)
print(child1.name)
print(child1.national_bird())
print(child1.address)

