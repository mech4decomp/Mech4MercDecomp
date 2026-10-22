/*
 * FUN_004c5db7 (extent 0x4c5db7-0x4c5eb3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004c5db7(void)
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
        push    0x771408
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5dd2
        int 3    
L_5dd2:
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
        push    0x771408
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5df2
        int 3    
L_5df2:
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
        push    ecx
        mov    eax, dword ptr [ecx + 0x14]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x144]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        xor    bl, bl
        mov    dword ptr [esp + 0x10], eax
L_5e18:
        test    ebp, ebp
        je    L_5e55
        mov    esi, dword ptr [ebp]
        test    esi, esi
        mov    ebp, dword ptr [ebp + 4]
        je    L_5e55
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x134]
        test    al, al
        je    L_5e18
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        test    al, al
        je    L_5e18
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        mov    bl, 1
        je    L_5e18
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [edi + 8], 0
        jmp    L_5e18
L_5e55:
        test    bl, bl
        je    L_5e60
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 8], eax
L_5e60:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, bl
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x144]
        mov    ebp, ecx
L_5e80:
        test    edi, edi
        je    L_5eaa
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_5eaa
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x138]
        test    al, 2
        je    L_5e80
        mov    eax, dword ptr [esi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        je    L_5e80
        mov    ebp, eax
        jmp    L_5e80
L_5eaa:
        pop    edi
        pop    esi
        mov    eax, ebp
        pop    ebp
        pop    ebx
        ret    4
    }
}
