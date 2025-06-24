# SSH Key Manager

A simple C++ command-line tool to manage your SSH keys and automate adding them to the `ssh-agent` via your shell configuration files (`.zshrc`, `.bashrc`, etc).

## Features

- List available SSH keys in your `~/.ssh` directory
- Add or remove SSH keys from the `ssh-agent`
- Automatically update your shell configuration file to add or remove `ssh-add` commands

## Usage

1. **Build the project:**
   ```sh
   mkdir build
   cd build
   cmake ..
   make
   ```

2. **Run the tool:**
   ```sh
   ./ssh_key_manager [options]
   ```

   Example options (to be implemented):
   - `--list` : List available SSH keys
   - `--add <key>` : Add a key to the ssh-agent and update shell config
   - `--remove <key>` : Remove a key from the ssh-agent and update shell config

## How It Works

- The tool scans your `~/.ssh` directory for key files.
- It can add or remove keys from the `ssh-agent` using system commands.
- It updates your `.zshrc` or `.bashrc` file to automate adding keys on shell startup.

## Requirements

- C++17 or newer
- CMake 3.10+
- A POSIX-compatible shell (e.g., bash, zsh)
- OpenSSH installed

## Disclaimer

Use this tool at your own risk. Always back up your SSH keys and configuration files before making changes.

## License

MIT License