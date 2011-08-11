/* 
   imgfind - Searches for similar image files.

   Copyright (C) 2011 Joseph Woodruff

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  

*/

#include "kernel/search.h"
#include <iostream>

int main (int argc, char **argv)
{
  /* do the work */
    DP* img;
    vector<DP*> templist;
    vector<string> matches;
    
    templist = hash_imglist(cr_imglist("/mnt/shared/"), 0);
    img = hash_image("/mnt/shared/kitty.gif", 0);
    matches = find_similar(img, templist, 26);
    
    for (uint i = 0; i < matches.size(); i++)
        cout << matches[i] << std::endl;
    
    return 0;
}

