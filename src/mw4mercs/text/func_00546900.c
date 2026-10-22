/*
 * FUN_00546900 (166 B) — __thiscall method with 4 stack params.
 * Initializes fields at offsets 0x302c-0x3060.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00546900(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0x3030], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x3038], edx
        mov edx, dword ptr [DAT_007dab44]
        mov     dword ptr [ecx + 0x303c], eax
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        mov     edx, dword ptr [esp + 0x10]
        test    edx, edx
        mov     dword ptr [ecx + 0x302c], 1
        mov     dword ptr [ecx + 0x3034], 0
        mov     dword ptr [ecx + 0x3040], 0
        mov     dword ptr [ecx + 0x3044], 0
        mov     dword ptr [eax + 0x44], 1
        jle     l_skip_dec
        dec     edx
        mov     dword ptr [eax + 0x38], 1
        mov     dword ptr [eax + 0x3c], edx
l_skip_dec:
        or      eax, -1
        mov     dword ptr [ecx + 0x3048], eax
        mov     dword ptr [ecx + 0x304c], eax
        mov     dword ptr [ecx + 0x3050], eax
        lea     eax, [ecx + 0x3054]
        or      ecx, -1
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        ret     0x10
    }


}
