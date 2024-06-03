# Blockchain Implementation

This project is a simple implementation of a blockchain in C++. It demonstrates the basic concepts of a blockchain, including blocks, transactions, and the cryptographic hashing mechanism that ensures the integrity and immutability of the blockchain.

## Table of Contents

  - [Introduction](#introduction)
  - [Features](#features)
  - [Installation](#installation)
    - [Prerequisites](#prerequisites)
    - [Windows](#windows)
    - [macOS](#macos)
    - [Linux](#linux)
  - [Usage](#usage)
  - [Contributing](#contributing)
  - [License](#license)

## Introduction

A blockchain is a decentralized and immutable digital ledger that records transactions across multiple computers. It ensures transparency, security, and trust in financial transactions by linking blocks of data together in a sequential and cryptographically secure manner.

## Features

- Create a new blockchain
- Add blocks with transactions to the blockchain
- Print the entire blockchain
- Validate the integrity of the blockchain

## Installation

### Prerequisites

- C++ compiler (e.g., GCC, Clang, or MSVC)

### Windows

1. Download and install MinGW from the official website: [MinGW](https://sourceforge.net/projects/mingw/).
2. After installation, add the MinGW `bin` directory to your system's `PATH` environment variable.

### macOS

macOS comes with a pre-installed GCC compiler. However, you can also install the latest version of GCC or Clang from Homebrew:

1. Install Homebrew by following the instructions on the [official website](https://brew.sh/).
2. Once Homebrew is installed, run the following command to install GCC:

   ```bash
   brew install gcc
   ```

   Or, install Clang with:

   ```bash
   brew install llvm
   ```

### Linux

Most Linux distributions come with GCC pre-installed. If not, you can install it using your distribution's package manager. [read more](https://data-flair.training/blogs/install-cpp/).

- On Debian-based distributions (e.g., Ubuntu):

  ```bash
  sudo apt-get install build-essential
  ```

## Usage

1. Clone the repository:

   ```bash

   git clone https://github.com/ajaykumargdr/basic-blockchain.git

   ```

2. Navigate to the blockchain folder:

   ```bash

   cd basic-blockchain/blockchain

   ```

3. Compile the source code using the appropriate compiler command for your operating system:

   - On Windows (MinGW):

     ```bash
     g++ -std=c++11 -o main main.cpp block.cpp blockchain.cpp transaction.cpp
     ```

   - On macOS or Linux (GCC):

     ```bash
     g++ -std=c++11 -o main main.cpp block.cpp blockchain.cpp transaction.cpp
     ```

   - On macOS or Linux (Clang):

     ```bash
     clang++ -std=c++11 -o main main.cpp block.cpp blockchain.cpp transaction.cpp
     ```

4. Run the compiled executable:

   ```bash
   ./main
   ```

   This will create a new blockchain, add some sample blocks with transactions, print the entire blockchain, and validate its integrity.

## Contributing

Contributions to this project are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).