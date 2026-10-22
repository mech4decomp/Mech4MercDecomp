/*
 * FUN_00620000 (22 B) — __stdcall (RET 0x4). Pushes a format string and
 * an argument, then calls an imported function via its IAT slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0078c9b8[];
extern void *g_0076b420;

__declspec(naked) void FUN_00620000(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    offset g_0078c9b8
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 8
        ret     4
    }
}
