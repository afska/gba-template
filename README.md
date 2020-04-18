# gba-template

## Install

- Install `devKitPro` and clone the project. Use this file structure:
	* `gba`
		* `tools`
			* `devKitPro`
		* `projects`
			* `gba-template`
- Add to `PATH`:
    * `{DEVKITARM}/bin`
	* `{DEVKITPRO}/tools/bin`
	-> (you can use `export PATH=$PATH:{NEW_PATHS}` in `~/.bash_profile`)
- Run script:
	* `./configure.sh`

## Actions

- `make clean`
- `make build`
- `make start`