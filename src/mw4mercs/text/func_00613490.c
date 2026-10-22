/*
 * FUN_00613490 (38 B) - __thiscall, RET 0x8 (2 stack params, unused).
 *
 * Pointer-chasing obfuscated store: resolves a pointer chain through
 * g_7dab44/g_7dab40 and sets [resolved+0x2c] = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void __stdcall FUN_00613490(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x80]
        mov     dword ptr [eax + 0x2c], 1
        ret     8
    }
}
