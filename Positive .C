1) 

# Python program to print positive Numbers in given range
 
start, end = 12,-7,5,64,-14


for num in range(start, end + 1):
     
    if num >= 0:
        print(num, end = " ")
\
Output:
       12,5,64


2) 
# Python program to print positive Numbers in given range
 
start = int(input("Enter the start of range: "))
end = int(input("Enter the end of range: "))

for num in range(start, end + 1):
     
    if num >= 0:
        print(num, end = " ")
Output:

Enter the start of range: -95
Enter the end of range: 14
[12, 14,3]
