/*
 * FUN_00406700 (91 B true extent; 104 B block incl. pad + adjacent fn) —
 * __stdcall, 3 args (ret 0xc). Acquires a resource and builds a message
 * via several string/object methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_006fe680(void);
extern void __cdecl FUN_0040dca0(void);
extern void *__cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_006fe110(void);
extern char g_77826c[];
extern char g_778278[];
extern char g_778314[];

__declspec(naked) void FUN_00406700(void)
{
    __asm {
        sub     esp, 0x50
        push    esi
        call    FUN_006fe680
        mov     esi, eax
        cmp     esi, -1
        je      l_1
        push    1
        push    0
        push    offset g_77826c
        lea     ecx, [esp + 0x10]
        call    FUN_0040dca0
        push    offset g_778278
        lea     ecx, [esp + 8]
        call    FUN_0040eda0
        push    esi
        push    offset g_778314
        mov     ecx, eax
        call    FUN_00411d10
        lea     ecx, [esp + 4]
        call    FUN_0040e4a0
        lea     ecx, [esp + 4]
        call    FUN_0040de20
    l_1:
        call    FUN_006fe110
        pop     esi
        add     esp, 0x50
        ret     0xc
    }
}
