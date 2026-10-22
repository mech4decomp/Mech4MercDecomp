/*
 * FUN_00417740 (14 B) — __fastcall container iterator peek-front:
 * if this->+0x10 != 0 return (this->+0x10)->+0xc, else return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00417740(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x10]
        test    eax, eax
        jz      label1
        mov     eax, dword ptr [eax+0xc]
        ret
label1:
        xor     eax, eax
        ret
    }
}
