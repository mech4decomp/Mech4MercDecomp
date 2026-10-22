/*
 * FUN_004f97c0 (85 B) — MLR/Adept: teardown/refcount (mirror of
 * FUN_004f9760). Calls FUN_00416910, conditionally FUN_00416130,
 * decrements global counter 0x007dc8b0, frees 0x007dc8ac.
 * __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8ac;
extern int g_007dc8b0;

extern void __cdecl FUN_00416910(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f97c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416910
        test    byte ptr [esp+0x8], 0x1
        jz      L980f
        mov     ecx, dword ptr [g_007dc8ac]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc8b0]
        jnz     L980f
        push    edi
        mov     edi, dword ptr [g_007dc8ac]
        test    edi, edi
        jz      L97fe
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
L97fe:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc8ac], 0
        pop     esi
        ret     0x4
L980f:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
