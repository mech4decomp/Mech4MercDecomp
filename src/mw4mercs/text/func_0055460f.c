/*
 * FUN_0055460f (extent 0x55460f-0x55466f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0054c4d0(void);

__declspec(naked) void FUN_0055460f(void)
{
    __asm {
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_466b
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_466b
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_466b
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle    L_466b
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [eax + 4]
        push    3
        mov    ecx, esi
        call    FUN_0054c4d0
L_466b:
        pop    esi
        ret    4
    }
}
