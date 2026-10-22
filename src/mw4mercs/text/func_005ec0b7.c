/*
 * FUN_005ec0b7 (extent 0x5ec0b7-0x5ec196) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f259c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_005ec110(void);
extern void __cdecl FUN_005ec1c0(void);
extern void __cdecl FUN_005eeda0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005ec0b7(void)
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
        push    0x234
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c102
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f259c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005ec110
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_c102:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov    ecx, esi
        call    FUN_005eeda0
        xor    eax, eax
        lea    edi, [esi + 0x220]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esi + 0x1e0], eax
        mov    dword ptr [esi + 0x1e4], eax
        mov    dword ptr [esi + 0x1e8], eax
        mov    dword ptr [esi + 0x1f0], eax
        mov    dword ptr [esi + 0x1f4], 0x2000
        call    FUN_0041fc80
        lea    ecx, [esi + 0x214]
        lea    eax, [esi + 0x1f8]
        mov    dword ptr [esi + 0x1e4], ecx
        mov    dword ptr [edi], 0x789c78
        push    ebx
        mov    ecx, esi
        mov    dword ptr [esi], 0x789bac
        mov    dword ptr [esi + 0x1e0], eax
        call    FUN_005ec1c0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x10
    }
}
