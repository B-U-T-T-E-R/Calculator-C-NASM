# X64 Floating-Point Calculator: NASM + C Integration
## 🇺🇸 English Version

### 🚀 Overview
A high-performance floating-point calculator demonstrating seamless integration between **C** and **x86-64 Assembly (NASM)** using **SSE2 instructions**.

### 🛠️ Features
- **Basic Operations**: Addition, subtraction, multiplication, division
- **Assembly Optimization**: All calculations in NASM with SSE2
- **Robust Input**: Supports both `.` and `,` formats, error validation
- **Division Safety**: Zero-check with `fabs(y) < 1e-9`

### 🔧 Technical Stack
- **C11**: Interface and input handling
- **NASM x86-64**: Assembly computations
- **Visual Studio**: Development environment
- **x64 Windows**: Calling convention

### 📂 Project Structure
- `main.c`: Interface, data input, assembly function calls
- `func.asm`: Floating-point operations in assembly

### 🔨 Build Instructions
1. Install NASM from the official website
2. Configure `func.asm` as Custom Build Tool in Visual Studio
3. Build command: `nasm.exe -f win64 "func.asm"`
4. Build project for **x64** platform

### 💡 Key Features
- Direct XMM0-XMM1 register manipulation
- Zero-copy data transfer between C and assembly
- Dual decimal separator format support
- Educational example of multi-language integration

---

## 🇷🇺 Русская версия

### 🚀 Описание
Высокопроизводительный калькулятор с плавающей точкой, демонстрирующий интеграцию **C** и **ассемблера x86-64** с использованием **SSE2 инструкций**.

### 🛠️ Возможности
- **Базовые операции**: Сложение, вычитание, умножение, деление
- **Ассемблерная оптимизация**: Все вычисления в NASM с SSE2
- **Надёжный ввод**: Поддержка форматов `.` и `,`, проверка ошибок
- **Защита от деления на ноль**: Проверка `fabs(y) < 1e-9`

### 🔧 Технологии
- **C11**: Интерфейс и обработка ввода
- **NASM x86-64**: Вычисления в ассемблере
- **Visual Studio**: Среда разработки
- **x64 Windows**: Соглашение о вызовах

### 📂 Структура проекта
- `main.c`: Интерфейс, ввод данных, вызов ассемблерных функций
- `func.asm`: Ассемблерные реализации операций с плавающей точкой

### 🔨 Инструкция по сборке
1. Установите NASM с официального сайта
2. В Visual Studio настройте `func.asm` как Custom Build Tool
3. Команда сборки: `nasm.exe -f win64 "func.asm"`
4. Соберите проект для платформы **x64**

### 💡 Особенности реализации
- Прямая работа с регистрами XMM0-XMM1
- Нулевое копирование данных между C и ассемблером
- Поддержка обоих форматов десятичных разделителей
- Образовательный пример интеграции языков разного уровня

*Project demonstrates low-level computation optimization on modern x86-64 hardware. / Проект демонстрирует низкоуровневую оптимизацию вычислений на современном x86-64 оборудовании.*