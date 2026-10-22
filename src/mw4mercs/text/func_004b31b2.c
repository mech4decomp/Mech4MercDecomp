/*
 * FUN_004b31b2 (extent 0x4b31b2-0x4b32d1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004b31b2(void)
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
        je    L_31d2
        int 3    
L_31d2:
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
        je    L_31f2
        int 3    
L_31f2:
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
        mov    eax, dword ptr [edi + 0x174]
        and    esi, 0xffff
        mov    ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        lea    ebx, [eax + esi*4]
        je    L_3234
        dec    word ptr [ecx + 0x10]
        cmp    word ptr [ecx + 0x10], 0
        jne    L_3234
        test    ecx, ecx
        je    L_3234
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_3234:
        mov    eax, dword ptr [esp + 0x14]
        inc    word ptr [eax + 0x10]
        mov    ecx, dword ptr [edi + 0x17c]
        mov    dword ptr [ebx], eax
        mov    eax, dword ptr [esp + 0x18]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx + esi*8], edx
        pop    edi
        mov    dword ptr [ecx + esi*8 + 4], eax
        pop    esi
        pop    ebx
        ret    0xc
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
        mov    edi, dword ptr [ecx + 0x178]
        xor    eax, eax
        test    edi, edi
        jbe    L_328c
        mov    esi, dword ptr [ecx + 0x174]
        xor    edx, edx
L_3279:
        cmp    dword ptr [esi + edx*4], 0
        je    L_32a7
        inc    eax
        mov    edx, eax
        and    edx, 0xffff
        cmp    edx, edi
        jb    L_3279
L_328c:
        push    0x7706b0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_329e
        int 3    
L_329e:
        pop    edi
        pop    esi
        or    eax, 0xffffffff
        pop    ebp
        ret    8
L_32a7:
        mov    edx, dword ptr [ebp + 8]
        and    eax, 0xffff
        inc    word ptr [edx + 0x10]
        mov    dword ptr [esi + eax*4], edx
        mov    edx, dword ptr [ecx + 0x17c]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    esi, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + 4]
        pop    edi
        mov    dword ptr [edx + eax*8], esi
        pop    esi
        mov    dword ptr [edx + eax*8 + 4], ecx
        pop    ebp
        ret    8
    }
}
