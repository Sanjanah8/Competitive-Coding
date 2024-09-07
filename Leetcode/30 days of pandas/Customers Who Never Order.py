import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    tmp = customers[['name']][~(customers['id'].isin(orders['customerId']))]
    return tmp.rename({'name':'Customers'}, axis=1)
