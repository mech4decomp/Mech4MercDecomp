/*
 * FUN_10039a84 (41 B) - __stdcall, RET. Calls the function pointer at
 * 0x100491a8 four times, each with a single dword argument from
 * 0x10051be4 / 0x10051bd4 / 0x10051bc4 / 0x10051ba4.
 *
 * CFLAGS: /O1
 */

extern void* g_100491a8;   /* function pointer at 0x100491a8 */
extern int g_10051be4;     /* dword at 0x10051be4 */
extern int g_10051bd4;     /* dword at 0x10051bd4 */
extern int g_10051bc4;     /* dword at 0x10051bc4 */
extern int g_10051ba4;     /* dword at 0x10051ba4 */

__declspec(naked) void __stdcall FUN_10039a84(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_100491a8]
        push    dword ptr [g_10051be4]
        call    esi
        push    dword ptr [g_10051bd4]
        call    esi
        push    dword ptr [g_10051bc4]
        call    esi
        push    dword ptr [g_10051ba4]
        call    esi
        pop     esi
        ret
    }
}
