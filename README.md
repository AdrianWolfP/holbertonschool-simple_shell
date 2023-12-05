![Simple_Shell](https://github.com/Srixx24/holbertonschool-simple_shell/assets/144152489/3e47da97-6507-4efe-ab55-f68ce8685214)

<p align="center">
🌟 by <a href="https://github.com/AdrianWolfP/">Wolfgang</a> and  <a href="https://github.com/Srixx24/">Jackie</a> 🌟
</p>

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) ![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white) 

<br>


<h3><p align="center">
Directory of our <a href="https://github.com/Srixx24/holbertonschool-simple_shell/">Simple Shell</a> project 
</p></h3>

<br>

### 🐚 [main.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/main.c)
- Gives a command prompt of $ and waits for command from user in an infinite loop.
- Has an exit command of ctrl-D and exitshell
- Makes call to token.c

### 🐚 [commandex.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/commandex.c)
- Program handles command execution with parent/child process
- Pulls path environment from path.c with get_path

### 🐚 [tokenizing.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/tokenizing.c)
- Tokenizes input and stores it in an array
- Makes calls to comandex and listfiles function within

### 🐚 [path.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/path.c)
- Searches path environment to find the variable name and returns a pointer

### 🐚 [env.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/env.c)
- Gets enviorment

### 🐚 [ls.c](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/ls.c)
- ls command

### 🐚 [headers.h](https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/headers.h)
- Contains all header files 

<details>
<summary>Support Files</summary>
<ul>
<li><a href="https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/AUTHORS/">AUTHORS</a></li>
<li><a href="https://github.com/Srixx24/holbertonschool-simple_shell/blob/master/man_1_simple_shell/">MAN Page</a></li>
</details>
