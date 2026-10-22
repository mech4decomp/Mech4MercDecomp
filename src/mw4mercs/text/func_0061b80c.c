/*
 * FUN_0061b80c (extent 0x61b80c-0x61b887) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0061af60(void);

__declspec(naked) void FUN_0061b80c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x2c]
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
        push    esi
        push    edi
        mov    esi, ecx
        call    FUN_0061af60
        push    0x28
        call    FUN_004084d0
        xor    edi, edi
        add    esp, 4
        cmp    eax, edi
        je    L_b843
        push    edi
        mov    ecx, eax
        call    FUN_0041ee70
        jmp    L_b845
L_b843:
        xor    eax, eax
L_b845:
        push    0x28
        mov    dword ptr [esi + 0x30], eax
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_b860
        push    edi
        mov    ecx, eax
        call    FUN_0041ee70
        jmp    L_b862
L_b860:
        xor    eax, eax
L_b862:
        mov    dword ptr [esi + 0x5bf8], edi
        mov    dword ptr [esi + 0x5bfc], edi
        mov    dword ptr [esi + 0x5c00], edi
        mov    dword ptr [esi + 0x5c04], edi
        pop    edi
        mov    dword ptr [esi + 0x34], eax
        mov    dword ptr [esi + 0x1c], 1
        pop    esi
        ret    
    }
}
