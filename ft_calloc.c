/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:47:11 by tliangso          #+#    #+#             */
/*   Updated: 2022/09/13 21:16:06 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
// The malloc() function allocates size bytes and returns a pointer to the allo‐
// cated memory.  The memory is not initialized.  If size is  0,  then  malloc()
// returns either NULL, or a unique pointer value that can later be successfully
// passed to free().
// The free() function frees the memory space pointed to by ptr, which must have
// been returned by a previous call to malloc(), calloc(), or realloc().  Other‐
// wise, or if free(ptr) has already been called before, undefined behavior  oc‐
// curs.  If ptr is NULL, no operation is perfor
// The calloc() function allocates memory for an array of nmemb elements of size
// bytes each and returns a pointer to the allocated memory.  The memory is  set
// to  zero.   If  nmemb  or  size is 0, then calloc() returns either NULL, or a
// unique pointer value that can later be successfully passed to free().  If the
// multiplication  of nmemb and size would result in integer overflow, then cal‐
// loc() returns an error.  By contrast, an integer overflow would  not  be  de‐
// tected in the following call to malloc(), with the result that an incorrectly
// sized block of memory would be alloca
//     malloc(nmemb * si
// The realloc() function changes the size of the memory block pointed to by ptr
// to size bytes.  The contents will be unchanged in the range from the start of
// the region up to the minimum of the old and new sizes.  If the  new  size  is
// larger  than  the old size, the added memory will not be initialized.  If ptr
// is NULL, then the call is equivalent to malloc(size), for all values of size;
// if size is equal to zero, and ptr is not NULL, then the call is equivalent to
// free(ptr).  Unless ptr is NULL, it must have been returned by an earlier call
// to  malloc(),  calloc(),  or  realloc().  If the area pointed to was moved, a
// free(ptr) is d
// The reallocarray() function changes the size of the memory block  pointed  to
// by  ptr  to  be large enough for an array of nmemb elements, each of which is
// size bytes.  It is equivalent to the
//         realloc(ptr, nmemb * si
// However, unlike that realloc() call, reallocarray() fails safely in the  case
// where the multiplication would overflow.  If such an overflow occurs, reallo‐
// carray() returns NULL, sets errno to ENOMEM, and leaves the original block of
// memory unchanged.
// VALUE
// The malloc() and calloc() functions return a pointer to the allocated memory,
// which is suitably aligned for any built-in type.  On error,  these  functions
// return NULL.  NULL may also be returned by a successful call to malloc() with
// a size of zero, or by a successful call to calloc() with nmemb or size  equal
// to z
// The free() function returns no va
// The realloc() function returns a pointer to the newly allocated memory, which
// is suitably aligned for any built-in type, or NULL  if  the  request  failed.
// The  returned  pointer may be the same as ptr if the allocation was not moved
// (e.g., there was room to expand the allocation in-place), or  different  from
// ptr  if  the  allocation was moved to a new address.  If size was equal to 0,
// either NULL or a pointer suitable to be passed to free() is returned.  If re‐
// alloc()  fails,  the  original  block  is  left untouched; it is not freed or
// mo
// On success, the reallocarray() function returns a pointer to the newly  allo‐
// cated  memory.   On failure, it returns NULL and the original block of memory
// is left untouched.

#include	"libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	unsigned char	*ptr;

	if (nmeb >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	ptr = (void *)malloc(nmeb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmeb * size);
	return (ptr);
}
