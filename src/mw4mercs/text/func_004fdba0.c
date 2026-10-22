/*
 * FUN_004FDBA0 (85 B) — Scalar deleting destructor with global refcount.
 * Calls FUN_00416de0 (member dtor); if the low flag bit is set, calls
 * FUN_00416130, decrements global refcount g_007dc8e0, and when it hits
 * 0 frees the global g_007dc8dc (via FUN_00415e30 + FUN_004084e0) and
 * nulls it. Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416de0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);
extern int g_007dc8dc;
extern int g_007dc8e0;

__declspec(naked) void __fastcall FUN_004fdba0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416de0
        test    byte ptr [esp + 8], 1
        jz      l_dbef
        mov     ecx, dword ptr [g_007dc8dc]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc8e0]
        jnz     l_dbef
        push    edi
        mov     edi, dword ptr [g_007dc8dc]
        test    edi, edi
        jz      l_dbde
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_dbde:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc8dc], 0
        pop     esi
        ret     4
    l_dbef:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
