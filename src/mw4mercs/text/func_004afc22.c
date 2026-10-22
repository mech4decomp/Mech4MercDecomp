/*
 * FUN_004afc22 (extent 0x4afc22-0x4afd63) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004afc22(void)
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
        push    0x7705d0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fc42
        int 3    
L_fc42:
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
        push    0x7705d0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fc62
        int 3    
L_fc62:
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x184]
        and    esi, 0xffff
        mov    ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        lea    ebx, [eax + esi*4]
        je    L_fca4
        dec    word ptr [ecx + 0x10]
        cmp    word ptr [ecx + 0x10], 0
        jne    L_fca4
        test    ecx, ecx
        je    L_fca4
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_fca4:
        mov    eax, dword ptr [esp + 0x14]
        inc    word ptr [eax + 0x10]
        mov    dword ptr [ebx], eax
        mov    eax, dword ptr [edi + 0x14c]
        shl    esi, 4
        add    esi, eax
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [esi], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [esi + 4], edx
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [esi + 8], ecx
        pop    edi
        mov    dword ptr [esi + 0xc], edx
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
        push    ebp
        mov    ebp, esp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x188]
        xor    edx, edx
        test    edi, edi
        jbe    L_fd0b
        mov    esi, dword ptr [ecx + 0x184]
        xor    eax, eax
L_fcf9:
        cmp    dword ptr [esi + eax*4], 0
        je    L_fd26
        inc    edx
        mov    eax, edx
        and    eax, 0xffff
        cmp    eax, edi
        jb    L_fcf9
L_fd0b:
        push    0x7705f4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fd1d
        int 3    
L_fd1d:
        pop    edi
        pop    esi
        or    eax, 0xffffffff
        pop    ebp
        ret    8
L_fd26:
        mov    eax, edx
        mov    edx, dword ptr [ebp + 8]
        and    eax, 0xffff
        inc    word ptr [edx + 0x10]
        mov    dword ptr [esi + eax*4], edx
        mov    esi, dword ptr [ecx + 0x14c]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, eax
        shl    edx, 4
        add    edx, esi
        mov    esi, dword ptr [ecx]
        mov    dword ptr [edx], esi
        mov    esi, dword ptr [ecx + 4]
        mov    dword ptr [edx + 4], esi
        mov    esi, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        pop    edi
        mov    dword ptr [edx + 8], esi
        pop    esi
        mov    dword ptr [edx + 0xc], ecx
        pop    ebp
        ret    8
    }
}
