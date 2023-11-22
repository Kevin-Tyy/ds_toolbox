name = input("Enter: ")

# Reverse the string
reversed_string = ""
for i in range(len(name) - 1, -1, -1):
    reversed_string += name[i]

print("Reversed string:", reversed_string)
