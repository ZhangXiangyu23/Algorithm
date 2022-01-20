# 在python中定义字符串，既可以使用双引号也可以使用单引号
# 一般表示字符串，使用的是双引号
str1 = "hi python"
# 字符串中想要表达双引号时，外部使用单引号来括住字符串变量
str2 = '外号“豹子头”'

print(str2)


# 访问字符串中的指定字符
# 在python和C中都可以这样来获取相应的字符
print(str1[1])


# 遍历一个字符串
for char in str2:
    print(char)