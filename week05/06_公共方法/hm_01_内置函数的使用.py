str = "zhangxiangyu"


# 内置函数之len
print(len(str))
# del的两种用法
# 1.del的关键字使用
a_list = [1, 2, 3]
del a_list[1]
print(a_list)
# del内置函数的使用：将列表a删除掉
del(a_list)
# print(a)

# 内置函数之最大值、最小值
print(max(str))
print(min(str))

# 定义一个列表
num_list = [5,2,0,8,6,-3]
print(max(num_list))
print(min(num_list))


# max和min函数在字典中的应用
# max和min函数在字典中比较的是key的大小
t_dict = {"a":"z",
          "b":"y",
          "c":"x"}

print(min(t_dict))
print(max(t_dict))
