/*
 * FUN_004cfbb8 (extent 0x4cfbb8-0x4cfc2f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2a0;
extern int    g_0076b2cc;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004cfbb8(void)
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
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        push    edi
        push    ecx
        call    dword ptr [g_0076b2cc]
        mov    edi, eax
        push    0x5c
        push    edi
        call    dword ptr [g_0076b2a0]
        add    esp, 0xc
        test    eax, eax
        je    L_fbfb
        mov    byte ptr [eax + 1], 0
        jmp    L_fbfe
L_fbfb:
        mov    byte ptr [edi], 0
L_fbfe:
        mov    edx, dword ptr [esi + 8]
        mov    ecx, dword ptr [esi + 0xc]
        inc    edx
        mov    eax, edx
        cmp    eax, ecx
        mov    dword ptr [esi + 8], edx
        jne    L_fc20
        push    0x77238c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fc20
        int 3    
L_fc20:
        mov    edx, dword ptr [esi + 8]
        mov    eax, dword ptr [esi + 4]
        mov    dword ptr [eax + edx*4], edi
        pop    edi
        pop    esi
        pop    ebp
        ret    4
    }
}
