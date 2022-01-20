info_tuple = ("zhangsan", 18, 1.75, "zhangsan")

print(type(info_tuple))

# 1.取值和取索引
print(info_tuple[1])
print(info_tuple.index(1.75))

# 2.统计元组中某个元素出现的次数
print(info_tuple.count("zhangsan"))

# 3.统计元组中有几个元素
print(len(info_tuple))