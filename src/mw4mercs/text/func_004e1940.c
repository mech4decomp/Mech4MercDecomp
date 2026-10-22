/*
 * FUN_004e1940 (85 B) — MLR/Adept refcounted sub-object release (__thiscall).
 * Decrements a global refcount and frees the global object when it hits 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007dc6f0;
extern int g_007dc6ec;

__declspec(naked) void FUN_004e1940(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp+8], 1
        jz      L_198f
        mov     ecx, dword ptr [g_007dc6f0]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc6ec]
        jnz     L_198f
        push    edi
        mov     edi, dword ptr [g_007dc6f0]
        test    edi, edi
        jz      L_197e
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_197e:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc6f0], 0
        pop     esi
        ret     4
L_198f:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
