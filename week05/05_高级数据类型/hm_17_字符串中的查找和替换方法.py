str = "hello world"

# 1.判断字符串是否以某个字符串开头
print(str.startswith("hel"))
# 2.判断字符串是否以某个字符串结尾
print(str.endswith("ld"))

# 3.查找某个子串在字符串中的位置
print(str.find("66"))
# print(str.index("66"))

# 4.替换某个字符串
# 字符串中的replace方法是将字符串中的指定子串替换成新的字符串
# 并且返回新串，但是实质上不会改变原来的字符串
print(str.replace("hello","zxy"))

print(str)


# print(str)


