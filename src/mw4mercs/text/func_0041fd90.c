/*
 * FUN_0041fd90 (33 B) — __thiscall, RET 0x4 (1 param). Calls FUN_0041fc50
 * (destructor), and if param1 bit 0 is set, calls FUN_00416130 on the global
 * at 0x007b9458 passing this. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9458;                 /* 0x007b9458 */
extern void __cdecl FUN_0041fc50(void); /* thiscall */
extern void __cdecl FUN_00416130(void); /* thiscall on g_007b9458 */

__declspec(naked) void FUN_0041fd90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc50
        test    byte ptr [esp + 0x8], 0x1
        jz      LFDAB
        mov     ecx, dword ptr [g_007b9458]
        push    esi
        call    FUN_00416130
LFDAB:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
