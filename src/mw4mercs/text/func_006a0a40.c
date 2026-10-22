/*
 * FUN_006a0a40 (79 B) — __thiscall destructor.
 *
 * Sets vtable 0x799c9c, inspects flags at this+0x14, calls a virtual
 * method (via node+0xc) with arg 3 or 1 depending on flags, clears
 * this+0x14, and calls FUN_006b07b0().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b07b0(void);

__declspec(naked) void FUN_006a0a40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x799c9c
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, eax
        and     ecx, 0x1
        cmp     cl, 0x1
        jnz     L_clear
        mov     edx, eax
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_arg1
        and     eax, 0xfffffffc
        mov     dword ptr [esi + 0x14], eax
        jz      L_clear
        mov     edx, dword ptr [eax]
        push    0x3
        jmp     L_call
    L_arg1:
        and     eax, 0xfffffffc
        mov     dword ptr [esi + 0x14], eax
        jz      L_clear
        mov     edx, dword ptr [eax]
        push    0x1
    L_call:
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
    L_clear:
        mov     ecx, esi
        mov     dword ptr [esi + 0x14], 0x0
        call    FUN_006b07b0
        pop     esi
        ret
    }
}
