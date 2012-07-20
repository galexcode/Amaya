/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 *
 *   Created: Fri Oct 30 15:57:04 1992
 */
#ifndef _proto_h_
#define _proto_h_
#if __STDC__
#define PL_(x) x
#else
#define PL_(x) ( )
#endif /* __STDC__ */

/* main.c:
 *
 * The purpose of this program is to extract the function descriptions
 * (prototypes) from C source code.  It also provides for the creation
 * of documentation based on those prototypes.
 *
 * The specific reason for the creation of this program was to
 * provide a method for automatically creating header files to
 * describe all of the functions to be used within a multi-file
 * program.
 *
 * This file makes use of code in the companion files parse.c and io.c.
 *
 * Copyright (c) 1990, 1991, 1992 by Adam Bryant
 *
 * See Copyright notice in the file parse.c or in the manual page.
 *
 */

/* quick function to copy a "string" */
extern int copy_str PL_(( char *o_str, char *in_str ));

/* return FALSE if character is not a normal part of a filename */
extern int fname_char PL_(( int ch ));

/* retrieve the value of a global option */
extern int get_option PL_(( Optype which ));

/* control program flow and command line options */
extern int main PL_(( int argc, char **argv ));

/* output filter from the parsing routines */
extern void out_char PL_(( int type, int outch ));

/* transmit the currently stored comment to the output file */
extern void send_first_comment PL_(( char *begin_str ));

/* set the value of a global option */
extern void set_option PL_(( Optype which, int how, int value ));

/* show all of the settings */
extern void show_settings PL_(( void ));

/* show the usage for the program */
extern void show_usage PL_(( void ));

/* show the version of the program */
extern void show_version PL_(( void ));

/* io.c:
 *
 * cextract input/output routines.
 *
 * Copyright (c) 1992 by Adam Bryant
 *
 * See the Copyright notice in the file parse.c or in the manual page.
 *
 */

/* close up the "pipe" */
extern int close_input PL_(( FILE *stream ));

/* close up properly; sending out final output */
extern void cxt_close PL_(( void ));

/* read in all configuration files */
extern void do_config PL_(( void ));

/* send a system error message */
extern void err_msg PL_(( char *estr ));

/* routine to check return value of fputs */
extern void fput_string PL_(( char *outstr, FILE *filep ));

/* quickie function to distinquish proper switches */
extern int is_switch PL_(( int ch ));

/* return pointer to string containing the date */
extern char * mach_time PL_(( void ));

/* does the string match a minimum number of characters */
extern int minmatch_str PL_(( char *str_in, char *str_base, int num ));

/* function to open a "pipe" to the input */
extern FILE * open_input PL_(( char *pname, char *modestr ));

/* output given function prototype */
extern void out_proto PL_(( int omode, P_PROTO f_ptr, int mode, int do_comments ));

/* call the external routine out_char() and send out all characters */
extern void out_str PL_(( int omode, char *str ));

/* determine the configuration command, exit if invalid */
extern void parse_cmd PL_(( char *cmd_str, int set_val, int cmd_line ));

/* function to parse the configuration file */
extern void parse_config PL_(( char *conf_fname ));

/* output results of entire file search */
extern void send_file PL_(( void ));

/* send a message that their was a syntax error */
extern void syntax_err PL_(( char *estr ));

/* search for expanded value of the varargs setup */
extern int vargs_find PL_(( void ));

/* parse.c:
 *
 * main parsing routines for the cextract/cextdoc programs.
 * Also includes a number of generic routines applicable to both.
 *
 * These routines provide the methods used to extract comments,
 * prototypes and function names from C source files.
 *
 * Copyright (c) 1990, 1991, 1992 by Adam Bryant
 *
 * The only restrictions on the use of these routines is that they not
 * be used for monetary gain, and that this copyright notice be left
 * intact.
 *
 * Note:  These programs may be freely used to extract code and/or
 *        documentation at proprietary/corporate sites, as long as the
 *        actual source code is not used within any proprietary code.
 *
 *        The generated output (header) files are distributable in any
 *        manner desired as they are based on the scanned source code,
 *        not my program.
 */

/* add a new macro to the macro list */
extern void add_macro PL_(( int select, char *str ));

/* add a new substitution macro to the substitution list */
extern void add_subst PL_(( int type, int select, char *f_str, char *t_str ));

/* initialize the page for troff output, if needed */
extern void init_roff PL_(( int omode ));

/* go through the file extracting functions */
extern void parse_file PL_(( void ));

/* remove the top item on the stack */
extern void pop_proto PL_(( void ));

/* check preprocessor statement for line numbering changes */
extern int preprocessor_check PL_(( void ));

/* if the matching definition is in the list, remove it */
extern int removed_macro PL_(( int select, char *str ));

/* sort the list of functions and their prototypes */
extern void sort_proto PL_(( void ));

/* compare two strings considering cases the same */
extern int str_test PL_(( char *s1, char *s2 ));

/* remove any preceding and trailing spaces */
extern void trim_str PL_(( char *str ));

#undef PL_
#endif /* _proto_h_ */