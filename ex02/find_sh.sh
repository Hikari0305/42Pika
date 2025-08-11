#!/bin/bash
find . -maxdepth 1 -type f -name "*.sh" | sed 's/\.sh$//' | sed 's|^\./||'
