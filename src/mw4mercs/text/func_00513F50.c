/*
 * FUN_00513F50 (35 B) — __stdcall (ret 0xc). Reads a global pointer, xors a
 * value, derefs +0xc, xors a constant, calls FUN_00533020, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;
extern void __cdecl FUN_00533020(void);

__declspec(naked) void FUN_00513F50(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        call    FUN_00533020
        mov     eax, 1
        ret     0xc
    }
}
