# C - Simple Shell - Holberton School

# simple_shell

## Table of Contents
- [General Behavior](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#general-behavior)
- [Project Structure](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#project-structure)
- [Flowchart](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#flowchart)
- [Prerequisites](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#prerequisites)
- [Installation & Execution](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#installation--execution)
- [Compilation](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#compilation)
- [Usage](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#usage)
- [Technologies used](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#technologies-used)
- [Authors](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#authors)
- [Specials thanks](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#specials-thanks-to)
- [Version History](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#version-history)
- [Licence](https://github.com/v-lmb/holbertonschool-simple_shell/edit/dev/README.md#license)

---

## About


### Files

| File | Description |
| --- | --- |
| AUTHORS | List of contributors |
| README.md | This file |
| build_path.c | Building full path |
| execute_command.c | Command execution |
| find_command_in_path.c | Searching the PATH |
| get_path.c | Extrating the Path variable |
| hsh | Executable |
| main.h | Main header |
| shell.c | Main function and shell loop |
| split.c | Parsing arguments |

---

## Project Structure
```
holberton-simple_shell/
│
├── AUTHORS
├── README.MD
├── build_path.c
├── execute_command.c
├── find_command_in_path.c
├── get_path.c
├── hsh
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

## Installation & Execution

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

5. Run the program:
```bash
./hsh
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
The complete man page can be found in the file:

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

## Specials thanks to

* **Véronique BEAUVAIS a fabulous team mate**
* **Sofian a very patient and helpful SWE**

---

## Version History

* **v1.0** — Initial release

---

## License

This project is licensed under the **GNU GPL v3.0**.
See the `LICENSE` file for more details.
