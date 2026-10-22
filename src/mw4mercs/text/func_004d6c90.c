/*
 * FUN_004d6c90 (85 B) — __thiscall refcount helper. Calls FUN_004169c0;
 * if (param_1 & 1), calls FUN_00416130(this) and decrements global
 * refcount 0x007dc14c; when it hits zero, releases the object at
 * 0x007dc148 (FUN_00415e30 + FUN_004084e0) and clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);
extern int g_007dc148;
extern int g_007dc14c;

__declspec(naked) void FUN_004d6c90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp+8], 1
        jz      L6CDF
        mov     ecx, dword ptr [g_007dc148]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc14c]
        jnz     L6CDF
        push    edi
        mov     edi, dword ptr [g_007dc148]
        test    edi, edi
        jz      L6CCE
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
    L6CCE:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc148], 0
        pop     esi
        ret     4
    L6CDF:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
