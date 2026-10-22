/*
 * FUN_005a8c57 (extent 0x5a8c57-0x5a8cf1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f2094;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_005a8cb0(void);
extern void __cdecl FUN_005ec110(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005a8c57(void)
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
        push    0x248
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8ca2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2094]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005a8cb0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_8ca2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005ec110
        lea    edi, [esi + 0x234]
        push    0
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        pop    edi
        mov    dword ptr [esi], 0x785114
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
