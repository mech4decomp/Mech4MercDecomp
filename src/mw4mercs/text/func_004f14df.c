/*
 * FUN_004f14df (extent 0x4f14df-0x4f1563) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004f14df(void)
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
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esi]
        push    edi
        mov    ebp, ecx
        push    4
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edi, dword ptr [esp + 0x20]
        mov    ax, word ptr [edi + 0x16]
        mov    dx, word ptr [edi + 0x14]
        mov    word ptr [esp + 0x12], ax
        mov    eax, dword ptr [esp + 0x1c]
        xor    ebx, ebx
        test    eax, eax
        mov    word ptr [esp + 0x10], dx
        jle    L_1559
        add    ebp, 0x24
L_152e:
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x10]
        push    eax
        mov    ecx, ebp
        call    FUN_004179b0
        mov    eax, dword ptr [esp + 0x1c]
        inc    ebx
        cmp    ebx, eax
        jl    L_152e
L_1559:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
    }
}
