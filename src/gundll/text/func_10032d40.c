/*
 * FUN_10032D40 (92 B) - __stdcall, RET 0x8.  Zeroes a 9-dword stack buffer,
 * calls COM interface method vtable[0x1f] (@+0x7c) on arg1->+0xc with the
 * buffer + GUID (0x1004addc) + size 0x24; if that succeeds, calls
 * vtable[0x1e] (@+0x78) with arg2 stored into the buffer.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10032D40(void)
{
    __asm {
        sub     esp, 0x24
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        push    edi
        push    0
        xor     eax, eax
        lea     edx, [esp + 0xc]
        push    edx
        mov     ecx, 9
        lea     edi, [esp + 0x10]
        rep     stosd
        mov     eax, dword ptr [esi + 0xc]
        push    0x1004addc
        mov     dword ptr [esp + 0x14], 0x24
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x7c]
        test    eax, eax
        jl      L_1
        mov     eax, dword ptr [esp + 0x34]
        push    0
        lea     edx, [esp + 0xc]
        push    edx
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [ecx + 0x78]
    L_1:
        pop     edi
        pop     esi
        add     esp, 0x24
        ret     8
    }
}
