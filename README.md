# complex-linux-project-homework
# How to build

## Configuration
`cd simple-linux-project-homework`

## Build and link Calculator and Text Formatter:
`sudo make all`

## Build calculator (but do not link)
`make build-calc`


## Link previously built calculator to static library  
`make link-calc`


## Build Formatter (but do not link)
`make build-formatter`


## Link previously built formatter to dynamic library  
`sudo make link-formatter`


# Clean working directory and remove shared library from /usr/lib
`sudo make clean`
