/*
 * FUN_004d6cf0 (85 B) — __thiscall refcount helper (twin of
 * FUN_004d6c90, different globals 0x007dc150/0x007dc154).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);
extern int g_007dc150;
extern int g_007dc154;

__declspec(naked) void FUN_004d6cf0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp+8], 1
        jz      L6D3F
        mov     ecx, dword ptr [g_007dc150]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc154]
        jnz     L6D3F
        push    edi
        mov     edi, dword ptr [g_007dc150]
        test    edi, edi
        jz      L6D2E
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
    L6D2E:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc150], 0
        pop     esi
        ret     4
    L6D3F:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
