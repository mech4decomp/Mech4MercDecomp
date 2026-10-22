/*
 * FUN_0040deb8 (extent 0x40deb8-0x40df3b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040df40(void);

__declspec(naked) void FUN_0040deb8(void)
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
        push    ebx
        push    esi
        push    edi
        push    0xc
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        xor    ebx, ebx
        add    esp, 4
        cmp    esi, ebx
        je    L_df12
        mov    al, byte ptr [esp + 0x10]
        mov    byte ptr [esi], al
        push    0x18
        mov    dword ptr [esi], ebx
        call    FUN_004084d0
        mov    cl, byte ptr [esp + 0x14]
        mov    dword ptr [eax + 4], ebx
        mov    dword ptr [eax + 8], eax
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], ebx
        mov    byte ptr [esi + 8], cl
        mov    byte ptr [eax], bl
        mov    dword ptr [eax + 0xc], eax
        jmp    L_df14
L_df12:
        xor    esi, esi
L_df14:
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ebx
        mov    dword ptr [edi + 0x4c], esi
        mov    byte ptr [edi + 5], 1
        je    L_df32
        mov    edx, dword ptr [esp + 0x14]
        push    ebx
        push    ebx
        push    edx
        push    eax
        mov    ecx, edi
        call    FUN_0040df40
L_df32:
        mov    byte ptr [edi + 4], bl
        pop    edi
        pop    esi
        pop    ebx
        ret    8
    }
}
