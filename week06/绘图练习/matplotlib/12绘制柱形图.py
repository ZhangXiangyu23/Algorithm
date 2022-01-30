import matplotlib.pyplot as plt
import numpy as np

x = np.arange(5)
np.random.seed(0)
y = np.random.randint(-5, 5, 5)
v_bar = plt.bar(x, y)
# 设置柱形图中大于0的部分为蓝色，小于0的部分为绿色
for bar, height in zip(v_bar, y):
    if height < 0:
        bar.set(color="green")


plt.show()

print(x)
print(y)

