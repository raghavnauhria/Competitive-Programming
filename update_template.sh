for d in */; do
	cd $d
	pwd
	cp ../template.cpp template.cpp && echo "template update successfully"
	cd ..
done