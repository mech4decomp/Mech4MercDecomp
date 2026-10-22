/*
 * FUN_004869c6 (extent 0x4869c6-0x486b7a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004811a0(void);

__declspec(naked) void FUN_004869c6(void)
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
        push    ebp
        push    esi
        mov    ebp, ecx
        mov    esi, dword ptr [ebp + 4]
        cmp    esi, 0x20
        push    edi
        je    L_6a58
        push    0x200
        call    FUN_004084d0
        mov    edi, dword ptr [ebp]
        add    esp, 4
        test    edi, edi
        mov    ebx, eax
        je    L_6a4e
        cmp    esi, 0x20
        mov    edx, 0x20
        ja    L_6a10
        mov    edx, esi
L_6a10:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_6a45
        mov    ecx, edx
        shl    ecx, 4
        lea    eax, [ecx + edi]
        lea    ecx, [ecx + ebx + 8]
        inc    edx
L_6a24:
        mov    esi, dword ptr [eax]
        mov    dword ptr [ecx - 8], esi
        mov    esi, dword ptr [eax + 4]
        mov    dword ptr [ecx - 4], esi
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 4], esi
        dec    edx
        sub    eax, 0x10
        sub    ecx, 0x10
        test    edx, edx
        ja    L_6a24
L_6a45:
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6a4e:
        mov    dword ptr [ebp], ebx
        mov    dword ptr [ebp + 4], 0x20
L_6a58:
        mov    ebx, dword ptr [ebp + 0xc]
        cmp    ebx, 0x20
        je    L_6af4
        push    0x200
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6a97
        lea    ecx, [eax + 4]
        mov    esi, 0x20
        mov    edx, 0xbf800000
L_6a82:
        mov    dword ptr [ecx + 4], edx
        mov    dword ptr [ecx], edx
        mov    dword ptr [ecx - 4], edx
        mov    dword ptr [ecx + 8], edx
        add    ecx, 0x10
        dec    esi
        jne    L_6a82
        mov    edi, eax
        jmp    L_6a99
L_6a97:
        xor    edi, edi
L_6a99:
        mov    esi, dword ptr [ebp + 8]
        test    esi, esi
        je    L_6aea
        cmp    ebx, 0x20
        mov    edx, 0x20
        ja    L_6aac
        mov    edx, ebx
L_6aac:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_6ae1
        mov    ecx, edx
        shl    ecx, 4
        lea    eax, [ecx + esi]
        lea    ecx, [ecx + edi + 8]
        inc    edx
L_6ac0:
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx - 8], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [ecx - 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 4], ebx
        dec    edx
        sub    eax, 0x10
        sub    ecx, 0x10
        test    edx, edx
        ja    L_6ac0
L_6ae1:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6aea:
        mov    dword ptr [ebp + 8], edi
        mov    dword ptr [ebp + 0xc], 0x20
L_6af4:
        mov    ebx, dword ptr [ebp + 0x14]
        cmp    ebx, 0x20
        je    L_6b6b
        push    0x100
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6b20
        push    0x423b70
        push    0x20
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_6b22
L_6b20:
        xor    esi, esi
L_6b22:
        mov    edi, dword ptr [ebp + 0x10]
        test    edi, edi
        je    L_6b61
        cmp    ebx, 0x20
        mov    edx, 0x20
        ja    L_6b35
        mov    edx, ebx
L_6b35:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_6b58
        mov    ecx, edi
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_6b44:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_6b44
L_6b58:
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6b61:
        mov    dword ptr [ebp + 0x10], esi
        mov    dword ptr [ebp + 0x14], 0x20
L_6b6b:
        push    0x20
        lea    ecx, [ebp + 0x18]
        call    FUN_004811a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
    }
}
