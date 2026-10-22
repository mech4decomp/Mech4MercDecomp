/*
 * FUN_006a0943 (extent 0x6a0943-0x6a09f9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_006a0943(void)
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
        mov    ecx, dword ptr [ecx + 0x14]
        test    ecx, 0xfffffffc
        je    L_0963
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        jmp    dword ptr [eax + 0x24]
L_0963:
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 4], eax
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esi], 0x799cd8
        push    0
        mov    dword ptr [esi + 8], ecx
        mov    dword ptr [esi + 0xc], edx
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 0x14], 0
        mov    dword ptr [esi + 0x18], 0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c]
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x20]
        mov    byte ptr [esi + 0x24], 0
        mov    dword ptr [esi], 0x799c9c
        mov    eax, esi
        pop    esi
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
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
        xor    al, al
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
        fld    dword ptr [g_0076c5b0]
        ret    4
    }
}
