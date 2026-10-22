/*
 * FUN_005DBB70 (93 B) - Unit startup helper.
 *
 * __thiscall (ECX = this). If global 0x007DDE2C set, validate via
 * FUN_00415230; on failure assert via FUN_006FABF0. Then if byte at
 * +0x2F2 != 1, set flags on the object at +0x170.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00415230(int param);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) void __fastcall FUN_005dbb70(void *this)
{
    

extern int DAT_007dde2c;
extern int DAT_007f25c0;
__asm {
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        push    esi
        mov     esi, ecx
        jz      l_check2
        mov eax, dword ptr [DAT_007f25c0]
        push    eax
        mov     eax, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        jnz     l_check2
        push    0x788490
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      l_check2
        int     3
    l_check2:
        mov     al, byte ptr [esi + 0x2f2]
        mov     cl, 1
        cmp     al, cl
        jz      l_done
        mov     eax, dword ptr [esi + 0x170]
        mov     byte ptr [eax + 0x2f8], 0
        mov     byte ptr [eax + 0x2f9], cl
        mov     byte ptr [esi + 0x2f2], cl
    l_done:
        pop     esi
        ret
    }


}
