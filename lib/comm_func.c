#include "global.h"
#include <openssl/md5.h>
#include <sys/types.h>
#include <pwd.h>
#include <stdarg.h>


{
	
	
	
	



{
	



{
	
	
	
	
	
		
	
	
		
		
#ifdef  SA_INTERRUPT
		    act.sa_flags |= SA_INTERRUPT;	//SunOS 4.x
#endif /* 
		}
	
	else
		
		
#ifdef  SA_RESTART
		    act.sa_flags |= SA_RESTART;	//SVR4,44BSD
#endif /* 
		}
	
		
	



{
	
	
	
		
	
		
	
	
		
	
		
	
		
	
		
	
		
	
		
	
	
	
		
	



{
	
	
		
	
		
		
			
		
			
		
			
		
			
		
	
	
	



/*
int trust_addr_array_init(T_array *ary, char *addrs, char *separator)
{
    int sep_num = 0, i=0;
    char *pstr = addrs;
    char caddr[MAX_ADDR] = {0};

    M_cpvril(ary);
    M_cpsril(addrs);
    M_cpsril(separator);

    sep_num = str_part_num(addrs, separator) + 1;

    M_cvril((ary->data = M_alloc(sizeof(int64_t) * sep_num)), "M_alloc error.");

    while((i<sep_num) && (str_separate(&pstr, caddr, separator) == MRT_SUC))
    {
        ((int64_t *)ary->data)[i++] = inet_addr(caddr);

        p_zero(caddr);
    }

    ary->len = i;
    ary->size = sep_num;

    quick_sort(ary->data, 0, ary->len - 1);

    */ 
    /*
       for(i=0; i< ary->size; i++)
       {
       printf("%u\n", ((int64_t *)ary->data)[i]);
       }
       
       printf("size:%d,len:%d\n", ary->size, ary->len);
     */ 
    
/*
    return MRT_SUC;
}

static int addr_compare(const void *addr1, const void *addr2)
{
*/ 
    /*
       printf("%u, %u\n", *(int64_t *)addr1 , *(int64_t *)addr2);
     */ 
    /*
       return *(int64_t *)addr1 - *(int64_t *)addr2;
       }
     */ 
    
/*
int trust_addr_check(T_array *ary, char *addr)
{
    int64_t *var = NULL;
    int64_t key = inet_addr(addr);


    var = bsearch(&key, ary->data, ary->len, sizeof(int64_t), addr_compare);

    if(var && *var == key)
    {
        return MRT_SUC;
    }

    return MRT_ERR;
}
*/ 

{
	
	


/* linux does not know anymore about itoa and windows
 * does not support 64bit ints. so take that! :)
 * keep in mind that con_unit sould be <= 10, otherwise
 * you get strange output... (me was too lazy to fix it) */ 
char *int64toa(off_t num, char *buf, int con_unit) 
{
	
	
		
		
		
		
	
		
		
		
		
	
	
		
		
		
		



{
	
	
	
	    /* TODO USS have we got an endian problem here for the ip-address */ 
	    *(int *)b = ip;
	
	
	



/* adopted from wget */ 
int file_exists(const char *filename) 
{
	



{
	
	
		
		
		    /* If HOME is not defined, try getting it from the password file.
		     * adopted from wget */ 
		struct passwd *pwd = getpwuid(getuid());
		
			
		
		
	



{
	
	
	
	
		
		
		
			
		
		    /* fgets() guarantees to read the whole line, or to use up the
		       space we've given it.  We can double the buffer
		       unconditionally.  */ 
		    bufsize <<= 1;
		
		
	
		
		
		
		
	
		
		    /* Relieve the memory from our exponential greediness.  We say
		       `length + 1' because the terminating \0 is not included in
		       LENGTH.  We don't need to zero-terminate the string ourselves,
		       though, because fgets() does that.  */ 
		    line = realloc(line, length + 1);
	



{
	
	
	



{
	
		
	
		
	
		
	
	



/* transform things like user%40host.com to user@host.com */ 
/* overwrites str and returns str. */ 
char *unescape(char *str) 
{
	
	
	
		
			
			
		
		
	
	
	



/* Engine for legible;         from wget
 * add thousand separators to numbers printed in strings.
 */ 
static char *legible_1(const char *repr) 
{
	
	
	
	
	
	    /* Reset the pointers.  */ 
	    outptr = outbuf;
	
	
	    /* Ignore the sign for the purpose of adding thousand
	       separators.  */ 
	    if (*inptr == '-')
		
		
		
+inptr;
		
	
	    /* How many digits before the first separator?  */ 
	    mod = strlen(inptr) % 3;
	
	    /* Insert them.  */ 
	    for (i = 0; i < mod; i++)
		
	
	    /* Now insert the rest of them, putting separator before every
	       third digit.  */ 
	    for (i1 = i, i = 0; inptr[i1]; i++, i1++)
		
		
			
		
		
	
	    /* Zero-terminate the string.  */ 
	    *outptr = '\0';
	



/* Legible -- return a static pointer to the legibly printed long.  */ 
char *legible(off_t l) 
{
	
	
	    /* Print the number into the buffer.  */ 
	    int64toa(l, inbuf, 10);
	



/* Count the digits in a (signed long) integer.  */ 
int numdigit(long number) 
{
	
	
		
		
		
+cnt;
		
	
		
+cnt;
	



/* gets the filename */ 
char *basename(char *p) 
{
	
	
		
	



/* took me ages to write this cute function (it's probably the one i like most in wput):
 * transforms things like "../..gaga/welt/.././.fool/../../new" to "../new"
 * (usually i don't expect such input, but who knows. works quite well now) */ 
void clear_path(char *path) 
{
	
	
	
	
		
		
		     ((src[2] == '.' && (src[3] == '/' || src[3] == 0)) || src[2] == '/' || src[2] == 0) && 
			
			
				
				
					
				
				else
					
					
						
					
						dst++;
					
					
			
				
		
			
			
				
			
			
		
	



/* makes from some/path and some/other/path
 * ../other/path
 * requires src and dst to begin and end with a slash */ 
char *get_relative_path(char *src, char *dst) 
{
	
	
	
	
	
	    /* find the point where they differ and put the mark after the last
	     * common slash */ 
	    while (*src != 0 && *dst != 0 && *src == *dst)
		
		
			
			
		
		
		dst++;
		
	
	    /* special case where dst is a complete subpart of src */ 
	    if (*src == '/' && *dst == 0)
		
		
		
		
	
	    /* if all of src matches dst, we return the rest of dst */ 
	    if (*src == 0 && *dst == '/')
		
	
	    /* now count the remaining slashes and add a ../ to the rel path for each of them */ 
	    tmp = mark_src;
	
		
			
	
	
	
		
	
	
	    /* cut the trailing slash off */ 
	    if (tmp[strlen(tmp) - 1] == '/')
		tmp[strlen(tmp) - 1] = 0;
	



#ifdef COMMON_TEST

{
	
	    { "127.0.0.5,127.0.0.4,127.0.0.3,127.0.0.2,127.0.0.1,127.0.0.10,127.0.0.6,127.0.0.7,127.0.0.8,127.0.0.9" };
	
	
	
	
		
		
		
		
	
	



#endif /* 
    