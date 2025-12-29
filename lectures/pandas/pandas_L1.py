import pandas as pd
df=pd.read_csv("tim.csv")
# print(df.head())   #prints first 5 rows of the dataframe\
# print(df.tail())   #prints last 5 rows of the dataframe
# print(df.info())   #prints concise summary of the dataframe
# print(df.columns)   #prints column names of the dataframe
# print(df.index)    #print index (row labels) of the dataframe
# print(df[["Country","Product"]])     #print specific columns of the dataframe
# print(df.iloc[:,0])   #prints first column of the dataframe
# print(df.iloc[0])   #prints first row of the dataframe


"""#2"""
print("\n#2")
print(df[df['Country']=='India'])   #filter rows based on condition
x=df[df['Quantity']>10]   #filter rows based on condition
print(x)

"""3"""
print("\n#3")
print(df.loc[df['CustomerName']=='Anna Ivanova'])  #filter rows based on condition using loc
df.loc[df['CustomerName']=='Anna Ivanova', 'Quantity'] = 20   #update value in specific cell
print(df.loc[df['CustomerName']=='Anna Ivanova'])

"""4"""
print("\n#4")
df.loc[df['Country']=='USA' , 'Country'] = 'United States'   #update values in specific column based on condition
print(df.loc[df['Country']=='United States'])

"""5"""
print("\n#5")
df.dropna(inplace=True)   #drop rows with missing values
print(df)
df.fillna({'OrderID': 0}, inplace=True)   #fill missing values with 0
print(df)

"""6"""
print("\n#6")
df.rename(columns={'CustomerName': 'ClientName'}, inplace=True)   #rename column
print(df.columns)

"""7"""
print("\n#7")
df['Country'].value_counts()   #count occurrences of each unique value in a column
print(df['Country'].value_counts())

"""8"""
print("\n#8")
df.to_csv("updated_tim.csv", index=False)   #save dataframe to a new CSV file   
 