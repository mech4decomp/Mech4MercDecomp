/*
 * FUN_10030940 (53 B) - __stdcall, RET 0x4 (tail-call).  Maps arg3 (0/1/2)
 * to a value (4 for 0, else the arg itself), stores it back to [esp+0x10],
 * rewrites [esp+4] to obj->field_0xc, and tail-calls vtable[0x24/4].
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10030940(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x10]
        xor     eax, eax
        test    ecx, ecx
        jne     L1
        mov     eax, 4
        jmp     Lend
L1:
        cmp     ecx, 1
        jne     L2
        mov     eax, ecx
        jmp     Lend
L2:
        cmp     ecx, 2
        jne     Lend
        mov     eax, ecx
Lend:
        mov     ecx, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 4], ecx
        jmp     dword ptr [edx + 0x24]
    }
}
