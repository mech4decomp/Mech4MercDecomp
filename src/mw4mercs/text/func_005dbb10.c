/*
 * FUN_005DBB10 (93 B) - Unit shutdown helper.
 *
 * __thiscall (ECX = this). If global 0x007DDE2C set, validate via
 * FUN_00415230; on failure assert via FUN_006FABF0. Then if byte at
 * +0x2F2 set, clear flags on the object at +0x170.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00415230(int param);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) void __fastcall FUN_005dbb10(void *this)
{
    

extern int DAT_007dde2c;
extern int DAT_007f268c;
__asm {
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        push    esi
        mov     esi, ecx
        jz      l_check2
        mov eax, dword ptr [DAT_007f268c]
        push    eax
        mov     eax, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        jnz     l_check2
        push    0x78845c
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      l_check2
        int     3
    l_check2:
        mov     al, byte ptr [esi + 0x2f2]
        test    al, al
        jz      l_done
        mov     eax, dword ptr [esi + 0x170]
        mov     byte ptr [eax + 0x2f8], 1
        mov     byte ptr [eax + 0x2f9], 0
        mov     byte ptr [esi + 0x2f2], 0
    l_done:
        pop     esi
        ret
    }


}
