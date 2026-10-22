/*
 * FUN_00613760 (38 B) - __thiscall, RET 0x8 (2 stack params, unused).
 *
 * Pointer-chasing obfuscation resolving a this pointer through
 * g_7dab44/g_7dab40, then calls FUN_00614880 (__thiscall, ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __stdcall FUN_00614880(void);

__declspec(naked) void __stdcall FUN_00613760(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x80]
        call    FUN_00614880
        ret     8
    }
}
