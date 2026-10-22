/*
 * FUN_5e02fd22 (83 B) — install the sub-fields of a parsed locale category
 * buffer (at +0x40 and +0x80) via the pair-install callback.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_5e02e220(void);
extern void FUN_5e02fc31(void);

__declspec(naked) void FUN_5e02fd22(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        push esi
        push dword ptr [esp+0xc]
        call FUN_5e02e220
        cmp byte ptr [esi+0x40], 0
        lea eax, [esi+0x40]
        pop ecx
        pop ecx
        jz L_fd50
        push eax
        push 0x5e036698
        push 2
        push dword ptr [esp+0x14]
        call FUN_5e02fc31
        add esp, 0x10
L_fd50:
        cmp byte ptr [esi+0x80], 0
        lea eax, [esi+0x80]
        pop esi
        jz L_fd74
        push eax
        push 0x5e036694
        push 2
        push dword ptr [esp+0x10]
        call FUN_5e02fc31
        add esp, 0x10
L_fd74:
        ret
    }
}
