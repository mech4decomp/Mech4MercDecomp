/*
 * FUN_00706b10 (60 B) — __stdcall, RET 8 (two stack params).
 *
 * Calls FUN_006f89f0(); if NULL return 0. Otherwise calls
 * FUN_006f5ed0(), dispatches a virtual method (vtable slot +8) with
 * (param_2, "ServerInfoStatus", 0x771d60), calls FUN_006f5ee0(),
 * returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_006f89f0(void);
extern void FUN_006f5ed0(void);
extern void FUN_006f5ee0(void);

__declspec(naked) int __stdcall FUN_00706b10(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        call    FUN_006f89f0
        mov     esi, eax
        test    esi, esi
        jnz     short loc_706b26
        xor     al, al
        pop     esi
        pop     ebp
        ret     8
loc_706b26:
        call    FUN_006f5ed0
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esi]
        push    0x771d60
        push    0x79fae8
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 8]
        call    FUN_006f5ee0
        mov     al, 1
        pop     esi
        pop     ebp
        ret     8
    }
}
