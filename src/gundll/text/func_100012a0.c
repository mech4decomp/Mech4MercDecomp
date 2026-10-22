/*
 * FUN_100012A0 (33 B) - __stdcall, RET 0x8.  COM factory LockServer
 * (vtable[4] @0x1004926c): if flock != 0, AddRef(this) via vtable[1];
 * else Release(this) via vtable[2]; returns S_OK.
 * (Ghidra missed this entry - transcribed from reference bytes.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100012A0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        jz      L_dec
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x4]
        xor     eax, eax
        ret     0x8
    L_dec:
        mov     edx, dword ptr [eax]
        call    dword ptr [edx + 0x8]
        xor     eax, eax
        ret     0x8
    }
}
