find . -type f -name "*.sh" | xargs basename | rev | cut -c 4- | rev
