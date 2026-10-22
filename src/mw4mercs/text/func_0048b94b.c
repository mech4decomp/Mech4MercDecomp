/*
 * FUN_0048b94b (extent 0x48b94b-0x48ba47) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00491b20(void);

__declspec(naked) void FUN_0048b94b(void)
{
    __asm {
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
        push    ecx
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 4]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        cmp    ebp, eax
        mov    dword ptr [esp + 8], ebx
        je    L_ba41
        test    ebp, ebp
        jbe    L_ba2d
        push    esi
        mov    eax, ebp
        shl    eax, 5
        push    edi
        push    eax
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_b9b5
        lea    eax, [ebp - 1]
        test    eax, eax
        mov    esi, edi
        jl    L_b9b7
        lea    ebx, [eax + 1]
L_b9a2:
        mov    ecx, esi
        call    FUN_00491b20
        add    esi, 0x20
        dec    ebx
        jne    L_b9a2
        mov    ebx, dword ptr [esp + 0x10]
        jmp    L_b9b7
L_b9b5:
        xor    edi, edi
L_b9b7:
        mov    esi, dword ptr [ebx]
        test    esi, esi
        je    L_ba20
        mov    edx, dword ptr [ebx + 4]
        cmp    ebp, edx
        jae    L_b9c6
        mov    edx, ebp
L_b9c6:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_ba17
        mov    ecx, edx
        shl    ecx, 5
        lea    eax, [ecx + esi]
        lea    ecx, [ecx + edi + 8]
        inc    edx
L_b9da:
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx - 8], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [ecx - 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 4], ebx
        mov    ebx, dword ptr [eax + 0x10]
        mov    dword ptr [ecx + 8], ebx
        mov    ebx, dword ptr [eax + 0x14]
        mov    dword ptr [ecx + 0xc], ebx
        mov    ebx, dword ptr [eax + 0x18]
        mov    dword ptr [ecx + 0x10], ebx
        mov    ebx, dword ptr [eax + 0x1c]
        mov    dword ptr [ecx + 0x14], ebx
        dec    edx
        sub    eax, 0x20
        sub    ecx, 0x20
        test    edx, edx
        ja    L_b9da
        mov    ebx, dword ptr [esp + 0x10]
L_ba17:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_ba20:
        mov    dword ptr [ebx], edi
        pop    edi
        pop    esi
        mov    dword ptr [ebx + 4], ebp
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
L_ba2d:
        mov    edx, dword ptr [ebx]
        push    edx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx], 0
        mov    dword ptr [ebx + 4], ebp
L_ba41:
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
