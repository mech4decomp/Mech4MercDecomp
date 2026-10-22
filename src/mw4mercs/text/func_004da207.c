/*
 * FUN_004da207 (extent 0x4da207-0x4da2e4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004ea3d0(void);
extern void __cdecl FUN_004ea800(void);

__declspec(naked) void FUN_004da207(void)
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
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ebx, dword ptr [ebp + 0x10]
        mov    eax, ebx
        shr    eax, 0xa
        test    al, 1
        je    L_a251
        push    esi
        mov    esi, dword ptr [ebp + 0xd8]
        mov    ecx, dword ptr [esi + 0x10]
        mov    edx, dword ptr [ecx + 0x10]
        push    edi
        mov    edi, dword ptr [edx + 0x10]
        mov    eax, dword ptr [edi]
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0xc]
        mov    edx, dword ptr [edi]
        and    ebx, 0xfffffbff
        push    esi
        mov    ecx, edi
        mov    dword ptr [ebp + 0x10], ebx
        call    dword ptr [edx + 8]
        mov    ecx, esi
        call    dword ptr [esi + 0x1c]
        pop    edi
        pop    esi
L_a251:
        pop    ebp
        pop    ebx
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
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ebx, dword ptr [ebp + 0x10]
        mov    eax, ebx
        shr    eax, 0xa
        test    al, 1
        jne    L_a29b
        push    esi
        mov    esi, dword ptr [ebp + 0xd8]
        push    edi
        mov    edi, dword ptr [esi + 0x10]
        mov    edx, dword ptr [edi]
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [edi]
        or    ebx, 0x400
        push    esi
        mov    ecx, edi
        mov    dword ptr [ebp + 0x10], ebx
        call    dword ptr [eax + 8]
        mov    ecx, esi
        call    dword ptr [esi + 0x1c]
        pop    edi
        pop    esi
L_a29b:
        pop    ebp
        pop    ebx
        ret    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0xd8]
        push    edi
        mov    edi, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [edi + 4]
        cmp    dword ptr [ecx], 0x234
        jne    L_a2be
        mov    edx, dword ptr [edi + 0x10]
        mov    edi, dword ptr [edx + 0x10]
L_a2be:
        push    esi
        mov    ecx, edi
        call    FUN_004ea800
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        and    eax, 0xffff0fff
        or    eax, ecx
        push    esi
        mov    ecx, edi
        mov    dword ptr [esi + 0x10], eax
        call    FUN_004ea3d0
        pop    edi
        pop    esi
        ret    4
    }
}
