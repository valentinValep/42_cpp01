test_dir() {
	FILES=$(ls $1 | grep "test" | grep -v ".replace")

	for file in $FILES
	do
		echo "## Testing $file"
		./replace "$1/$file" "$2" "$3"
		diff "$1/$file.replace" "$1/$file.replace.expected"
		if [ $? -eq 0 ]
		then
			echo "OK"
		else
			echo "KO"
		fi
	done
}

DIRS=$(ls -d test_files/*/)
echo $DIRS
for dir in $DIRS
do
	echo "# Testing $dir"
	test_dir $dir "$(cat $dir/s1)" "$(cat $dir/s2)"
done