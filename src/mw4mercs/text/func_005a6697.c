/*
 * FUN_005a6697 (extent 0x5a6697-0x5a67d3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dd234;
extern int    g_007f206c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_005a66f0(void);
extern void __cdecl FUN_005a6820(void);
extern void __cdecl FUN_005f0740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005a6697(void)
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
        push    0x1c8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_66e2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f206c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005a66f0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_66e2:
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
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    ebp
        push    edx
        mov    ecx, esi
        call    FUN_005f0740
        or    eax, 0xffffffff
        xor    ebx, ebx
        lea    edi, [esi + 0x184]
        mov    word ptr [esi + 0x17c], ax
        mov    word ptr [esi + 0x17e], bx
        push    ebx
        mov    ecx, edi
        mov    word ptr [esi + 0x180], ax
        mov    word ptr [esi + 0x182], bx
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        lea    edi, [esi + 0x18c]
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        lea    edi, [esi + 0x194]
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        lea    edi, [esi + 0x19c]
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        push    ebp
        mov    ecx, esi
        mov    dword ptr [esi], 0x784a38
        call    FUN_005a6820
        mov    eax, dword ptr [g_007db0ac]
        mov    cx, word ptr [g_007db0ae]
        mov    word ptr [esi + 0x17c], ax
        pop    edi
        mov    word ptr [esi + 0x17e], cx
        mov    word ptr [esi + 0x180], ax
        mov    dword ptr [esi + 0x1a4], ebx
        mov    dword ptr [esi + 0x1a8], ebx
        mov    dword ptr [esi + 0x1b0], ebx
        mov    word ptr [esi + 0x182], cx
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
    }
}
