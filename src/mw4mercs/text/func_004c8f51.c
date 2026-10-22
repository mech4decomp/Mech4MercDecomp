/*
 * FUN_004c8f51 (extent 0x4c8f51-0x4c902c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b00c;
extern int    g_0076b010;
extern int    g_0076b014;
extern char   g_007dac4c;
extern int    g_007dac50;
extern int    g_00858bf8;
extern int    g_0085a230;
extern void __cdecl FUN_00704820(void);

__declspec(naked) void FUN_004c8f51(void)
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
        nop    
        nop    
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
        mov    al, byte ptr [g_007dac4c]
        sub    esp, 0x410
        test    al, al
        jne    L_8f88
        xor    al, al
        add    esp, 0x410
        ret    
L_8f88:
        mov    eax, dword ptr [g_0085a230]
        test    eax, eax
        je    L_8f97
        mov    ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x28]
L_8f97:
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        push    0x7718a8
        push    0x80000002
        call    dword ptr [g_0076b014]
        test    eax, eax
        jne    L_900c
        lea    eax, [esp + 8]
        push    eax
        mov    eax, dword ptr [esp + 4]
        push    0
        push    0
        push    0
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x24]
        push    edx
        push    0
        push    eax
        mov    dword ptr [esp + 0x24], 0x400
        call    dword ptr [g_0076b010]
        test    eax, eax
        jne    L_9001
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        call    dword ptr [g_0076b00c]
        mov    edx, dword ptr [g_00858bf8]
        push    0
        push    edx
        call    dword ptr [g_007dac50]
        xor    al, al
        add    esp, 0x410
        ret    
L_9001:
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        call    dword ptr [g_0076b00c]
L_900c:
        push    0
        push    8
        call    FUN_00704820
        push    0
        push    0
        call    dword ptr [g_007dac50]
        neg    eax
        sbb    al, al
        inc    al
        add    esp, 0x410
        ret    
    }
}
