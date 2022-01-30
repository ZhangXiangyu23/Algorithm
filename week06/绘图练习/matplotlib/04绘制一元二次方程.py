import matplotlib.pyplot as plt

x = range(-100, 100)
y = [i**2 for i in x]

plt.plot(x, y)

# 将生成的图片进行保存,默认保存成png格式
plt.savefig("result")

# 也可以指定格式
plt.savefig("result.jpg")
# 应该在展示之前，进行保存图片操作

plt.show()
