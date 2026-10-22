/*
 * FUN_004a4ca4 (extent 0x4a4ca4-0x4a4dcc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007da920;
extern void __cdecl FUN_004a95e0(void);
extern void __cdecl FUN_004adf10(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_004a4ca4(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a95e0
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        lea    ecx, [edi + 0x2b8]
        push    ecx
        lea    ecx, [esi + 0x2b8]
        call    FUN_004ae4c0
        lea    edx, [edi + 0x2c4]
        push    edx
        lea    ecx, [esi + 0x2c4]
        call    FUN_004ae4c0
        mov    al, byte ptr [edi + 0x2d0]
        lea    ecx, [edi + 0x2d8]
        push    ecx
        lea    ecx, [esi + 0x2d8]
        mov    byte ptr [esi + 0x2d0], al
        call    FUN_004ae4c0
        lea    edx, [edi + 0x2e4]
        push    edx
        lea    ecx, [esi + 0x2e4]
        call    FUN_004ae4c0
        mov    al, byte ptr [edi + 0x2f0]
        lea    ecx, [edi + 0x2f8]
        push    ecx
        lea    ecx, [esi + 0x2f8]
        mov    byte ptr [esi + 0x2f0], al
        call    FUN_004ae4c0
        lea    edx, [edi + 0x304]
        push    edx
        lea    ecx, [esi + 0x304]
        call    FUN_004adf10
        mov    al, byte ptr [edi + 0x318]
        mov    ecx, dword ptr [edi + 0x320]
        mov    edx, dword ptr [edi + 0x328]
        mov    dword ptr [esi + 0x320], ecx
        mov    ecx, dword ptr [edi + 0x338]
        mov    byte ptr [esi + 0x318], al
        mov    eax, dword ptr [edi + 0x330]
        mov    dword ptr [esi + 0x328], edx
        mov    dl, byte ptr [edi + 0x33c]
        mov    dword ptr [esi + 0x330], eax
        mov    al, byte ptr [edi + 0x33d]
        mov    dword ptr [esi + 0x338], ecx
        mov    byte ptr [esi + 0x33c], dl
        mov    byte ptr [esi + 0x33d], al
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        fld    dword ptr [esi + 0x330]
        fdivr    dword ptr [g_0076d064]
        call    FUN_0075db4a
        mov    byte ptr [esi + 0x33d], al
        pop    esi
        ret    
    }
}
