/*
 * FUN_0066F86D (61 B) — __thiscall (RET 0). Decodes a pointer chain
 * (XOR-obfuscated) from globals g_7dab44/g_7dab40 and stores a resolved
 * value into [this+0x64], unless a flag byte is zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void FUN_0066F86D(void)
{
    __asm {
        nop
        nop
        nop
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_7dab40]
        lea     eax, [edx + 0xc]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax]
        xor     edx, 0x85739531
        mov     edx, dword ptr [edx + 0x50]
        mov     edx, dword ptr [edx + 0x80]
        xor     eax, 0x85739531
        mov     dword ptr [ecx + 0x64], edx
        mov     dl, byte ptr [eax + 0x17]
        test    dl, dl
        jne     L_66f8a9
        mov     dword ptr [ecx + 0x64], 0
L_66f8a9:
        ret
    }
}
