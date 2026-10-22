/*
 * FUN_00662070 (41 B) — __fastcall (ecx=this). Returns 1 if the virtual
 * method at vtable+0x18 returns 1, or if this->[0x20] != 0 and the
 * virtual method at vtable+4 returns a value != this->[0x20]; else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char FUN_00662070(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x18]
        cmp     al, 0x1
        jnz     L_cont
        pop     esi
        ret
    L_cont:
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        jz      L_zero
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        cmp     eax, dword ptr [esi + 0x20]
        jz      L_zero
        mov     al, 0x1
        pop     esi
        ret
    L_zero:
        xor     al, al
        pop     esi
        ret
    }
}
