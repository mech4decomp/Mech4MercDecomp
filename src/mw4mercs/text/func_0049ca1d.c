/*
 * FUN_0049ca1d (extent 0x49ca1d-0x49ca5d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00494960(void);
extern void __cdecl FUN_00494b90(void);

__declspec(naked) void FUN_0049ca1d(void)
{
    __asm {
        nop    
        nop    
        nop    
        jmp    FUN_00494b90
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
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0xa4]
        push    edi
        xor    edi, edi
        test    eax, eax
        jbe    L_ca53
L_ca40:
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x1c]
        mov    eax, dword ptr [esi + 0xa4]
        inc    edi
        cmp    edi, eax
        jb    L_ca40
L_ca53:
        mov    ecx, esi
        call    FUN_00494960
        pop    edi
        pop    esi
        ret    
    }
}
