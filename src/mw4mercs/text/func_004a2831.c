/*
 * FUN_004a2831 (extent 0x4a2831-0x4a294c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007da920;
extern void __cdecl FUN_004a3920(void);
extern void __cdecl FUN_004adf10(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_004a2831(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a3920
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [edi + 0x128]
        lea    edx, [edi + 0x12c]
        mov    dword ptr [esi + 0x128], ecx
        push    edx
        lea    ecx, [esi + 0x12c]
        call    FUN_004ae4c0
        mov    ecx, dword ptr [edi + 0x144]
        mov    al, byte ptr [edi + 0x138]
        lea    edx, [edi + 0x148]
        mov    dword ptr [esi + 0x144], ecx
        push    edx
        lea    ecx, [esi + 0x148]
        mov    byte ptr [esi + 0x138], al
        call    FUN_004ae4c0
        mov    al, byte ptr [edi + 0x154]
        lea    ecx, [edi + 0x15c]
        push    ecx
        lea    ecx, [esi + 0x15c]
        mov    byte ptr [esi + 0x154], al
        call    FUN_004ae4c0
        lea    edx, [edi + 0x168]
        push    edx
        lea    ecx, [esi + 0x168]
        call    FUN_004adf10
        mov    al, byte ptr [edi + 0x17c]
        mov    ecx, dword ptr [edi + 0x184]
        mov    edx, dword ptr [edi + 0x18c]
        mov    dword ptr [esi + 0x184], ecx
        mov    ecx, dword ptr [edi + 0x19c]
        mov    byte ptr [esi + 0x17c], al
        mov    eax, dword ptr [edi + 0x194]
        mov    dword ptr [esi + 0x18c], edx
        mov    dl, byte ptr [edi + 0x1a0]
        mov    dword ptr [esi + 0x194], eax
        mov    al, byte ptr [edi + 0x1a1]
        mov    dword ptr [esi + 0x19c], ecx
        mov    byte ptr [esi + 0x1a0], dl
        mov    byte ptr [esi + 0x1a1], al
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
        nop    
        push    esi
        mov    esi, ecx
        fld    dword ptr [esi + 0x194]
        fdivr    dword ptr [g_0076d064]
        call    FUN_0075db4a
        mov    byte ptr [esi + 0x1a1], al
        pop    esi
        ret    
    }
}
