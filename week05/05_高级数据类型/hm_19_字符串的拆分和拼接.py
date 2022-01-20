poem_str ="登鹳雀楼\t 白日依山尽\t\n 黄河入海流\t欲穷千里目\t更上一层楼"

print(poem_str)

# 拆分
poem_list = poem_str.split()

# for word in poem_list:
#     print(word)

print(poem_list)

# 合并
str = "."
result = str.join(poem_list)
print(result)