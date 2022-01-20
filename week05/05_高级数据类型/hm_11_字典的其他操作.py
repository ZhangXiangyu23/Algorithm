xiaoming_dict = {"name": "xiaoming",
                 "age": 18}

# 1. 统计一下字典中键值对的数量
print(len(xiaoming_dict))

# 2.合并键值对，如果被合并的字典中有与原字典中重复的键值对，进行对原有键值对的覆盖
temp_dict = {"height": 1.75,
             "age":20}

xiaoming_dict.update(temp_dict)

# 3.将字典清空
xiaoming_dict.clear()
print(xiaoming_dict)