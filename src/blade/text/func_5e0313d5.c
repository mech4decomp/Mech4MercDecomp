/*
 * FUN_5e0313d5 (290 B) - registers a set of fields (offsets into the
 * object at ESI) with a table at 0x5e77aac8 by calling FUN_5e033065,
 * plus a cleanup call to FUN_5e0314f7. Returns -1 if ESI is null, else
 * OR of results.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e033065(void);
extern void __cdecl FUN_5e0314f7(void);
extern char g_5e77aac8;   /* word table entry (reloc-masked) */

__declspec(naked) void FUN_5e0313d5(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        push    edi
        movzx   edi, word ptr [g_5e77aac8]
        test    esi, esi
        jnz     L1
        or      eax, 0xffffffff
        jmp     Lend
L1:
        lea     eax, [esi+0xc]
        push    ebx
        push    eax
        push    0x15
        push    edi
        push    1
        call    FUN_5e033065
        mov     ebx, eax
        lea     eax, [esi+0x10]
        push    eax
        push    0x14
        push    edi
        push    1
        call    FUN_5e033065
        or      ebx, eax
        lea     eax, [esi+0x14]
        push    eax
        push    0x16
        push    edi
        push    1
        call    FUN_5e033065
        or      ebx, eax
        lea     eax, [esi+0x18]
        push    eax
        push    0x17
        push    edi
        push    1
        call    FUN_5e033065
        add     esp, 0x40
        or      ebx, eax
        lea     eax, [esi+0x1c]
        push    eax
        push    0x18
        push    edi
        push    1
        call    FUN_5e033065
        push    dword ptr [esi+0x1c]
        or      ebx, eax
        call    FUN_5e0314f7
        lea     eax, [esi+0x20]
        push    eax
        push    0x50
        push    edi
        push    1
        call    FUN_5e033065
        or      ebx, eax
        lea     eax, [esi+0x24]
        push    eax
        push    0x51
        push    edi
        push    1
        call    FUN_5e033065
        or      ebx, eax
        lea     eax, [esi+0x28]
        push    eax
        push    0x1a
        push    edi
        push    0
        call    FUN_5e033065
        add     esp, 0x44
        or      ebx, eax
        lea     eax, [esi+0x29]
        push    eax
        push    0x19
        push    edi
        push    0
        call    FUN_5e033065
        or      ebx, eax
        lea     eax, [esi+0x2a]
        push    eax
        push    0x54
        push    edi
        push    0
        call    FUN_5e033065
        or      ebx, eax
        lea     eax, [esi+0x2b]
        push    eax
        push    0x55
        push    edi
        push    0
        call    FUN_5e033065
        or      ebx, eax
        lea     eax, [esi+0x2c]
        push    eax
        push    0x56
        push    edi
        push    0
        call    FUN_5e033065
        add     esp, 0x40
        or      ebx, eax
        lea     eax, [esi+0x2d]
        push    eax
        push    0x57
        push    edi
        push    0
        call    FUN_5e033065
        or      ebx, eax
        lea     eax, [esi+0x2e]
        push    eax
        push    0x52
        push    edi
        push    0
        call    FUN_5e033065
        add     esi, 0x2f
        or      ebx, eax
        push    esi
        push    0x53
        push    edi
        push    0
        call    FUN_5e033065
        add     esp, 0x30
        or      eax, ebx
        pop     ebx
Lend:
        pop     edi
        pop     esi
        ret
    }
}
