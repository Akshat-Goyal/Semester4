for x in `ls *.sk ` 
do
echo $x;
bash ../sk/sketch2html.sh $x > $1/$x.html
name=`grep "//@Description" $x | sed 's/\/\/@Description//g'`; 
echo "| [[http://people.csail.mit.edu/asolar/${1}/${x}.html|${x}]]  |  $name | Fast |"
done

for x in `ls *.skh ` 
do
bash ../sk/sketch2html.sh $x > $1/$x.html
done