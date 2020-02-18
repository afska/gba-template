# gba-template

## Install

- Install `devKitPro` and clone the project. Use this file structure:
	* `gba`
		* `tools`
			* `devKitPro`
		* `projects`
			* `gba-template`
- Configure environment variables:
	* `DEVKITARM`
	* `DEVKITPRO`
	* `PATH` (add `{DEVKITARM}/bin` and `{DEVKITPRO}/tools/bin`)
- Update `Makefile`'s `BASE_DIR` var with the absolute path ¯\_(ツ)_/¯

## Build

```
make
start gba-template.gba
```