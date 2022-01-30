import matplotlib.pyplot as plt
import numpy as np

# 使用normal函数，指定期望和标准差，还有数量来生成正态数
x = np.random.normal(0, 0.8, 1000)
y = np.random.normal(-2, 1, 1000)
z = np.random.normal(3, 2, 1000)
kwargs = dict(bins=100, alpha=0.5)


plt.hist(x, **kwargs)
plt.hist(y, **kwargs)
plt.hist(z, **kwargs)
plt.show()