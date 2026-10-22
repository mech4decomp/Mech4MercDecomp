/*
 * FUN_004BBDEE (extent 0x4BBDEE-0x4BBE64, 118 B) - .text data block.
 * __thiscall-style constructor (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern int  g_007daa5c;
extern int  g_007b9578;
extern int  g_007b35d8;
extern int  g_007711dc;
extern void __cdecl FUN_004C6430(void);
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004861F0(void);
extern void __cdecl FUN_006F49A0(void);
extern void __cdecl FUN_004870B0(void);

__declspec(naked) void __stdcall FUN_004BBDEE(void)
{
    __asm {
        nop
        nop
        mov    eax, dword ptr [g_007daa5c]
        push   esi
        push   edi
        mov    esi, ecx
        push   eax
        call   FUN_004C6430
        mov    ecx, dword ptr [esi + 0x18]
        mov    eax, dword ptr [g_007b9578]
        shr    ecx, 0xa
        and    ecx, 1
        mov    edx, dword ptr [ecx*4 + g_007b35d8]
        push   eax
        mov    dword ptr [esi], offset g_007711dc
        mov    dword ptr [esi + 0x13c], edx
        call   FUN_006F4950
        push   0xa4
        call   FUN_004084D0
        add    esp, 4
        test   eax, eax
        je     L_49
        mov    ecx, dword ptr [esp + 0xc]
        push   0
        push   ecx
        mov    ecx, eax
        call   FUN_004861F0
        mov    edi, eax
        jmp    L_4b
    L_49:
        xor    edi, edi
    L_4b:
        mov    dword ptr [esi + 0x144], edi
        call   FUN_006F49A0
        mov    ecx, edi
        call   FUN_004870B0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    4
    }
}
