/*
 * FUN_0074B620 (24 B) — __stdcall wrapper: forwards its two args to the
 * IAT function at 0x0076b25c and returns 1.
 *
 * Match: target 100%
 */

extern int (__stdcall *g_76b25c)(int a, int b);   /* 0x0076b25c IAT */

__declspec(naked) int __stdcall FUN_0074B620(int a, int b)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        call    dword ptr [g_76b25c]
        mov     eax, 1
        ret     0x8
    }
}
