/*
 * FUN_004eb420 (75 B) — __cdecl teardown: destroys the objects stored in
 * DAT_007dc7c4 and DAT_007dc7c8 (calling their destructors + free), then
 * zeroes both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415200(void);
extern int FUN_004084e0(int);
extern void FUN_00415e30(void);
extern int g_007dc7c4;
extern int g_007dc7c8;

__declspec(naked) void FUN_004eb420(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007dc7c4]
        test    esi, esi
        jz      L_skip1
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip1:
        mov     esi, dword ptr [g_007dc7c8]
        test    esi, esi
        mov     dword ptr [g_007dc7c4], 0
        jz      L_skip2
        mov     ecx, esi
        call    FUN_00415e30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip2:
        mov     dword ptr [g_007dc7c8], 0
        pop     esi
        ret
    }
}
