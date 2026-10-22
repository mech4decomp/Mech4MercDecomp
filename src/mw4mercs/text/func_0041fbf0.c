/*
 * FUN_0041fbf0 (39 B) — destroys the global object at 0x007b9458 if present,
 * then nulls the global pointer. __cdecl, no args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9458;                 /* 0x007b9458 */
extern void __cdecl FUN_00415e30(void); /* thiscall on g_007b9458 */
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0041fbf0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b9458]
        test    esi, esi
        jz      LFC0B
        mov     ecx, esi
        call    FUN_00415e30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
LFC0B:
        mov     dword ptr [g_007b9458], 0x0
        pop     esi
        ret
    }
}
