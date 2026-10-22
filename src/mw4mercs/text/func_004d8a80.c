/*
 * FUN_004d8a80 (47 B) — sprintf wrapper building a path string:
 *   sprintf(param_2, "\\%s\\%s\\%s\\%s", "gamename", param_1+0x1768,
 *           "gamever", &DAT_00773040);
 * __stdcall RET 0x10 (2 args). Calls sprintf via IAT 0x0076b420.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_76b420)(void);   /* IAT: sprintf */

__declspec(naked) void FUN_004d8a80(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]    /* param_2 */
        mov     ecx, dword ptr [esp+0x8]    /* param_1 */
        push    0x773040                    /* &DAT_00773040 */
        push    0x771c64                    /* "gamever" */
        add     eax, 0x1768                 /* param_1 + 0x1768 */
        push    eax
        push    0x771c58                    /* "gamename" */
        push    0x773030                    /* "\\%s\\%s\\%s\\%s" */
        push    ecx
        call    dword ptr [g_76b420]        /* sprintf */
        add     esp, 0x18
        ret     0x10
    }
}
