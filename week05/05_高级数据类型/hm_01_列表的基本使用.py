name_list = ["zhangsan", "lisi", "wangwu"]

# 1.取值和取索引
print(name_list[0])
print(name_list.index("lisi"))

# 2.修改列表中的值
# IndexError: list assignment index out of range
name_list[2] = "zxy"

# 3.增加
# append方法可以在列表末尾追加数据
name_list.append("lxy")
# insert方法可以在列表的指定位置插入数据
name_list.insert(1, "小妹妹")

# extend方法可以将其他列表中的全部数据追加到当前列表的末尾
temp_list = ["老大", "老二", "老三"]
name_list.extend(temp_list)

# 4.删除
# remove方法可以将列表中指定的数据删除
name_list.remove("小妹妹")
# pop方法默认将列表中的最后一个元素删除
name_list.pop()
# pop方法中如果传入参数，将会删除对应列表索引中的元素
name_list.pop(2)
# clear方法可以将列表中所有值全部删除
name_list.clear()


print(name_list)
