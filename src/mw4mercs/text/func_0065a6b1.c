/*
 * FUN_0065a6b1 (extent 0x65a6b1-0x65a771) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f268c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_0063afb0(void);
extern void __cdecl FUN_0063b0a0(void);

__declspec(naked) void FUN_0065a6b1(void)
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
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        push    edi
        mov    edi, dword ptr [eax + 0x170]
        mov    ecx, dword ptr [edi + 0x30]
        push    2
        push    ecx
        call    FUN_0063afb0
        lea    edx, [esp + 0x14]
        push    edx
        push    2
        mov    bl, al
        call    FUN_0063b0a0
        add    esp, 0x10
        test    al, al
        jne    L_a6fb
        pop    edi
        xor    eax, eax
        test    bl, bl
        pop    esi
        sete    al
        pop    ebx
        pop    ecx
        ret    
L_a6fb:
        test    bl, bl
        je    L_a716
        mov    al, byte ptr [esi + 0x10]
        test    al, al
        jne    L_a716
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, dword ptr [edi + 0x30]
        je    L_a716
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    
L_a716:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        push    esi
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_a76d
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_a76d
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_a76d
        mov    eax, esi
        pop    esi
        ret    
L_a76d:
        xor    eax, eax
        pop    esi
        ret    
    }
}
