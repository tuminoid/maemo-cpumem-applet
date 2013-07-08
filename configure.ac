AC_INIT(Makefile.am)
AM_INIT_AUTOMAKE(cpumem-applet, 0.5-1)
AM_CONFIG_HEADER(config.h)

AC_CANONICAL_HOST

AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_RANLIB
AC_PROG_LIBTOOL

AC_HEADER_STDC

CFLAGS="$CFLAGS -Wall -Wmissing-prototypes -Wmissing-declarations" 

AC_SUBST(CFLAGS)

PKG_CHECK_MODULES([CPUMEM_APPLET], [
	gtk+-2.0 >= 2.4.0
	glib-2.0 >= 2.2.0
	hildon-1 >= 1.0.9
	osso-af-settings >= 0.8.1
	libhildondesktop-1 >= 2.1.0
])  
			    
AC_SUBST(CPUMEM_APPLET)
AC_SUBST(CPUMEM_APPLET_CFLAGS)

hildondesktoplibdir="${libdir}/hildon-desktop"
AC_SUBST(hildondesktoplibdir)

hildondesktoplibdir="${libdir}/hildon-desktop"
AC_SUBST(hildondesktoplibdir)

AC_CONFIG_FILES([
	Makefile
	src/Makefile
	data/Makefile
]) 
AC_OUTPUT
