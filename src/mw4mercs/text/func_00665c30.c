/*
 * FUN_00665C30 (168 B) — Search two object lists for a match.
 *
 * __cdecl, RET (1 stack param). Iterates a list at param_1+0x384
 * (via FUN_00416cc0 iterator) checking FUN_004e7760()==1, then a list
 * at param_1+0x370 checking FUN_004e69a0()==1. Returns 1 if either
 * matches, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl  FUN_00416bc0(void);
extern void __cdecl  FUN_00416cc0(void);
extern void __cdecl  FUN_00416c60(void);
extern void __cdecl  FUN_004e7760(void);
extern void __cdecl  FUN_004e69a0(void);

__declspec(naked) void __cdecl FUN_00665c30(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        lea     eax, [esi + 0x384]
        push    eax
        lea     ecx, [esp + 8]
        call    FUN_00416bc0
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 4], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        jz      l_second
    l_loop1:
        mov     ecx, eax
        call    FUN_004e7760
        cmp     eax, 1
        lea     ecx, [esp + 4]
        jz      l_found
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_loop1
    l_second:
        lea     ecx, [esp + 4]
        call    FUN_00416c60
        add     esi, 0x370
        push    esi
        lea     ecx, [esp + 8]
        call    FUN_00416bc0
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 4], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        jz      l_notfound
    l_loop2:
        mov     ecx, eax
        call    FUN_004e69a0
        cmp     al, 1
        lea     ecx, [esp + 4]
        jz      l_found
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_loop2
    l_notfound:
        lea     ecx, [esp + 4]
        call    FUN_00416c60
        xor     al, al
        pop     esi
        add     esp, 0x14
        ret
    l_found:
        call    FUN_00416c60
        mov     al, 1
        pop     esi
        add     esp, 0x14
        ret
    }
}
