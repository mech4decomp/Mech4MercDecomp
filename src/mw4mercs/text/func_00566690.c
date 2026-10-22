// 0x00566690: linear search through string table for case-insensitive match
// __cdecl, 1 param (const char *key)
// Returns index of match, or -1 if not found
// Array at 0x7B5238, 117 entries (0x7B540C - 0x7B5238 = 0x1D4 = 468 = 117*4)

#include <stddef.h>

extern int (__cdecl *g_strnicmp)(const char *, const char *, size_t);  // IAT at 0x76B2B0 -> _strnicmp

__declspec(naked) int __cdecl func_00566690(const char *key)
{
    

extern int DAT_0076b2b0;
__asm {
push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        mov ebp, dword ptr [DAT_0076b2b0]
        push esi
        push edi
        xor edi, edi
        mov esi, 0x7B5238
loop_start:
        mov eax, dword ptr [esi]
        push 4
        push eax
        push ebx
        call ebp
        add esp, 0xc
        test eax, eax
        je  found
        add esi, 4
        inc edi
        cmp esi, 0x7B540C
        jb  loop_start
        pop edi
        pop esi
        pop ebp
        or  eax, -1
        pop ebx
        ret
found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }


}
