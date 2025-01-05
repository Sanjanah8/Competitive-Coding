def encrypt(s,k):
    sorted_k=sorted(k)
    key_values={}
    for i,char in enumerate(sorted_k,1):
        key_values[char]=i
    key_mapping=[key_values[char]for char in k]
    s_values=[]
    for i in range(len(s)):
        value=key_mapping[i%len(k)]
        s_values.append((value,i,s[i]))
    s_values.sort(key=lambda x:(x[0],x[1]))
    encrypted=''.join(char for _,_,char in s_values)
    return encrypted
s=input().strip()
k=input().strip()
result=encrypt(s,k)
print(result)

"""
1. **`def encrypt(s, k):`**
   - This defines a function named `encrypt` that takes two parameters: `s` (the string to be encrypted) and `k` (the key string).

2. **`sorted_k = sorted(k)`**
   - This sorts the characters in the key `k` in alphabetical order and stores the result in `sorted_k`.

3. **`key_values = {}`**
   - This initializes an empty dictionary named `key_values`.

4. **`for i, char in enumerate(sorted_k, 1):`**
   - This loops over each character in `sorted_k`, along with its index `i`, starting from 1.

5. **`key_values[char] = i`**
   - Inside the loop, each character `char` in `sorted_k` is mapped to its corresponding index `i` in the `key_values` dictionary.

6. **`key_mapping = [key_values[char] for char in k]`**
   - This creates a list `key_mapping` where each character in the original key `k` is replaced with its corresponding value from `key_values`.

7. **`s_values = []`**
   - This initializes an empty list named `s_values`.

8. **`for i in range(len(s)):`**
   - This loops over each index `i` from 0 to the length of the string `s`.

9. **`value = key_mapping[i % len(k)]`**
   - For each index `i`, this calculates the corresponding value from `key_mapping`. The modulo operation (`%`) ensures that it wraps around the key if `i` exceeds the length of `k`.

10. **`s_values.append((value, i, s[i]))`**
    - This appends a tuple `(value, i, s[i])` to the `s_values` list, where `value` is the key mapping value, `i` is the index, and `s[i]` is the character from the string `s`.

11. **`s_values.sort(key=lambda x: (x[0], x[1]))`**
    - This sorts the `s_values` list first by the `value` and then by the original index `i` if the values are the same.

12. **`encrypted = ''.join(char for _, _, char in s_values)`**
    - This creates the encrypted string by joining the characters from the sorted `s_values`, ignoring the first two elements of each tuple.

13. **`return encrypted`**
    - This returns the encrypted string.

14. **`s = input().strip()`**
    - This reads the input for the string `s` and removes any leading or trailing whitespace.

15. **`k = input().strip()`**
    - This reads the input for the key `k` and removes any leading or trailing whitespace.

16. **`result = encrypt(s, k)`**
    - This calls the `encrypt` function with `s` and `k` as arguments and stores the result in `result`.

17. **`print(result)`**
    - This prints the encrypted string.

The function `encrypt` takes a string `s` and a key `k`, then uses the key to determine a new order for the characters in `s`. 
The key's characters are sorted and mapped to a numerical order, which is then used to shuffle the string `s` based on the order of characters in the key.
This results in an encrypted string, which is a reordering of the original string `s` according to the sorted order of the key `k`.
---------------
Input:
s = "HELLO"
k = "KEY"

1. **Sort the key `k`:**
   - `sorted_k = sorted("KEY")` gives `['E', 'K', 'Y']`.

2. **Create `key_values`:**
   - Assign indices to sorted characters: 
     - `'E' -> 1`, 
     - `'K' -> 2`, 
     - `'Y' -> 3`.
   - `key_values = {'E': 1, 'K': 2, 'Y': 3}`.

3. **Map original key `k` to numerical values using `key_values`:**
   - `key_mapping = [key_values[char] for char in "KEY"]` gives `[2, 1, 3]`.

4. **Prepare to create `s_values`:**
   - Loop through each character in `s` ("HELLO") and map it to its corresponding key value from `key_mapping`:
     - `H` at index 0 → `value = key_mapping[0 % 3] = 2`
     - `E` at index 1 → `value = key_mapping[1 % 3] = 1`
     - `L` at index 2 → `value = key_mapping[2 % 3] = 3`
     - `L` at index 3 → `value = key_mapping[3 % 3] = 2`
     - `O` at index 4 → `value = key_mapping[4 % 3] = 1`
   - `s_values = [(2, 0, 'H'), (1, 1, 'E'), (3, 2, 'L'), (2, 3, 'L'), (1, 4, 'O')]`.

5. **Sort `s_values` by `value` and then by `index`:**
   - After sorting, `s_values = [(1, 1, 'E'), (1, 4, 'O'), (2, 0, 'H'), (2, 3, 'L'), (3, 2, 'L')]`.

6. **Create the encrypted string:**
   - `encrypted = ''.join(char for _, _, char in s_values)` gives `'EOHLL'`.

**Output:**
EOHLL

In this example, the string "HELLO" is encrypted to "EOHLL" using the key "KEY".
