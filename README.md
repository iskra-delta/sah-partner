![status.badge] [![language.badge]][language.url] [![standard.badge]][standard.url] [![license.badge]][license.url]

# sah-partner

This repository contains the chess software for the Iskra Delta Partner.

![Intro](docs/img/intro.jpg)

## Compiling

*To compile, you will need a Linux machine with the latest version of the SDCC suite.*

This repository uses submodules. When you clone it, don't forget to add the `--recursive` switch.

Use `make` to compile the chess. 

Afterwards, you can find the disk image in the `bin/` directory and the `*.com` files in the `build/` directory.

# Screenshots

![Chess](docs/img/chess1.jpg)

![Chess](docs/img/chess2.jpg)

# Credits

Many thanks to **RatinsasPA** for developing [this chess engine](https://github.com/RatinsasPA/chess-engine) which is used by this chess program.

[language.url]:   https://en.wikipedia.org/wiki/ANSI_C
[language.badge]: https://img.shields.io/badge/language-C-blue.svg

[standard.url]:   https://en.wikipedia.org/wiki/C89/
[standard.badge]: https://img.shields.io/badge/standard-C89-blue.svg

[license.url]:    https://github.com/tstih/idp-quill/blob/main/LICENSE
[license.badge]:  https://img.shields.io/badge/license-MIT-blue.svg

[status.badge]:  https://img.shields.io/badge/status-alpha-red.svg