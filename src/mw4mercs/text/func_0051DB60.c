/*
 * FUN_0051DB60 (extent 0x51DB60-0x51DBD4, 116 B) - .text data block.
 * __stdcall, ret 0xc.
 */
#pragma warning(disable : 4035 4793)

extern int  g_007dab44;
extern int  g_007dab40;
extern int  g_00779f0c;
extern void __cdecl FUN_00416BC0(void);
extern void __cdecl FUN_00416CC0(void);
extern void __cdecl FUN_00416C60(void);

__declspec(naked) void __stdcall FUN_0051DB60(void)
{
    __asm {
        sub    esp, 0x14
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x20]
        push   esi
        mov    esi, dword ptr [eax]
        push   edi
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        add    eax, 0x54
        push   eax
        lea    ecx, [esp + 0xc]
        call   FUN_00416BC0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], offset g_00779f0c
        xor    edi, edi
        call   FUN_00416CC0
        test   eax, eax
        je     L_c1
    L_a5:
        cmp    dword ptr [eax + 0x20], 2
        je     L_b4
        mov    ecx, dword ptr [eax + 0x24]
        mov    dword ptr [esi], ecx
        inc    edi
        add    esi, 4
    L_b4:
        lea    ecx, [esp + 8]
        call   FUN_00416CC0
        test   eax, eax
        jne    L_a5
    L_c1:
        lea    ecx, [esp + 8]
        call   FUN_00416C60
        mov    eax, edi
        pop    edi
        pop    esi
        add    esp, 0x14
        ret    0xc
    }
}
