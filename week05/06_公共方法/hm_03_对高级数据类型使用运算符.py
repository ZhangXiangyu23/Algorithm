# 对列表使用运算符
num_list = [1, 2]

print(num_list * 3)


# 对元组使用运算符
num_tuple = ["zhangxiangyu", 20, 1.75]
print(num_tuple * 3)

t_dict = {"a":"z",
          "b":"y",
          "c":"x"}

# TypeError: unsupported operand type(s) for *: 'dict' and 'int'
# print(t_dict * 3)

# 对字符串使用运算符+
print("hello "+ "python")

# 对元组进行使用
one_tuple = (1,2)
two_tuple = (3,4)
print(one_tuple + two_tuple)

# 对列表进行使用
one_list = [1,2]
two_list = [3,4]
print(one_list + two_list)

