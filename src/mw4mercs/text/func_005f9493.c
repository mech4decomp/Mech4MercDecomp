/*
 * FUN_005f9493 (extent 0x5f9493-0x5f9554) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005f8fa0(void);

__declspec(naked) void FUN_005f9493(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        call    FUN_005f8fa0
        ret    
        nop    
        mov    al, byte ptr [esp + 4]
        test    al, al
        je    L_94e3
        mov    eax, dword ptr [ecx + 0x10]
        shr    eax, 0x13
        test    al, 1
        je    L_94e3
        push    esi
        mov    esi, dword ptr [ecx + 0xd8]
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi]
        or    eax, 0xc0
        mov    ecx, esi
        mov    dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        pop    esi
L_94e3:
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
        push    edi
        mov    edi, dword ptr [ecx + 0x340]
        test    edi, edi
        je    L_9552
        push    esi
        mov    esi, dword ptr [edi + 0xd8]
        or    dword ptr [esi + 0x18], 0xc0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        mov    eax, dword ptr [edi + 0x124]
        test    eax, eax
        mov    cl, 0x80
        pop    esi
        je    L_9536
        mov    dl, byte ptr [eax + 0x9c]
        test    dl, cl
        jne    L_9536
        or    dl, cl
        mov    byte ptr [eax + 0x9c], dl
L_9536:
        mov    edi, dword ptr [edi + 0x128]
        test    edi, edi
        je    L_9552
        mov    al, byte ptr [edi + 0x9c]
        test    al, cl
        jne    L_9552
        or    al, cl
        mov    byte ptr [edi + 0x9c], al
L_9552:
        pop    edi
        ret    
    }
}
