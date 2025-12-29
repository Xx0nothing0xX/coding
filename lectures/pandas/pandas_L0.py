#i am learning pandas
import pandas as pd

data = {'Name': ['Tom', 'nick', 'krish', 'jack'],
        'Age': [20, 21, 19, 18]}
df = pd.DataFrame(data)
print(df)
print(type(df))       #prints <class 'pandas.core.frame.DataFrame'>
print(df.describe())   #
print(df.head(2))
print(df.tail(2))
print(df.info())
print(df.shape)
print(df.columns)
print(df.dtypes)
print(df['Name'])
print(df.Age)  
print(df.loc[0])
  