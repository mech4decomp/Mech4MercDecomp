/*
 * FUN_0074cb20 (57 B) — __cdecl, RET 4. Returns a string constant based on
 * arg (0 -> 0x7ab7fc, 1 -> 0x7ab7f4); otherwise calls the IAT function at
 * g_76b420(0x8ba9b4, 0x7ab7ec, arg) and returns 0x8ba9b4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_76b420;

__declspec(naked) void __cdecl FUN_0074cb20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jnz     label1
        mov     eax, 0x7ab7fc
        ret     0x4
label1:
        cmp     eax, 0x1
        jnz     label2
        mov     eax, 0x7ab7f4
        ret     0x4
label2:
        push    eax
        push    0x7ab7ec
        push    0x8ba9b4
        call    dword ptr [g_76b420]
        add     esp, 0xc
        mov     eax, 0x8ba9b4
        ret     0x4
    }
}
