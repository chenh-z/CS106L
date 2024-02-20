# Win 2024, Jan 11th
### Function Overloading
To overload a function, declare multiple functions with the same name but differently typed parameters or a different number of parameters!
```
int half(int x) {
std::cout << “1” << endl; // (1)
return x / 2;
}
double half(double x) {
cout << “2” << endl; // (2)
return x / 2;
}
half(3) // uses version (1), returns 1
half(3.0) // uses version (2), returns 1.5

```
