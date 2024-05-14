## stringstream
### istream
`istream& getline(istream& is, string& str, char delim)`

1.getline() reads an input stream, is, up until the delim char and stores it in some buffer, str.

2.delim default on '\n'

## Outstream
### std::endl

Also tell the buffer to flush(empty for the next)

### std::ofstream(Output File stream)

A way to write data to file

#### Some methods of std::ofstream

```
std::ofstream ofs("xxx.xxx")  //create new file
is_open()  //whether has been open
open()  //open file
ofs<<"" //ofs output
close()  //close file
fail()
```

### std::ifstream(Input File Stream)

![image](https://github.com/chenh-z/CS106L/assets/111733195/ef457dbd-6091-44f2-a215-e1a75357a52c)

## Input Stream

### std::cin

stop at one whitespace(`"" \n \t`)
