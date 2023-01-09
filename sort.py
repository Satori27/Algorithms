<<<<<<< HEAD
# Сортировка вставками
num = [45, 21, 32, 5, 4, 7, 90,81]

for i in range(1, len(num)):
    key = num[i]
    j = i-1
    while j >= 0 and key < num[j]:
        num[j+1] = num[j]
        j-=1
    num[j+1] = key

print(num)

=======
# # Сортировка вставками
# def sort(num: list):
#     for i in range(1, len(num)):
#         key = num[i]
#         j = i-1
#         while j >= 0 and key < num[j]:
#             num[j+1] = num[j]
#             j -= 1
#         num[j+1] = key
#
#     return num



# # Сортировка слиянием
# def merge(a: list, b: list):  # сортировка слиянием, притом что два списка на вводе уже отсортированы
#     i = k = n = 0
#     c = [0]*(len(a)+len(b))
#     while i < len(a) and k < len(b):
#         if a[i] <= b[k]:
#             c[n] = a[i]
#             i += 1
#             n += 1
#         elif a[i] > b[k]:
#             c[n] = b[k]
#             k += 1
#             n += 1
#     while i < len(a):
#         c[n] = a[i]
#         i += 1
#         n += 1
#     while k < len(b):
#         c[n] = b[k]
#         k += 1
#         n += 1
#     return c
#
# def splt(s):  # разделение массива на 2 массива
#     if len(s) == 1:
#         return s
#     mdl = len(s)//2
#     left = splt(s[:mdl])  # разделение  массива на 2 массива рекурсивно
#     right = splt(s[mdl:])  # разделение массива на 2 массива рекурсивно
#     return merge(left, right)  # сортировка

# Сортировка пузырьком

def bubblesort(nums: list) -> list:
    for j in range(len(nums)-1):  # сколько раз мы пробежимся по массиву
        for i in range(len(nums)-1):  # на каждой итерации меняем числа  местами если они удовлетворяют условию
            if nums[i] > nums[i+1]:
                nums[i], nums[i+1] = nums[i+1], nums[i]
    return nums
>>>>>>> 133d2bb (add new sort algos)
