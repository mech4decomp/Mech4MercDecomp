/*
 * FUN_004BBA2E (extent 0x4BBA2E-0x4BBAA2, 116 B) - .text data block.
 * __thiscall-style constructor (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern int  g_007daa58;
extern int  g_007b9578;
extern int  g_007b35d0;
extern int  g_0077110c;
extern void __cdecl FUN_004C6430(void);
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00485520(void);
extern void __cdecl FUN_006F49A0(void);
extern void __cdecl FUN_004870B0(void);

__declspec(naked) void __stdcall FUN_004BBA2E(void)
{
    __asm {
        nop
        nop
        mov    eax, dword ptr [g_007daa58]
        push   esi
        push   edi
        mov    esi, ecx
        push   eax
        call   FUN_004C6430
        mov    ecx, dword ptr [esi + 0x18]
        mov    eax, dword ptr [g_007b9578]
        shr    ecx, 0xa
        and    ecx, 1
        mov    edx, dword ptr [ecx*4 + g_007b35d0]
        push   eax
        mov    dword ptr [esi], offset g_0077110c
        mov    dword ptr [esi + 0x13c], edx
        call   FUN_006F4950
        push   0xa0
        call   FUN_004084D0
        add    esp, 4
        test   eax, eax
        je     L_87
        mov    ecx, dword ptr [esp + 0xc]
        push   ecx
        mov    ecx, eax
        call   FUN_00485520
        mov    edi, eax
        jmp    L_89
    L_87:
        xor    edi, edi
    L_89:
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
