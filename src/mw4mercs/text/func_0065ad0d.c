/*
 * FUN_0065ad0d (extent 0x65ad0d-0x65ae01) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f268c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_006533d0(void);

__declspec(naked) void FUN_0065ad0d(void)
{
    __asm {
        nop    
        nop    
        nop    
        push    0x5e
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        ret    
        nop    
        xor    al, al
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
        xor    al, al
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
        mov    eax, dword ptr [ecx + 4]
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [eax + 0x170]
        mov    ecx, dword ptr [esi + 0x3d4]
        test    ecx, ecx
        push    edi
        je    L_adee
        cmp    byte ptr [eax + 0x544], 1
        je    L_adee
        mov    ebp, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x1c]
        mov    ebx, dword ptr [esp + 0x18]
        push    ebp
        push    edi
        push    3
        push    ebx
        push    0x3f
        push    2
        push    esi
        call    FUN_006533d0
        add    esp, 0x1c
        test    eax, eax
        jg    L_ada5
        test    ebp, ebp
        je    L_adee
        push    0
        push    edi
        push    1
        push    ebx
        push    0x3f
        push    2
        push    esi
        call    FUN_006533d0
        add    esp, 0x1c
        test    eax, eax
        jle    L_adee
L_ada5:
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x10]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_adee
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_adee
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_adee
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_adee:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    0xc
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
