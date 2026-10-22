/*
 * FUN_004f57fc (extent 0x4f57fc-0x4f5957) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041b210(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0041fc90(void);

__declspec(naked) void FUN_004f57fc(void)
{
    __asm {
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
        push    esi
        mov    esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_5828
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_5828:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 8]
        mov    dl, byte ptr [ecx]
        mov    ecx, dword ptr [esp + 4]
        mov    byte ptr [eax + ecx], dl
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
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        add    eax, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [eax]
        xor    eax, eax
        mov    al, byte ptr [edx]
        mov    edx, ecx
        and    edx, 0xff
        sub    edx, eax
        mov    dword ptr [esp + 4], edx
        fild    dword ptr [esp + 4]
        fabs    
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_588f
        mov    eax, dword ptr [esp + 8]
        mov    byte ptr [eax], cl
        mov    al, 1
        ret    0x10
L_588f:
        xor    al, al
        ret    0x10
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
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    dl, byte ptr [eax + ecx]
        mov    eax, dword ptr [esp + 8]
        mov    byte ptr [eax], dl
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        add    esi, edx
        push    ecx
        push    esi
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_58fb
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi]
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    al, 1
        pop    esi
        ret    0x10
L_58fb:
        xor    al, al
        pop    esi
        ret    0x10
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        add    esi, edx
        push    ecx
        push    esi
        call    FUN_0041b210
        add    esp, 0xc
        test    al, al
        jne    L_5951
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi]
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        mov    al, 1
        pop    esi
        ret    0x10
L_5951:
        xor    al, al
        pop    esi
        ret    0x10
    }
}
