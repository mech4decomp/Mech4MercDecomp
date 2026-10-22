/*
 * FUN_005f0697 (extent 0x5f0697-0x5f073b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f25b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d9400(void);
extern void __cdecl FUN_005f0740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005f0697(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x17c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_06e2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f25b4]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005f0740
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_06e2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi]
        mov    esi, ecx
        push    0x6c
        mov    ecx, edi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004d9400
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x16c]
        mov    dl, byte ptr [esi + 0x170]
        mov    dword ptr [eax + 0x60], ecx
        mov    ecx, dword ptr [esi + 0x168]
        pop    edi
        mov    dword ptr [eax], 0x6c
        mov    byte ptr [eax + 0x64], dl
        mov    dword ptr [eax + 0x68], ecx
        pop    esi
        ret    8
    }
}
