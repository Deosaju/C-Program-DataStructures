
//command basename takes filename and extention and return name without extention
for file in *.htm;do
    name=$(basename "&file" .htm)
     echo mv  "$file" "$name.html"
done
//use eccho before it so we can test the code