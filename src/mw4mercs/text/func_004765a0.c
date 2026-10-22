/*
 * FUN_004765a0 (62 B) — MLR global shutdown: destroys the object at
 * 0x007d99b0 and releases the handle at 0x007d99b4.
 *
 * CFLAGS: /O1
 */

extern int g_007d99b0;
extern int g_007d99b4;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004765a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007d99b0]
        test    esi, esi
        jz      L_65bb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_65bb:
        mov     eax, dword ptr [g_007d99b4]
        push    0x1
        push    eax
        mov     dword ptr [g_007d99b0], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007d99b4], 0x0
        pop     esi
        ret
    }
}
