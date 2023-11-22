array1 = [[1, 2, 3, 13, 17, 34, 19],
          [54, 23, 11, 45, 31, 65, 26]]
array2 = [[1, 2, 3, 13, 17, 34, 19],
          [54, 23, 11, 45, 31, 65, 26]]

print("FIRST OPTION")
for row in array1:
    for element in row:
        print(element, end="\t")
    print()

print("\nSECOND OPTION")
for row in array2:
    for element in row:
        print(element, end="\t")
    print()