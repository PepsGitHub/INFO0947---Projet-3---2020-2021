include Makefile.compilation

all:
	cd Code; make all
	cd Rapport; make all

clean:
	cd Code; make clean
	cd Rapport; make clean

archive:
	$(TAR) cvf $(TARNAME) Makefile Makefile.compilation Code/ Rapport/
