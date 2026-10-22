/*
 * FUN_004a7183 (extent 0x4a7183-0x4a7264) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da884;
extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004a7120(void);
extern void __cdecl FUN_004a99c0(void);
extern void __cdecl FUN_004ac1d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a7183(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xb0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_71c9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a7120
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_71c9:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
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
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        push    eax
        mov    esi, ecx
        push    edi
        call    FUN_004a99c0
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax + 0x270]
        mov    edx, dword ptr [esi + 0xa8]
        imul    ecx, edi
        mov    eax, dword ptr [eax + 0x2b8]
        pop    edi
        mov    dword ptr [ecx + edx + 0x68], eax
        pop    esi
        ret    8
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
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [esi + 0x2bc]
        test    ecx, ecx
        lea    eax, [esi + 0x2bc]
        je    L_7253
        mov    ecx, dword ptr [esi + 0x2b4]
        test    ecx, ecx
        jne    L_7253
        mov    ecx, dword ptr [g_007da884]
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 4]
        mov    dword ptr [esi + 0x2b4], eax
L_7253:
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, edi
        call    FUN_004ac1d0
        pop    edi
        pop    esi
        ret    4
    }
}
