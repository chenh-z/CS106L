# Special Member Function

## Overview

6 Special member function

Only generate when they are called

```cpp
class Widget
{
  public:
  Widget();  //default constructor: Takes no parameter and create an object
  Widget(const Widget& w); // Copy Constructor: Creates a new object as a member-wise copy of another
  Widget& operator = (const Widget& w); //Copy assignment operator: Assign an already exists object to another
  ~Widget();  //Destructor: Will be called when object goes out of scope
  Widget(Widget&& rhs);   //
  Widget& operator = (Widget&& rhs)
}



```
