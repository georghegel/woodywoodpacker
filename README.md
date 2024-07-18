![Woody](./img/woody.png)

# Woody Woodpacker

Pack any ELF x86_64 binaries with WOODY packer ([Ecole 42](https://42.fr/en/homepage/) UNIX Security project)

[[Blog Post]](https://t.me/bavariansausages)

This project includes:
  
  * `LZ77` compression algorithm
  * `AES` encryption algorithm for additional security
  * `Stub` small piece of code that will decompress and run binary when needed

Before installing and using this packer, please, read the [disclaimer](#disclaimer).

## Contents
- [Disclaimer](#disclaimer)
- [Installation and Usage](#installation-and-usage)
  - [Linux/macOS](#linux-or-macos)
  - [Docker](#docker)
- [ELF header parser](#elf-header-parser)
- [Compression](#compression)
  - [LZ77 data compression algorithm](#lz77-data-compression-algorithm)
- [Encryption](#encryption)
- [Stub](#stub)
  - [Injection](#injection)
  - [Decryption](#decryption)
  - [Execution](#execution)
<hr>

### Disclaimer
This project is an intro to bypassing AntiVirus.<br>
Anything that will use this packer and outside the law - is not my responsibility.<br>
Just don't do any harmful things.<br>
Peace!

### Installation and Usage
#### Linux or macOS

```shell
git clone https://github.com/georghegel/woodywoodpacker.git
cd woodywoodpacker
make
```

```shell
./woody <ELF_FILENAME>
```
#### Docker

### ELF header parser
[[Official Description of ELF header]](https://www.sco.com/developers/gabi/latest/ch4.eheader.html)<br>

<details>
<summary>ELF header structure image</summary>
<img src="https://upload.wikimedia.org/wikipedia/commons/e/e4/ELF_Executable_and_Linkable_Format_diagram_by_Ange_Albertini.png">
<br>
</details>

### Compression
#### LZ77 data compression algorithm
### Encryption
### Stub
#### Injection
#### Decryption
#### Execution
