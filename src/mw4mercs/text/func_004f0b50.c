/*
 * FUN_004f0b50 (85 B) - __thiscall (RET 0x4). Adept/MLR destructor-ish.
 * Calls FUN_004169c0; if arg&1, removes this from g_7dc834 via
 * FUN_00416130, decrements g_7dc838, and when it hits 0 destroys the
 * g_7dc834 object via FUN_00415e30 + FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);
extern int g_7dc834;   /* 0x007dc834 */
extern int g_7dc838;   /* 0x007dc838 */

__declspec(naked) void *func_004f0b50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_4f0b9f
        mov     ecx, dword ptr [g_7dc834]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_7dc838]
        jnz     L_4f0b9f
        push    edi
        mov     edi, dword ptr [g_7dc834]
        test    edi, edi
        jz      L_4f0b8e
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_4f0b8e:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_7dc834], 0x0
        pop     esi
        ret     0x4
    L_4f0b9f:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
