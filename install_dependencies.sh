#!/bin/env bash

# This script installs the dependencies necessary for compiling and running the practice
# problems contained in this repository.

# Debian dependencies
sudo apt install -y clang \
    cmake \
    build-essentials \
    texlive-xetex \
    libreadline-dev \
    libbz2-dev \
    libncurses-dev

# Install PyEnv
if ! command -v pyenv &> /dev/null; then
    echo "Installing pyenv from Github."
    curl https://pyenv.run | bash
    # Setting up pyenv
    echo 'export PYENV_ROOT="$HOME/.pyenv"' >> ~/.bashrc
    echo 'command -v pyenv > /dev/null || export PATH="$PYENV_ROOT/bin:$PATH"' >> ~/.bashrc
    echo 'eval "$(pyenv init -)"' >> ~/.bashrc
    echo 'eval "$(pyenv virtualenv-init -)"' >> ~/.bashrc
fi

# Restart shell for effects to take place
exec $SHELL
# Installing Python 3.12.0
pyenv install 3.12.0
# Create virtualenv based on 3.12.0
pyenv virtualenv 3.12.0 coding-practice
# Enter virtualenv
pyenv activate coding-practice
# Install python dependencies
pip3 install -r requirements.txt
