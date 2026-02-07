# X64 Arithmetic: NASM + C Integration

A high-performance calculation bridge between **C** and **x86-64 Assembly (NASM)** developed in **Visual Studio 2026**.

## 🚀 Overview
This project demonstrates how to pass data between a high-level C interface and a low-level Assembly implementation. It performs basic arithmetic operations using direct CPU registers and the Windows x64 calling convention.

## 🛠️ Features
- **Sum**: Addition via `add` instruction.
- **Difference**: Subtraction via `sub` instruction.
- **Product**: Signed multiplication via `imul`.
- **Remainder**: Modulo operation using `idiv` with proper `cqo` sign extension to prevent division errors.

## 🔧 Technical Stack
- **Language**: C11 / NASM (x86-64)
- **Assembler**: [NASM](https://www.nasm.us)
- **IDE**: Visual Studio 2026
- **Architecture**: x64 (Windows Calling Convention)

## 🔨 Build Instructions
To compile this project, ensure NASM is installed on your system:
1. Open the project in **Visual Studio**.
2. Right-click on `func.asm` -> **Properties**.
3. Set **Item Type** to **Custom Build Tool**.
4. Use the following Command Line:
   `"PATH_TO_NASM\nasm.exe" -f win64 "%(FullPath)" -o "$(IntDir)%(Filename).obj"`
5. Set **Outputs** to: `$(IntDir)%(Filename).obj`
6. Build and run in **x64** mode.

## 📂 Project Structure
- `main.c`: User interface, input handling, and external function calls.
- `func.asm`: Core arithmetic logic implemented in NASM.