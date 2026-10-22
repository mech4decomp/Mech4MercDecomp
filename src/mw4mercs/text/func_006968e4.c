/*
 * FUN_006968e4 (extent 0x6968e4-0x696aae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00547c60(void);
extern void __cdecl FUN_00696aa0(void);
extern void __cdecl FUN_00696db0(void);
extern void __cdecl FUN_00696ef0(void);

__declspec(naked) void FUN_006968e4(void)
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
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x11], al
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x11]
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
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x12], al
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x12]
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
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x13], al
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x13]
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
        sub    esp, 0xc
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        lea    eax, [ecx + 0x18]
        cmp    eax, ebx
        push    esi
        push    edi
        je    L_6a8f
        mov    ecx, dword ptr [eax + 4]
        mov    esi, dword ptr [eax]
        cmp    esi, ecx
        mov    ebp, dword ptr [ebx]
        mov    dword ptr [esp + 0x20], ecx
        mov    edi, ebp
        je    L_698e
        mov    eax, dword ptr [ebx + 4]
L_697a:
        cmp    edi, eax
        je    L_698a
        mov    dl, byte ptr [esi]
        inc    esi
        mov    byte ptr [edi], dl
        inc    edi
        cmp    esi, ecx
        jne    L_697a
        jmp    L_698e
L_698a:
        cmp    esi, ecx
        jne    L_69bb
L_698e:
        mov    eax, dword ptr [ebx + 4]
        cmp    edi, eax
        je    L_6a8f
        mov    esi, eax
        sub    esi, eax
        lea    ecx, [esi + 1]
        push    ecx
        push    eax
        push    edi
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
        add    esi, edi
        pop    edi
        mov    dword ptr [ebx + 4], esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    4
L_69bb:
        mov    edi, ecx
        mov    ecx, dword ptr [ebx + 8]
        sub    eax, ebp
        sub    ecx, ebp
        sub    edi, esi
        mov    dword ptr [esp + 0x18], ecx
        lea    edx, [edi + eax]
        dec    ecx
        cmp    edx, ecx
        mov    dword ptr [esp + 0x14], eax
        jbe    L_6a65
        cmp    eax, edi
        mov    dword ptr [esp + 0x10], edi
        lea    ecx, [esp + 0x10]
        jb    L_69ea
        lea    ecx, [esp + 0x14]
L_69ea:
        mov    ecx, dword ptr [ecx]
        lea    eax, [ecx + eax + 1]
        test    eax, eax
        mov    dword ptr [esp + 0x14], eax
        je    L_6a05
        push    eax
        call    FUN_00696aa0
        add    esp, 4
        mov    edi, eax
        jmp    L_6a07
L_6a05:
        xor    edi, edi
L_6a07:
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [ebx + 4]
        push    edx
        push    edi
        push    eax
        push    ebp
        call    FUN_00696ef0
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x30]
        push    ecx
        push    eax
        push    edx
        push    esi
        call    FUN_00696ef0
        mov    esi, eax
        lea    eax, [ebx + 8]
        push    0
        push    eax
        mov    byte ptr [esi], 0
        mov    dword ptr [esp + 0x48], eax
        call    FUN_00696db0
        mov    eax, dword ptr [esp + 0x40]
        push    eax
        push    ebp
        call    FUN_00547c60
        mov    ecx, dword ptr [esp + 0x44]
        mov    edx, dword ptr [esp + 0x50]
        add    esp, 0x30
        mov    dword ptr [ebx], edi
        add    edi, ecx
        mov    dword ptr [edx], edi
        pop    edi
        mov    dword ptr [ebx + 4], esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    4
L_6a65:
        mov    eax, dword ptr [esp + 0x20]
        mov    ebp, dword ptr [ebx + 4]
        mov    edx, dword ptr [esp + 0x20]
        push    eax
        lea    ecx, [ebp + 1]
        push    ecx
        push    edx
        lea    eax, [esi + 1]
        push    eax
        call    FUN_00696ef0
        add    esp, 0x10
        add    edi, ebp
        mov    byte ptr [edi], 0
        mov    cl, byte ptr [esi]
        mov    byte ptr [ebp], cl
        mov    dword ptr [ebx + 4], edi
L_6a8f:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004084d0
        add    esp, 4
        ret    
    }
}
