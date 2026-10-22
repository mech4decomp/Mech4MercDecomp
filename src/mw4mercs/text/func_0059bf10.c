/*
 * FUN_0059bf10 (extent 0x59bf10-0x59bf88) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0059bd80(void);
extern void __cdecl FUN_0059bec0(void);

__declspec(naked) void FUN_0059bf10(void)
{
    __asm {
        mov    ecx, dword ptr [ecx + 0x18]
        mov    edx, dword ptr [esp + 4]
L_bf17:
        test    ecx, ecx
        je    L_bf2b
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        je    L_bf2d
        cmp    dword ptr [eax + 0x4c], edx
        je    L_bf2d
        jmp    L_bf17
L_bf2b:
        xor    eax, eax
L_bf2d:
        ret    4
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    esi, ecx
        push    edi
        call    FUN_0059bd80
        test    eax, eax
        je    L_bf83
        mov    ecx, dword ptr [esp + 0xc]
        test    ecx, ecx
        mov    dword ptr [eax + 0x1c], ecx
        je    L_bf7b
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x44]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [edx + 0x28]
        mov    dword ptr [eax + 0x4c], ecx
        push    eax
        lea    ecx, [esi + 0x18]
        call    FUN_004179b0
        pop    edi
        pop    esi
        ret    8
L_bf7b:
        push    edi
        mov    ecx, esi
        call    FUN_0059bec0
L_bf83:
        pop    edi
        pop    esi
        ret    8
    }
}
