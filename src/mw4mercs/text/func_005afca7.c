/*
 * FUN_005afca7 (extent 0x5afca7-0x5afe06) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f20ec;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005afd20(void);
extern void __cdecl FUN_005b1140(void);
extern void __cdecl FUN_005f8fa0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005afca7(void)
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
        push    0x628
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fceb
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f20ec]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005afd20
        mov    esi, eax
        jmp    L_fced
L_fceb:
        xor    esi, esi
L_fced:
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
        mov    edx, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005b1140
        xor    ebx, ebx
        mov    dword ptr [esi + 0x61c], ebx
        push    0x783c84
        mov    ecx, esi
        mov    dword ptr [esi], 0x785db4
        mov    byte ptr [esi + 0x624], bl
        mov    dword ptr [esi + 0x5e8], 4
        mov    dword ptr [esi + 0x5f4], ebx
        mov    byte ptr [esi + 0x608], 1
        mov    dword ptr [esi + 0x620], ebx
        call    FUN_005f8fa0
        push    0x783c74
        mov    ecx, esi
        mov    dword ptr [esi + 0x5f8], eax
        call    FUN_005f8fa0
        push    0x783c64
        mov    ecx, esi
        mov    dword ptr [esi + 0x5fc], eax
        call    FUN_005f8fa0
        push    0x783c54
        mov    ecx, esi
        mov    dword ptr [esi + 0x600], eax
        call    FUN_005f8fa0
        cmp    dword ptr [esi + 0x5f8], ebx
        mov    dword ptr [esi + 0x604], eax
        mov    byte ptr [esi + 0x609], bl
        je    L_fde1
        cmp    dword ptr [esi + 0x5fc], ebx
        je    L_fde1
        cmp    dword ptr [esi + 0x600], ebx
        je    L_fde1
        cmp    eax, ebx
        je    L_fde1
        mov    byte ptr [esi + 0x609], 1
L_fde1:
        mov    dword ptr [esi + 0x60c], ebx
        mov    dword ptr [esi + 0x610], ebx
        mov    dword ptr [esi + 0x614], ebx
        mov    dword ptr [esi + 0x618], ebx
        mov    byte ptr [esi + 0x625], bl
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x10
    }
}
