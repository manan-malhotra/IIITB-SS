#! bin/bash
file_name="employee_db"
display_menu(){
echo ""
echo "Choose an option"
echo "1. Create new user"
echo "2. Delete user"
echo "3. Search user"
echo "4. List all users"
echo "5. Sort users"
echo "6. Exit"
echo -n "Enter your choice:"
}

add_user(){
echo ""
echo -n "Enter employee's name:"
read empName
echo -n "Enter employee's ID:"
read empID
echo -n "Enter employee's number:"
read empNumber

echo "$empName|$empID|$empNumber" >> employee_db
}

search_user(){
echo ""
echo -n  "Enter Employee Number: "
read empNum
grep "^.*|$empNum|" "$file_name" || echo "Employee Not Found"
echo ""
}
delete_user(){
echo ""
echo -n  "Enter Employee Number: "
read empNum
grep -v  "^.*|$empNum|" "$file_name" > temp
mv temp employee_db
echo ""
}

sortUser(){
sort -n -t '|' -k2 -o employee_db employee_db
echo "Sorted List"
}
display_all(){
echo ""
echo "Displaying All Users"
cat employee_db
}

while true
do
display_menu
read choice
case $choice in
1) add_user ;;
2) delete_user ;;
3) search_user ;;
4) display_all ;;
5) sortUser ;;
6) echo "Bye!"; break ;;
*) echo "Invalid" ;;
esac
done
