/*
 * FUN_004a6057 (extent 0x4a6057-0x4a621a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern int    g_007da98c;
extern int    g_007da998;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004a95e0(void);
extern void __cdecl FUN_004adf10(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a6057(void)
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
        call    FUN_004adf10
        mov    ecx, dword ptr [edi + 0x2e4]
        mov    al, byte ptr [edi + 0x2d8]
        lea    edx, [edi + 0x2e8]
        mov    dword ptr [esi + 0x2e4], ecx
        push    edx
        lea    ecx, [esi + 0x2e8]
        mov    byte ptr [esi + 0x2d8], al
        call    FUN_004adf10
        mov    al, byte ptr [edi + 0x2fc]
        lea    ecx, [edi + 0x304]
        push    ecx
        lea    ecx, [esi + 0x304]
        mov    byte ptr [esi + 0x2fc], al
        call    FUN_004ae4c0
        mov    edx, dword ptr [edi + 0x318]
        mov    cl, byte ptr [edi + 0x31c]
        mov    eax, dword ptr [edi + 0x314]
        mov    dword ptr [esi + 0x318], edx
        lea    edx, [edi + 0x324]
        mov    byte ptr [esi + 0x31c], cl
        push    edx
        lea    ecx, [esi + 0x324]
        mov    dword ptr [esi + 0x314], eax
        call    FUN_004ae4c0
        mov    eax, dword ptr [edi + 0x338]
        mov    ecx, dword ptr [edi + 0x334]
        mov    dl, byte ptr [edi + 0x33c]
        mov    dword ptr [esi + 0x338], eax
        lea    eax, [edi + 0x344]
        mov    dword ptr [esi + 0x334], ecx
        push    eax
        lea    ecx, [esi + 0x344]
        mov    byte ptr [esi + 0x33c], dl
        call    FUN_004ae4c0
        mov    ecx, dword ptr [edi + 0x358]
        mov    edx, dword ptr [edi + 0x354]
        mov    al, byte ptr [edi + 0x35c]
        mov    dword ptr [esi + 0x358], ecx
        lea    ecx, [edi + 0x364]
        push    ecx
        lea    ecx, [esi + 0x364]
        mov    dword ptr [esi + 0x354], edx
        mov    byte ptr [esi + 0x35c], al
        call    FUN_004ae4c0
        mov    edx, dword ptr [edi + 0x378]
        mov    eax, dword ptr [edi + 0x374]
        mov    cl, byte ptr [edi + 0x37c]
        mov    dword ptr [esi + 0x378], edx
        mov    edx, dword ptr [edi + 0x380]
        mov    dword ptr [esi + 0x374], eax
        mov    byte ptr [esi + 0x37c], cl
        mov    dword ptr [esi + 0x380], edx
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
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
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_620e
        mov    eax, dword ptr [g_007da998]
        push    eax
        push    0x7b3034
        push    0x525
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4a6370
        mov    dword ptr [esi + 0x18], 0x4a5da0
        mov    dword ptr [g_007da98c], esi
        pop    esi
        ret    
L_620e:
        mov    dword ptr [g_007da98c], 0
        pop    esi
        ret    
    }
}
