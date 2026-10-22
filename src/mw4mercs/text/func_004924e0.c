/*
 * FUN_004924e0 (125 B) — __thiscall, RET 4 (1 stack param).
 * Looks up a key in a hash table, returns associated value or -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00412570(int);
extern void __fastcall FUN_004128e0(void);
extern int *__cdecl FUN_00492c20(void *, void *);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __fastcall FUN_004924e0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        lea     ecx, [esp + 0xc]
        call    FUN_004128e0
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x8]
        add     esi, 0x50
        push    edx
        mov     ecx, esi
        call    FUN_00492c20
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        jz      l_not_found
        mov     esi, dword ptr [eax + 0x14]
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_return_val
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_return_val
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_return_val:
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    l_not_found:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_return_neg1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_return_neg1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_return_neg1:
        or      eax, -1
        pop     esi
        pop     ecx
        ret     0x4
    }
}
