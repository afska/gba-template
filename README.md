# gba-template

![image](https://user-images.githubusercontent.com/1631752/79630129-20115000-8125-11ea-9975-0e029a3c9496.png)

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