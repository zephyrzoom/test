read num <<EOF
abc
EOF
echo $num
a=$(time)
echo "------"
echo $a
if [[ $(echo $a | grep "user") != "" ]]
then
    echo "include"
else
    echo "not include"
fi
