/*
 * FUN_004d6d50 (85 B) — __thiscall refcount helper (twin of
 * FUN_004d6c90, different globals 0x007dc158/0x007dc15c and first
 * call FUN_00416910).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416910(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);
extern int g_007dc158;
extern int g_007dc15c;

__declspec(naked) void FUN_004d6d50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416910
        test    byte ptr [esp+8], 1
        jz      L6D9F
        mov     ecx, dword ptr [g_007dc158]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc15c]
        jnz     L6D9F
        push    edi
        mov     edi, dword ptr [g_007dc158]
        test    edi, edi
        jz      L6D8E
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
    L6D8E:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc158], 0
        pop     esi
        ret     4
    L6D9F:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
