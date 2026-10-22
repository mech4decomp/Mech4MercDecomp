/*
 * FUN_004582f0 (106 B) — MLR_I_TMesh static teardown: destroys the
 * 0x400-byte buffer object and the 0x18-byte singleton, unregisters name.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007d98fc;
extern int g_007d98f8;
extern int g_007d9900;

extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004582f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007d98fc]
        test    esi, esi
        jz      L_58313
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_5830a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5830a:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_58313:
        mov     esi, dword ptr [g_007d98f8]
        test    esi, esi
        mov     dword ptr [g_007d98fc], 0x0
        jz      L_58337
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_58337:
        mov     eax, dword ptr [g_007d9900]
        push    0x1
        push    eax
        mov     dword ptr [g_007d98f8], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007d9900], 0x0
        pop     esi
        ret
    }
}
