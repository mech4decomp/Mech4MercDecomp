/*
 * FUN_004f9760 (85 B) — MLR/Adept: teardown/refcount. Calls
 * FUN_004169c0, conditionally FUN_00416130, decrements global
 * counter 0x007dc8b4, frees 0x007dc8b8. __thiscall (ECX = this),
 * RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8b8;
extern int g_007dc8b4;

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004f9760(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp+0x8], 0x1
        jz      L97af
        mov     ecx, dword ptr [g_007dc8b8]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc8b4]
        jnz     L97af
        push    edi
        mov     edi, dword ptr [g_007dc8b8]
        test    edi, edi
        jz      L979e
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
L979e:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc8b8], 0
        pop     esi
        ret     0x4
L97af:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
