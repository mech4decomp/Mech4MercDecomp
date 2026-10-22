/*
 * FUN_004317b0 (106 B) — MLR look-up-light global teardown. __cdecl.
 * Frees the two global objects and unregisters the mesh type.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b980c;
extern int g_007b9810;
extern int g_007b9814;
extern void FUN_004084e0(void);
extern void FUN_00415200(void);
extern void FUN_006f4850(void);

__declspec(naked) void FUN_004317b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b980c]
        test    esi, esi
        jz      skip1
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      free1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
free1:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip1:
        mov     esi, dword ptr [g_007b9810]
        test    esi, esi
        mov     dword ptr [g_007b980c], 0
        jz      skip2
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip2:
        mov     eax, dword ptr [g_007b9814]
        push    0x1
        push    eax
        mov     dword ptr [g_007b9810], 0
        call    FUN_006f4850
        mov     dword ptr [g_007b9814], 0
        pop     esi
        ret
    }
}
