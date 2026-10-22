/*
 * FUN_0045da70 (106 B) — MLR static teardown: frees the 0x400-byte buffer
 * (DAT_007d9914) and the PMesh object (DAT_007d9910), then unregisters
 * "MLR_I_L_DeT_PMesh" via FUN_006f4850.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007d9914;
extern int g_007d9910;
extern int g_007d9918;
extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(int, int);

__declspec(naked) void FUN_0045da70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007d9914]
        test    esi, esi
        jz      L1
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     esi, dword ptr [g_007d9910]
        test    esi, esi
        mov     dword ptr [g_007d9914], 0x0
        jz      L3
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L3:
        mov     eax, dword ptr [g_007d9918]
        push    0x1
        push    eax
        mov     dword ptr [g_007d9910], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007d9918], 0x0
        pop     esi
        ret
    }
}
