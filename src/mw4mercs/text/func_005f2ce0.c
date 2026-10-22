/*
 * FUN_005f2ce0 (84 B) — __thiscall, RET 8 (2 stack params).
 *
 * Compares param_1 against this->[0x14]; if equal returns it.
 * Otherwise, if this->[0x14]==0xd and this->[0x18]->[0x2fc] is non-NULL
 * and its byte at +0x30b is 0, returns 0xd. Else calls FUN_004fbd40
 * (thiscall, ECX=ESI, args param_1,param_2); if result==0xc, indirect
 * call through this->[0x18]->[0x6c]. Returns this->[0x14].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_004fbd40(void);

__declspec(naked) int FUN_005f2ce0(void *this, int param_1, int param_2)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        cmp     edx, eax
        jz      l_ret_eax
        cmp     eax, 0xd
        mov     ecx, dword ptr [esi + 0x18]
        jnz     l_call
        mov     eax, dword ptr [ecx + 0x2fc]
        test    eax, eax
        jz      l_call
        mov     cl, byte ptr [eax + 0x30b]
        test    cl, cl
        jnz     l_call
        mov     eax, 0xd
        pop     esi
        ret     8
    l_call:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    edx
        mov     ecx, esi
        call    FUN_004fbd40
        cmp     eax, 0xc
        jnz     l_after
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x6c]
    l_after:
        mov     eax, dword ptr [esi + 0x14]
    l_ret_eax:
        pop     esi
        ret     8
    }
}
