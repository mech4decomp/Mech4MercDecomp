/*
 * FUN_00409510 (85 B) — __thiscall destructor/refcount teardown.
 * Calls base FUN_00415590, then if the flag param bit 0 is set,
 * decrements a global refcount and frees the object when it hits 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b87c0;
extern int g_007b87c4;
extern void __cdecl FUN_00415590(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void* FUN_00409510(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00415590
        test    byte ptr [esp+8], 1
        jz      L_40955F
        mov     ecx, dword ptr [g_007b87c0]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007b87c4]
        jnz     L_40955F
        push    edi
        mov     edi, dword ptr [g_007b87c0]
        test    edi, edi
        jz      L_40954E
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_40954E:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007b87c0], 0
        pop     esi
        ret     4
L_40955F:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
