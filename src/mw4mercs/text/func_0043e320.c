/*
 * FUN_0043e320 (62 B) — MLR mesh class teardown. Destroys the singleton
 * instance created by FUN_0043e2c0 and releases the class registration.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9850;
extern int g_007b9854;

extern void FUN_00415200(void);
extern void FUN_004084e0(void *);
extern void FUN_006f4850(void);

__declspec(naked) void FUN_0043e320(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b9850]
        test    esi, esi
        jz      L_e33b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_e33b:
        mov     eax, dword ptr [g_007b9854]
        push    0x1
        push    eax
        mov     dword ptr [g_007b9850], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007b9854], 0x0
        pop     esi
        ret
    }
}
