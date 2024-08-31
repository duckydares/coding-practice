# Coding Practice
A repository containing various coding practice problems along with corresponding theory.

The coding practice problems are taken from [LeetCode](https://leetcode.com/) and [HackerRank](https://www.hackerrank.com/). Since my main languages of interest are C++ and Python, I provide solutions for each.

## Organization

The practice problems are separated based on where they were taken from each website. With each problem a `README.md` provides a description. For each company that practice problems are taken from a PDF (**insert link when generated**) is provided containing the runtime and memory complexity analysis of each. Note that these complexities may not be the most optimal. The first iterations of solutions are provided while optimized solutions may be provided at a later date.

## Dependencies
For ease run `install_dependencies.sh`(**insert link when generated**) to install all of the dependencies listed out below:
- clang: `sudo apt install clang`
- gcc: `sudo apt install gcc`
- g++: `sudo apt install g++`
- Python 3.12 (I like to use pyenv(**insert link to github repo**) to manage different Python versions)
- CMake: `sudo apt install cmake`
- xelatex: `sudo apt install texlive-xetex`

> `install_dependencies.sh` will download `pyenv` and install the proper version of Python with it. A virtualenv with this Python version is used to install all Python dependencies to not mess up the user's local machine. 

## Set Up
- C++ code is compiled using `CMake` while Python 3 code is set up using the setup tools.
```bash
mkdir build && cd build
cmake ..
make -j8
```

## Roadmap

- [x] Update README.md with initial description.
- [ ] Create PyEnv environment for python test environment.
- [ ] Create `CMakeLists.txt` file for compiling C++ code.


