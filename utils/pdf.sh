#!/bin/sh

# Usage: sh utils/pdf.sh

# NB: the emojis will be reported as missing characters; that's okay to ignore :)

pandoc README.md --pdf-engine=xelatex -o makefiles.pdf
