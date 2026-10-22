/*
 * FUN_004b6b2b (extent 0x4b6b2b-0x4b6c96) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007daa1c;
extern int    g_007daa20;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b68e0(void);
extern void __cdecl FUN_004bf310(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004b6b2b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007daa1c]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x164
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6b75
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [g_007daa20]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004b68e0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_6b75:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004bf310
        mov    eax, dword ptr [edi]
        push    1
        lea    ecx, [esi + 0x150]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    1
        lea    ecx, [esi + 0x151]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x154]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x158]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x15c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    esi, 0x160
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
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
        mov    edx, dword ptr [esp + 4]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x151]
        and    edx, 0xff
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        imul    eax, edx
        mov    edx, dword ptr [esp + 0xc]
        and    edx, 0xff
        add    eax, edx
        mov    edx, dword ptr [ecx + 0x144]
        mov    dword ptr [edx + eax*4], esi
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [esi + 0x18]
        mov    eax, ecx
        and    eax, 0xc0
        cmp    al, 0xc0
        je    L_6c92
        fld    dword ptr [esi + 0xec]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_6c78
        mov    edx, ecx
        shr    edx, 3
        test    dl, 1
        jne    L_6c78
        and    ecx, 0xffffffbf
        or    ecx, 0x80
        jmp    L_6c81
L_6c78:
        and    ecx, 0xffffff7f
        or    ecx, 0x44
L_6c81:
        mov    eax, dword ptr [esi]
        mov    dword ptr [esi + 0x18], ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
L_6c92:
        pop    esi
        ret    0xc
    }
}
