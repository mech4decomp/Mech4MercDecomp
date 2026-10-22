/*
 * FUN_00605460 (33 B) — __thiscall wrapper.
 *
 * Calls FUN_00605490() (thiscall), then if (arg & 1) calls
 * FUN_00416130(this). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00605490(void);
extern void __cdecl FUN_00416130(void *ptr);
extern int g_007f27ac;

__declspec(naked) void FUN_00605460(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00605490
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip
        mov     ecx, dword ptr [g_007f27ac]
        push    esi
        call    FUN_00416130
    L_skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
