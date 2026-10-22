/*
 * FUN_004a95d4 (extent 0x4a95d4-0x4a96ea) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern int    g_007da998;
extern int    g_007da9a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004abdc0(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a95d4(void)
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
        call    FUN_004abdc0
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [edi + 0x27c]
        mov    edx, dword ptr [edi + 0x288]
        mov    eax, dword ptr [edi + 0x284]
        mov    dword ptr [esi + 0x27c], ecx
        mov    cl, byte ptr [edi + 0x28c]
        mov    dword ptr [esi + 0x288], edx
        lea    edx, [edi + 0x294]
        mov    byte ptr [esi + 0x28c], cl
        push    edx
        lea    ecx, [esi + 0x294]
        mov    dword ptr [esi + 0x284], eax
        call    FUN_004ae4c0
        lea    eax, [edi + 0x2a0]
        push    eax
        lea    ecx, [esi + 0x2a0]
        call    FUN_004ae4c0
        mov    cl, byte ptr [edi + 0x2ac]
        mov    dl, byte ptr [edi + 0x2b0]
        mov    al, byte ptr [edi + 0x2b2]
        mov    byte ptr [esi + 0x2ac], cl
        mov    cl, byte ptr [edi + 0x2b3]
        mov    byte ptr [esi + 0x2b0], dl
        mov    dl, byte ptr [edi + 0x2b1]
        mov    byte ptr [esi + 0x2b2], al
        mov    byte ptr [esi + 0x2b3], cl
        mov    byte ptr [esi + 0x2b1], dl
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
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_96de
        mov    eax, dword ptr [g_007da9a0]
        push    eax
        push    0x7b30bc
        push    0x523
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0
        mov    dword ptr [esi + 0x18], 0
        mov    dword ptr [g_007da998], esi
        pop    esi
        ret    
L_96de:
        mov    dword ptr [g_007da998], 0
        pop    esi
        ret    
    }
}
