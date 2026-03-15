import pandas as pd
df= pd.read_csv('mummy.csv')
df.dropna(inplace=True)
l= df.columns.tolist()

k=[]
for i in df["Name"]:
    if i not in k:
        k.append(i)
    elif i in k:
        df.drop(df[df['Name'] == i].index[1], inplace=True)
        
print(df)

#mujhe jo krna hai wo mujhe krna hai

