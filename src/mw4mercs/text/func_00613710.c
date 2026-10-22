/*
 * FUN_00613710 (34 B) — Pointer-chain dereference returning a value.
 *
 * Reads a global pointer, XORs a global key, walks two pointer offsets,
 * and returns the dword at the end. RET 8 (two stack params, unused).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;

__declspec(naked) unsigned int __stdcall FUN_00613710(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x80]
        mov     eax, dword ptr [eax + 0x2c]
        ret     8
    }
}
