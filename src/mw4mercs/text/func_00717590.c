/*
 * FUN_00717590 (54 B) — Cleanup: drains a singly-linked free list at
 * 0x0087bc84 (calling FUN_006F4230 on each node), then if the flag at
 * 0x0087c5b0 is set, calls FUN_0070B130 and clears it.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_006F4230(void *node);
extern void __cdecl FUN_0070B130(void);

extern void *g_87bc84;   /* 0x0087bc84 linked-list head */
extern char  g_87c5b0;   /* 0x0087c5b0 flag */

__declspec(naked) void FUN_00717590(void)
{
    __asm {
        mov     eax, dword ptr [g_87bc84]
        test    eax, eax
        jz      L_b0
    L_99:
        mov     ecx, dword ptr [eax]
        push    eax
        mov     dword ptr [g_87bc84], ecx
        call    FUN_006F4230
        mov     eax, dword ptr [g_87bc84]
        test    eax, eax
        jnz     L_99
    L_b0:
        mov     al, byte ptr [g_87c5b0]
        test    al, al
        jz      L_c5
        call    FUN_0070B130
        mov     byte ptr [g_87c5b0], 0
    L_c5:
        ret
    }
}
