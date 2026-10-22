/*
 * FUN_0046bcc0 (62 B) — MLR (MidLevelRenderer) graphics library.
 * Class teardown for MLR_I_C_DT_PMesh: destroys the instance and releases
 * the registered class name.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007d9968;
extern int g_007d996c;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_0046bcc0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007d9968]
        test    esi, esi
        jz      L_bcdb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_bcdb:
        mov     eax, dword ptr [g_007d996c]
        push    0x1
        push    eax
        mov     dword ptr [g_007d9968], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007d996c], 0x0
        pop     esi
        ret
    }
}
