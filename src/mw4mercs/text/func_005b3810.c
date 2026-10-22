/*
 * FUN_005b3810 (64 B) — __thiscall, RET 0, returns AL.
 *
 * Calls a virtual method, then inspects a state value and returns a
 * boolean based on a series of comparisons.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b15b0(void);

__declspec(naked) void __stdcall FUN_005b3810(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov     ecx, dword ptr [esi + 0x35c]
        mov     edx, dword ptr [ecx + 0xe0]
        mov     eax, dword ptr [edx + 0x14]
        cmp     eax, 0x1
        pop     esi
        jnz     L3833
        mov     al, al
        ret
L3833:
        cmp     eax, 0x2
        jnz     L383B
        mov     al, 0x1
        ret
L383B:
        cmp     eax, 0x13
        jnz     L3843
        mov     al, 0x1
        ret
L3843:
        cmp     eax, 0x9
        jnz     L384D
        call    FUN_005b15b0
L384D:
        xor     al, al
        ret
    }
}
