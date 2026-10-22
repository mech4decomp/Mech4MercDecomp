/*
 * FUN_10032f10 (11 B) - __fastcall. Adds 0x78 to ECX (this), pushes it as
 * the single argument, and calls the IAT function at 0x100491bc (__stdcall,
 * cleans its own stack). Returns its result.
 *
 * CFLAGS: /O1
 */

extern void *g_100491bc;   /* IAT entry, call dword ptr [g_100491bc] */

__declspec(naked) void __fastcall FUN_10032f10(void)
{
    __asm {
        add     ecx, 0x78
        push    ecx
        call    dword ptr [g_100491bc]
        ret
    }
}
