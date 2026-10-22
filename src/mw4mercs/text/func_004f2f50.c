/*
 * FUN_004f2f50 (85 B) — MLR/Adept singleton release (__thiscall, RET 4).
 * Calls FUN_004169c0; if flag bit 0 set, unregisters via FUN_00416130,
 * decrements a global refcount (0x007dc874), and when it hits zero frees
 * the global object (0x007dc870) via FUN_00415e30/FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc870;
extern int g_007dc874;

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f2f50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_2f9f
        mov     ecx, dword ptr [g_007dc870]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc874]
        jnz     L_2f9f
        push    edi
        mov     edi, dword ptr [g_007dc870]
        test    edi, edi
        jz      L_2f8e
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_2f8e:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc870], 0x0
        pop     esi
        ret     0x4
L_2f9f:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
