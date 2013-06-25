/*
 * =====================================================================================
 *
 *       Filename:  hello_world.c
 *
 *    Description:  GTK+ Hello world
 *
 *        Version:  1.0
 *        Created:  Tuesday 25 June 2013 12:51:09  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ganesh H (), ganeshredcobra@gmail.com
 *        Company:  space-kerala.org
 *
 * =====================================================================================
 */

#include <gtk/gtk.h>

int main(int argc,char *argv[])
{
	GtkWidget *window;
	gtk_init (&argc,&argv);
	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),"Hello World");
	gtk_widget_show(window);
	gtk_main();
	return 0;

}
