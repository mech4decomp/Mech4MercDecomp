/*
 * FUN_0041de00 (62 B) — teardown helper. If g_007b8ee8 is non-null, calls
 * FUN_00415200 (ECX=this) and frees it via FUN_004084e0. Then calls
 * FUN_006f4850 with g_007b8eec and 1, and zeroes both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8ee8;
extern int g_007b8eec;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_0041de00(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b8ee8]
        test    esi, esi
        jz      loc_41de1b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_41de1b:
        mov     eax, dword ptr [g_007b8eec]
        push    0x1
        push    eax
        mov     dword ptr [g_007b8ee8], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007b8eec], 0x0
        pop     esi
        ret
    }
}
