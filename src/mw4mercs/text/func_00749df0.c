/*
 * FUN_00749df0 (6 B) — returns DAT_00849eb8.
 *
 *   MOV EAX,[0x00849eb8]   (A1 moffs32 form)
 *   RET
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849eb8;

__declspec(naked) int FUN_00749df0(void)
{
    __asm {
        mov     eax, dword ptr [g_00849eb8]
        ret
    }
}
