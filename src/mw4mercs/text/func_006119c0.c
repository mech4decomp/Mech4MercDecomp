/*
 * FUN_006119c0 (121 B) — __cdecl, no params.
 *
 * Cleans up three global object pointers (0x007f28d0, 0x007f28d4, and a
 * table from 0x007f28d8 to 0x007f2918), calling a per-object teardown
 * method plus FUN_004084e0 for each non-null entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f28d0;
extern int g_007f28d4;
extern void __cdecl FUN_00610370(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006115c0(void);
extern void __cdecl FUN_00610b40(void);

__declspec(naked) void __cdecl FUN_006119c0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f28d0]
        test    esi, esi
        push    edi
        jz      L_006119dc
        mov     ecx, esi
        call    FUN_00610370
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_006119dc:
        mov     esi, dword ptr [g_007f28d4]
        test    esi, esi
        mov     dword ptr [g_007f28d0], 0x0
        jz      L_00611a00
        mov     ecx, esi
        call    FUN_006115c0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_00611a00:
        mov     dword ptr [g_007f28d4], 0x0
        mov     esi, 0x7f28d8
L_00611a0f:
        mov     edi, dword ptr [esi]
        test    edi, edi
        jz      L_00611a25
        mov     ecx, edi
        call    FUN_00610b40
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_00611a25:
        mov     dword ptr [esi], 0x0
        add     esi, 0x4
        cmp     esi, 0x7f2918
        jl      L_00611a0f
        pop     edi
        pop     esi
        ret
    }
}
