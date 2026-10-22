/*
 * FUN_0055357e (extent 0x55357e-0x553644) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005bfac0(void);
extern void __cdecl FUN_005f8fa0(void);
extern void __cdecl FUN_006272d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0055357e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x40]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x40]
        je    L_35af
        mov    ecx, dword ptr [eax]
        push    1
        xor    ecx, 0x85739531
        call    FUN_006272d0
L_35af:
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx]
        push    0
        push    edx
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x40]
        xor    edx, 0x85739531
        je    L_3609
        mov    eax, dword ptr [g_007dd234]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x40]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x4c]
        call    FUN_005bfac0
        call    FUN_006f49a0
L_3609:
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0x384]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    esi
        call    FUN_005f8fa0
        test    esi, esi
        mov    edi, eax
        je    L_363d
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_363d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_363d:
        mov    eax, edi
        pop    edi
        pop    esi
        ret    4
    }
}
