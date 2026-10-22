/*
 * FUN_00666460 (23 B) — if global mode flag == 6, tail-call FUN_00649150();
 * otherwise call FUN_00562f40(0x2a).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008058ac;              /* DAT_008058ac */
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_00562f40(void);

__declspec(naked) void FUN_00666460(void)
{
    __asm {
        cmp     dword ptr [g_008058ac], 6
        jnz     not6
        jmp     FUN_00649150
not6:
        push    0x2a
        call    FUN_00562f40
        pop     ecx
        ret
    }
}
