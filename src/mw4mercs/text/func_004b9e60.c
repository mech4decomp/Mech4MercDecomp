/*
 * FUN_004b9e60 (62 B) — MLR subsystem teardown helper. RET (void).
 *
 * CFLAGS: /O1
 */

extern int g_007daa4c;
extern int g_007daa48;
extern void FUN_00415200(void);
extern void FUN_004084e0(void);
extern void FUN_006f4850(void);

__declspec(naked) void FUN_004b9e60(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007daa4c]
        test    esi, esi
        jz      L_4b9e7b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_4b9e7b:
        mov     eax, dword ptr [g_007daa48]
        push    0x1
        push    eax
        mov     dword ptr [g_007daa4c], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007daa48], 0x0
        pop     esi
        ret
    }
}
