/*
 * FUN_005f3577 (extent 0x5f3577-0x5f36ba) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f25c0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_005f35f0(void);
extern void __cdecl FUN_005f37e0(void);
extern void __cdecl FUN_005f8320(void);
extern void __cdecl FUN_00637ac0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005f3577(void)
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
        push    0x514
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_35bb
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f25c0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005f35f0
        mov    esi, eax
        jmp    L_35bd
L_35bb:
        xor    esi, esi
L_35bd:
        call    FUN_006f49a0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 4]
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
        call    FUN_005f8320
        lea    edi, [esi + 0x4a8]
        xor    ebx, ebx
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        lea    edi, [esi + 0x4b4]
        push    ebx
        mov    ecx, edi
        mov    word ptr [esi + 0x4b0], 0xffff
        mov    word ptr [esi + 0x4b2], bx
        call    FUN_0041fc80
        or    eax, 0xffffffff
        mov    dword ptr [edi], 0x77ceac
        mov    dword ptr [esi + 0x4fc], ebx
        mov    dword ptr [esi + 0x4f4], eax
        mov    dword ptr [esi + 0x4f8], eax
        mov    dword ptr [esi + 0x500], ebx
        mov    dword ptr [esi], 0x78a618
        call    FUN_00637ac0
        push    ebp
        mov    ecx, esi
        call    FUN_005f37e0
        pop    edi
        mov    dword ptr [esi + 0x504], ebx
        mov    dword ptr [esi + 0x3b0], ebx
        mov    dword ptr [esi + 0x508], ebx
        mov    dword ptr [esi + 0x50c], ebx
        mov    dword ptr [esi + 0x4c8], ebx
        mov    byte ptr [esi + 0x510], bl
        mov    dword ptr [esi + 0x4cc], 8
        mov    dword ptr [esi + 0x458], 0x41a00000
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
    }
}
