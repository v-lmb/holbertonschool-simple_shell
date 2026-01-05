# C - Simple Shell - Holberton School

# simple_shell

## Overview


---

## Table of Contents


---

## Features


---

## General Behavior


---

## Project Structure
```
holberton-simple_shell/
│
├── AUTHORS
├── README.MD
├── execute_command.c
├── main.h
├── shell.c
└── split.c
```

---

## Flowchart


---

## Prerequisites

* GCC compiler (GNU89)
* Linux environment (recommended)
* Git

---

## Installation

1. Open your terminal
2. Navigate to the desired directory
3. Clone the repository:

```bash
git clone https://github.com/v-lmb/holbertonschool-simple_shell.git
```

4. Move into the project directory:

```bash
cd holbertonschool-simple_shell
```

---

## Compilation

Compile the shell using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

---

## Usage

### Interactive mode

```bash
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($) exit
$
```

### Non-interactive mode

```bash
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c
```

---

## Documentation


---

## Technologies Used

<div align="left">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" height="40" alt="C" />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/linux/linux-original.svg" height="40" alt="Linux" />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/github/github-original.svg" height="40" alt="GitHub" />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/vscode/vscode-original.svg" height="40" alt="VS Code" />
</div>

---

## Authors

* **[Véronique Beauvais](https://github.com/Veroniquebvs)**
* **[Virginie Lombarte](https://github.com/v-lmb)**

---

## Version History

* **v1.0** — Initial release

---

## License

This project is licensed under the **GNU GPL v3.0**.
See the `LICENSE` file for more details.
