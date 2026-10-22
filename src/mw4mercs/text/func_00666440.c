/*
 * FUN_00666440 (18 B) — if global mode flag == 6, call FUN_00562f40(0x2a).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008058ac;              /* DAT_008058ac */
extern void __cdecl FUN_00562f40(void);

__declspec(naked) void FUN_00666440(void)
{
    __asm {
        cmp     dword ptr [g_008058ac], 6
        jnz     done
        push    0x2a
        call    FUN_00562f40
        pop     ecx
done:
        ret
    }
}
