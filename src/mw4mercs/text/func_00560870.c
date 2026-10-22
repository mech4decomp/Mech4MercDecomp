/*
 * FUN_00560870 (147 B) — Initializes font size globals from "graphics options".
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __cdecl FUN_0040ecc0(const char *key);
extern int __cdecl FUN_00411cb0(void);
extern int DAT_007dddac;
extern int DAT_007ddda4;
extern int DAT_007ddd9c;
extern int DAT_007ddd94;
extern int DAT_007ddd8c;

__declspec(naked) void FUN_00560870(void)
{
    
__asm {
mov     ecx, [esp + 4]
        push    esi
        push    edi
        xor     edi, edi
        push    0x0076c7f4
        mov     dword ptr [DAT_007dddac], edi
        mov     dword ptr [DAT_007ddda4], edi
        mov     dword ptr [DAT_007ddd9c], edi
        mov     dword ptr [DAT_007ddd94], edi
        mov     dword ptr [DAT_007ddd8c], edi
        call    FUN_0040ecc0
        mov     esi, eax
        cmp     esi, edi
        jz      done
        push    edi
        push    0x007dddac
        push    0x0077df38
        mov     ecx, esi
        call    FUN_00411cb0
        push    edi
        push    0x007ddda4
        push    0x0077df2c
        mov     ecx, esi
        call    FUN_00411cb0
        push    edi
        push    0x007ddd9c
        push    0x0077df20
        mov     ecx, esi
        call    FUN_00411cb0
        push    edi
        push    0x007ddd94
        push    0x0077df14
        mov     ecx, esi
        call    FUN_00411cb0
        push    edi
        push    0x007ddd8c
        push    0x0077df08
        mov     ecx, esi
        call    FUN_00411cb0
    done:
        pop     edi
        pop     esi
        ret
    }


}
