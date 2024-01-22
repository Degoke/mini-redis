while getopts s:d: flag
do
  case "${flag}" in
    s) SRC=${OPTARG};;
    d) DEST=${OPTARG};;
  esac
done

g++ -Wall -Wextra -O2 -g $SRC -o $DEST
