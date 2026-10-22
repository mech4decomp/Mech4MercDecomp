/*
 * FUN_0059f028 (extent 0x59f028-0x59f10e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_0059f028(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_f047
        xor    eax, eax
        ret    8
L_f047:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_f076
        xor    eax, eax
        ret    8
L_f076:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    edx, edx
        or    eax, 0xffffffff
        mov    word ptr [esi + 0x14], ax
        mov    word ptr [esi + 0x18], ax
        mov    eax, dword ptr [esp + 0xc]
        mov    di, word ptr [eax + 0xb8]
        mov    word ptr [esi + 0x16], dx
        mov    word ptr [esi + 0x1a], dx
        mov    dword ptr [esi + 0x20], edx
        lea    ecx, [esi + 0x20]
        mov    dword ptr [esi], 0x7839a0
        mov    word ptr [esi + 0x14], di
        mov    di, word ptr [eax + 0xba]
        mov    word ptr [esi + 0x16], di
        mov    di, word ptr [eax + 0x74]
        mov    dword ptr [esi + 8], edx
        mov    dword ptr [esi + 0xc], edx
        mov    dword ptr [esi + 0x24], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x10], eax
        mov    ax, word ptr [eax + 0x76]
        push    edx
        mov    word ptr [esi + 0x18], di
        mov    word ptr [esi + 0x1a], ax
        mov    dword ptr [esi + 0x1c], 1
        call    FUN_00412780
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
    }
}
