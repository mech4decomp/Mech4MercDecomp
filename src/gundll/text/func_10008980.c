/*
 * FUN_10008980 (61 B) -- __stdcall, RET 0x4.
 * Virtual dispatch: if a pointer at +4 exists, call its vtable[0](0);
 * else if a pointer at +0xc exists, clear +4/+8/+0xc and call its
 * vtable[8](obj,0).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008980(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [edx + 0x4]
        xor     eax, eax
        test    ecx, ecx
        jz      L_second
        mov     eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax]
        ret     0x4
L_second:
        mov     ecx, dword ptr [edx + 0xc]
        test    ecx, ecx
        jz      L_out
        push    0
        mov     dword ptr [edx + 0x4], 0
        mov     dword ptr [edx + 0x8], 0
        mov     dword ptr [edx + 0xc], 0
        mov     edx, dword ptr [ecx]
        push    ecx
        call    dword ptr [edx + 0x20]
L_out:
        ret     0x4
    }
}
