# Nothing To Do Here

This is just a place where i archived my C code. And it is mostly about algorithm and data structure

## How To Run

Move to the directory containing the code file with `cd` command.

### Powershell

In powershell, you could compile the code and the output file is in .exe format :

```
gcc -o [output_name] [code_name].c
```

If you need to test a testcase with tc.txt file, run the code below :

```
Get-Content .\tc.txt | .\[output_name].exe
```

### Linux Terminal

In terminal, compile the code and the output file is the name of your code :

```
gcc -o [output_name] [code_name].c
```

If you need to test a testcase with tc.txt file, run the code below :

```
[output_name] < tc.txt
```
