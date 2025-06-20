import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# Sample data science code
data = pd.DataFrame({
    'x': np.linspace(0, 10, 100),
    'y': np.sin(np.linspace(0, 10, 100))
})

print(data.head())
plt.plot(data['x'], data['y'])
plt.title('Sine Wave')
plt.show()
