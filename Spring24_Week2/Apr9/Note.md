# Initialization and References
## Uniform Initialization
Initialization using {}

Can be used in all types.

**When accessing elements in vector**

It can be:

```
vector<int>numbers;
numbers={1,2,3,4,5};
for(int num:numbers){}
```

## Alias

void func(int& a): a is a ref(same address)

void func(int a ): a is just a copy(**different address**)

**Notice**: bind pair arrays(pairs in vectors), not equal to bind pairs.

![image](https://github.com/chenh-z/CS106L/assets/111733195/ea4227f0-aa07-4c97-bd01-db3d5d0426fa)

![image](https://github.com/chenh-z/CS106L/assets/111733195/551a9c8c-874a-4b11-a678-591105e4f429)

