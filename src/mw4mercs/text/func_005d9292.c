/*
 * FUN_005d9292 (extent 0x5d9292-0x5d93af) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00684de0(void);
extern void __cdecl FUN_00684ec0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d9292(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0x18]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 4], eax
        mov    eax, dword ptr [g_007f2464]
        push    edi
        push    eax
        mov    dword ptr [esi], 0x78829c
        mov    byte ptr [esi + 0x1d], 0
        mov    dword ptr [esi + 8], ecx
        mov    byte ptr [esi + 0xc], 0
        mov    dword ptr [esi + 0x18], edx
        mov    byte ptr [esi + 0x1c], 1
        call    FUN_006f4950
        push    0x6c
        call    FUN_004084d0
        mov    edi, dword ptr [esp + 0x28]
        add    esp, 4
        test    eax, eax
        je    L_9306
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x1c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edi
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_00684ec0
        jmp    L_9308
L_9306:
        xor    eax, eax
L_9308:
        mov    dword ptr [esi + 0x10], eax
        call    FUN_006f49a0
        mov    dword ptr [esi + 0x28], edi
        pop    edi
        mov    dword ptr [esi + 0x14], 0
        mov    eax, esi
        pop    esi
        ret    0x20
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0x28]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 4], eax
        mov    eax, dword ptr [g_007f2464]
        push    edi
        xor    ebx, ebx
        push    eax
        mov    dword ptr [esi], 0x78829c
        mov    byte ptr [esi + 0x1d], bl
        mov    dword ptr [esi + 8], ecx
        mov    byte ptr [esi + 0xc], bl
        mov    byte ptr [esi + 0x1c], bl
        mov    dword ptr [esi + 0x18], edx
        call    FUN_006f4950
        push    0x6c
        call    FUN_004084d0
        mov    edi, dword ptr [esp + 0x3c]
        add    esp, 4
        cmp    eax, ebx
        je    L_9397
        mov    ecx, dword ptr [esp + 0x3c]
        push    ecx
        push    edi
        push    ebx
        lea    edx, [esp + 0x34]
        push    edx
        mov    edx, dword ptr [esp + 0x28]
        lea    ecx, [esp + 0x2c]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_00684de0
        jmp    L_9399
L_9397:
        xor    eax, eax
L_9399:
        mov    dword ptr [esi + 0x10], eax
        call    FUN_006f49a0
        mov    dword ptr [esi + 0x28], edi
        pop    edi
        mov    dword ptr [esi + 0x14], ebx
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x30
    }
}
