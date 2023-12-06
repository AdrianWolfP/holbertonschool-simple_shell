<p align="center">
  <img width="2000" src="https://github.com/Srixx24/holbertonschool-simple_shell/assets/144152489/3e47da97-6507-4efe-ab55-f68ce8685214">
</p>


<p align="center">
🌟 by <a href="https://github.com/AdrianWolfP/">Wolfgang</a> and  <a href="https://github.com/Srixx24/">Jackie</a> 🌟
</p>

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) ![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white) 

<br>


<h3><p align="center">
Directory of our <a href="https://github.com/Srixx24/holbertonschool-simple_shell/">Simple Shell</a> project 
</p></h3>

This program works through files listed below to execute a shell that handles basic commands. The functions are betty compliant and do not work as well as we hoped. Use gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh to compile and enter ./hsh to see the ✨magic✨

<br>

### 🐚 [main.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/main.c)
- Gives a command prompt of $ and waits for command from user in an infinite loop.
- Has an exit command of ctrl-D and the exit function
- Makes call to token.c for tokenization

### 🐚 [commandex.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/commandex.c)
- Function handles command execution with parent/child process
- Pulls path environment from path.c with get_path

### 🐚 [tokenizing.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/tokenizing.c)
- Tokenizes input and stores it in an array
- Makes calls to comandex and listfiles function within

### 🐚 [path.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/path.c)
- Creates path and checks if executable
- Searches path environment to find the variable name and returns a pointer

### 🐚 [env.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/env.c)
- Gets enviorment and prints to the command line

### 🐚 [headers.h](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/headers.h)
- Contains all prototypes needed for the functions and necessary headers

<details>
<summary>Support Files</summary>
<ul>
<li><a href="https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/AUTHORS/">AUTHORS</a></li>
<li><a href="https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/man_1_simple_shell/">MAN Page</a></li>
</details>

<p align="center">
  <img width="600" src="https://github.com/Srixx24/holbertonschool-simple_shell/assets/144152489/92341cd5-3dc1-4d27-89a5-9c661aebe08a">
</p>
