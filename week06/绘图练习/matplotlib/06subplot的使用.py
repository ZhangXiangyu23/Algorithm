import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 10, 100)

# 分区并确定放在哪个位置
plt.subplot(2, 2, 1)
# 调整x轴和y轴的范围
plt.xlim(0, 20)
plt.ylim(-2, 2)
plt.plot(x, np.sin(x))

plt.subplot(2, 2, 2)
plt.plot(x, np.cos(x))

plt.show()