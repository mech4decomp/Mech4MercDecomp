/*
 * FUN_0061F560 (98 B) — __cdecl, three stack params, RET 0xC.
 *
 * Validates param_1, then depending on param_2 either acquires a
 * sub-object (via FUN_0061F410) and marks it active, or releases it
 * (via FUN_0061F490). Returns a status code.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061f410(void);
extern void __cdecl FUN_0061f490(void);

__declspec(naked) int __cdecl FUN_0061f560(int param1, char param2, char param3)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    edx, edx
        jnz     l_start
        mov     eax, 1
        ret     0xc
    l_start:
        cmp     byte ptr [esp + 0x8], 0
        mov     eax, dword ptr [edx + 0x14]
        jz      l_branch2
        test    eax, eax
        jnz     l_common
        push    edx
        call    FUN_0061f410
        test    eax, eax
        jnz     l_common
        mov     eax, 2
        ret     0xc
    l_common:
        mov     cl, byte ptr [esp + 0xc]
        mov     byte ptr [eax + 0x4], 1
        mov     byte ptr [eax + 0x5], cl
        xor     eax, eax
        ret     0xc
    l_branch2:
        test    eax, eax
        jz      l_ret0
        cmp     byte ptr [eax + 0x6], 0
        jz      l_call490
        mov     byte ptr [eax + 0x4], 0
        mov     byte ptr [eax + 0x5], 0
        xor     eax, eax
        ret     0xc
    l_call490:
        push    edx
        call    FUN_0061f490
    l_ret0:
        xor     eax, eax
        ret     0xc
    }
}
