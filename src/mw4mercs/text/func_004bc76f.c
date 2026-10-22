/*
 * FUN_004bc76f (extent 0x4bc76f-0x4bc88b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004bcf70(void);
extern void __cdecl FUN_004bf380(void);

__declspec(naked) void FUN_004bc76f(void)
{
    __asm {
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        push    ebx
        mov    ebx, dword ptr [edx]
        mov    edx, dword ptr [edx + 4]
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x154]
        mov    esi, eax
        and    esi, 0xffff
        mov    dword ptr [edi + esi*8], ebx
        mov    dword ptr [edi + esi*8 + 4], edx
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        call    FUN_004bf380
        pop    edi
        pop    esi
        pop    ebx
        ret    0xc
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
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ebx, dword ptr [edi + 0x158]
        mov    esi, ebp
        and    esi, 0xffff
        cmp    esi, ebx
        je    L_c864
        test    esi, esi
        jbe    L_c845
        lea    eax, [esi*8]
        push    eax
        call    FUN_004084d0
        mov    ecx, dword ptr [edi + 0x154]
        add    esp, 4
        test    ecx, ecx
        mov    ebp, eax
        je    L_c839
        cmp    esi, ebx
        mov    edx, esi
        jb    L_c808
        mov    edx, ebx
L_c808:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_c82a
        lea    eax, [ebp + edx*8]
        sub    ecx, ebp
        inc    edx
L_c816:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_c816
L_c82a:
        mov    eax, dword ptr [edi + 0x154]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_c839:
        mov    dword ptr [edi + 0x154], ebp
        mov    ebp, dword ptr [esp + 0x14]
        jmp    L_c85e
L_c845:
        mov    ecx, dword ptr [edi + 0x154]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0x154], 0
L_c85e:
        mov    dword ptr [edi + 0x158], esi
L_c864:
        xor    ecx, ecx
        cmp    bp, cx
        jbe    L_c87c
        mov    eax, dword ptr [edi + 0x154]
L_c871:
        mov    dword ptr [eax], ecx
        mov    dword ptr [eax + 4], ecx
        add    eax, 8
        dec    esi
        jne    L_c871
L_c87c:
        push    ebp
        mov    ecx, edi
        call    FUN_004bcf70
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
