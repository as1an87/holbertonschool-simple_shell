
# ![images](https://github.com/nihad1213/holbertonschool-simple_shell/assets/99197650/8c850073-2ba7-42f1-8bef-c12e8082806e) S I M P L E &emsp; S H E L L


## Introduction 🚀

The simple shell project is a collaboration between **Nihat Namatli** and **Aslan Aslanov**, Software Engineering students at **Holberton School**, with which we can emulate the operation of a shell, which contains some of its most basic characteristics, such as : Handle `PATH`, Handle command lines with `arguments`.

## Table of Contents
1. [Description](#description-)
2. [Requirements](#requirements-)
3. [Installation and Compilation](#installation-and-compilation)
4. [Example of Use](#example-of-use-)
5. [Authors](#authors-%EF%B8%8F)

## Description 📖

Holberton School Shell (hsh), is a simple program of the line commands. This simple shell recreates basic and some more complex functionalities to result in our own Shell. This shell si developed in the programming language c. This shell takes the keyboard commands and delivers them to the system to be executed. some built-in commands implement: exit, env, help, cd.

## Requirements 📋

Simple_shell is designed to run in the `Ubuntu 22.04 LTS` linux environment and to be compiled using the GNU compiler collection v. `gcc 4.8.4` with flags `-Wall, -Werror, -Wextra, and -pedantic`.

## Installation and Compilation🔧

Do you need clone [this repository](https://github.com/as1an87/holbertonschool-simple_shell):
```
	git clone https://github.com/as1an87/holbertonschool-simple_shell
```
and then you can compile with this command:
```
	gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
after compilation you can excecute with this command:
```
	./hsh
```

## Example of Use 💻

* Compile the program to create the `hsh` executable file (see instructions above).
* run the executable as follows `./hsh`
* Enter basic commands like: `ls`, you can add flags along with `ls` command such as `-l`, `-la`(`ls -l`, `ls -la`)
* press enter after entering the command
* to end the execution of the `simple_shell` program press `ctrl + d` or write the word `exit`

Your shell should work like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Authors ✒️

*	Nihad Namatli-[nihad1213](https://github.com/nihad1213/)
*	Aslan Aslanov-[as1an87](https://github.com/as1an87/)

