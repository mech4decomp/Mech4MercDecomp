/*
 * FUN_00467c70 (106 B) — MLR PMesh static teardown: frees the index buffer
 * (0x007d9954) and class object (0x007d9950), unregisters the class via
 * FUN_006f4850, clears globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007d9954;
extern int   g_007d9950;
extern int   g_007d9958;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_00467c70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007d9954]
        test    esi, esi
        jz      L_467c93
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_467c8a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_467c8a:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_467c93:
        mov     esi, dword ptr [g_007d9950]
        test    esi, esi
        mov     dword ptr [g_007d9954], 0x0
        jz      L_467cb7
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_467cb7:
        mov     eax, dword ptr [g_007d9958]
        push    0x1
        push    eax
        mov     dword ptr [g_007d9950], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007d9958], 0x0
        pop     esi
        ret
    }
}
