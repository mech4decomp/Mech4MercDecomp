/*
 * FUN_0063b190 (42 B) — __thiscall-style dispatcher.
 *
 * Computes this = *[0x007dab44] ^ [0x007dab40], then calls
 * FUN_00600940 with this = (this+0x20) ^ 0x85739531 and the stack
 * param, then calls FUN_0064e5a0 with this = this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e5a0(void);

__declspec(naked) void __cdecl FUN_0063b190(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        push    ecx
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        call    FUN_00600940
        mov     ecx, eax
        call    FUN_0064e5a0
        ret
    }
}
