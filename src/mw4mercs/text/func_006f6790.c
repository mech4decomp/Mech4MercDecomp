/*
 * FUN_006F6790 (76 B) — Conditional lookup via sub-object.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param). If global byte
 * 0x008493D6 is zero, returns -1. Otherwise calls FUN_006F7970 with
 * the parameter and a local int. If it returns non-zero, calls
 * FUN_006F67E0 with the local int and returns the result. Otherwise
 * returns -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f7970(int, int *);
extern int __cdecl FUN_006f67e0(int);

__declspec(naked) void __fastcall FUN_006f6790(void)
{
    __asm {
        push    ecx
        _emit   0xA0
        _emit   0xD6
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    al, al
        push    esi
        mov     esi, ecx
        jnz     l_ok
        or      eax, -1
        pop     esi
        pop     ecx
        ret     4
    l_ok:
        mov     ecx, dword ptr [esp + 0xC]
        lea     eax, [esp + 4]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0x3C]
        mov     dword ptr [esp + 0xC], 0
        call    FUN_006f7970
        test    al, al
        jnz     l_found
        or      eax, -1
        pop     esi
        pop     ecx
        ret     4
    l_found:
        mov     edx, dword ptr [esp + 4]
        push    edx
        mov     ecx, esi
        call    FUN_006f67e0
        pop     esi
        pop     ecx
        ret     4
    }
}
