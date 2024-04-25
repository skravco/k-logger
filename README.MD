# Keyboard Logger (kl)

Keyboard Logger (kl) is a simple program written in C++ that logs keystrokes from a keyboard device to a text file. It utilizes the libinput library for handling input events.

## Disclaimer

This program is provided for educational purposes only. The author assumes no responsibility for any unauthorized or unlawful use of this software. Please use responsibly and ethically.

## Dependencies

- C++ compiler (supporting C++23)

**libinput library:**
```bash
sudo apt install libinput-dev
```
**libudev library:**
```bash
sudo apt install libudev-dev
```

## Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/skravco/k-logger.git
    ```

2. Navigate to the project directory:

    ```bash
    cd k-logger
    ```

3. Compile the program:

    ```bash
    make
    ```

## Usage

1. Ensure that the program has the necessary permissions to access the keyboard device (`/dev/input/eventX`, where `X` is the event number of your keyboard).
   
   **Note:** You might need root privileges or appropriate permissions to access the keyboard device.

2. Run the program:

    ```bash
    sudo ./kl
    ```

3. The program will start logging keystrokes to the `keystrokes.txt` file in the current directory.

## User Manual

- **Logging Keystrokes:** The program logs keystrokes from the keyboard device to the `keystrokes.txt` file. Each line in the file represents a sequence of keystrokes, with a maximum of 20 keystrokes per line. Once the maximum number of keystrokes is reached, the program starts a new line in the file.

- **Customization:** You can customize the maximum number of keystrokes per line and the maximum number of lines before starting a new line in the `params.hpp` file. Additionally, you can modify the key mappings in the same file to log different key combinations.

## Contribution

Contributions are welcome! If you find any issues or have suggestions for improvement, please feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

