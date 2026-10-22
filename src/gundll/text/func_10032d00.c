/*
 * FUN_10032D00 (61 B) - __stdcall, RET 0x4.  Zeroes a 9-dword stack buffer,
 * then calls a COM interface method (vtable[0x1f] @+0x7c) on the object at
 * arg1->+0xc, passing the buffer, a GUID ptr (0x1004addc) and size 0x24.
 * Returns the buffer's first dword.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10032D00(void)
{
    __asm {
        sub     esp, 0x24
        push    edi
        xor     eax, eax
        push    0
        mov     ecx, 9
        lea     edi, [esp + 8]
        rep     stosd
        mov     eax, dword ptr [esp + 0x30]
        mov     eax, dword ptr [eax + 0xc]
        lea     edx, [esp + 8]
        push    edx
        push    0x1004addc
        mov     dword ptr [esp + 0x10], 0x24
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x7c]
        mov     eax, dword ptr [esp + 0xc]
        pop     edi
        add     esp, 0x24
        ret     4
    }
}
