/*
 * FUN_004f22b6 (extent 0x4f22b6-0x4f2361) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004f22b6(void)
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
        jbe    L_2327
L_22fb:
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
        push    ebp
        lea    ecx, [eax + 0x24]
        call    FUN_004179b0
        mov    eax, dword ptr [esp + 0x1c]
        inc    ebx
        cmp    ebx, eax
        jb    L_22fb
L_2327:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
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
        nop    
        nop    
        ret    
    }
}
