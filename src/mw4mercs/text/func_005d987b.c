/*
 * FUN_005d987b (extent 0x5d987b-0x5d9918) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00685050(void);
extern void __cdecl FUN_006850b0(void);
extern void __cdecl FUN_0068f420(void);

__declspec(naked) void FUN_005d987b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jne    L_988e
        xor    al, al
        ret    8
L_988e:
        mov    dl, byte ptr [eax + 0xc]
        test    dl, dl
        je    L_989a
        xor    al, al
        ret    8
L_989a:
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_00685050
        mov    al, 1
        ret    8
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jne    L_98be
        xor    al, al
        ret    8
L_98be:
        mov    dl, byte ptr [eax + 0xc]
        test    dl, dl
        je    L_98ca
        xor    al, al
        ret    8
L_98ca:
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006850b0
        mov    al, 1
        ret    8
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 0x14]
        test    ecx, ecx
        jne    L_98ee
        xor    al, al
        ret    0x10
L_98ee:
        mov    dl, byte ptr [eax + 0xc]
        test    dl, dl
        je    L_98fa
        xor    al, al
        ret    0x10
L_98fa:
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        push    edx
        call    FUN_0068f420
        mov    al, 1
        ret    0x10
    }
}
