/*
 * func_00442290 - thiscall predicate
 * Returns 1/2 based on global 0x7da86c and [ecx+0x28] flags
 */

extern char g_7da86c;

__declspec(naked) void func_00442290()
{
    __asm {
        mov     dl, byte ptr [g_7da86c]
        mov     eax, 2
        test    dl, al
        jle     skip
        mov     edx, dword ptr [ecx + 0x28]
        test    dh, 0x3c
        je      skip
        mov     eax, 1
    skip:
        ret
    }
}
