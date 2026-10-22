/*
 * FUN_00688866 (extent 0x688866-0x688a33) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f24d8;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00689410(void);
extern void __cdecl FUN_006b0460(void);
extern void __cdecl FUN_006b0520(void);
extern void __cdecl FUN_006b0750(void);
extern void __cdecl FUN_006b0780(void);

__declspec(naked) void FUN_00688866(void)
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    4
        lea    ecx, [edi + 0x24]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x28]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    8
        lea    eax, [edi + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    0xc
        lea    eax, [edi + 0x34]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x40]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ebx, dword ptr [edi + 0x20]
        test    ebx, ebx
        je    L_88ef
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 1
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        add    ebx, 0x30
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        mov    ecx, edi
        call    FUN_006b0460
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_88ef:
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 0
        call    dword ptr [eax + 0x24]
        push    esi
        mov    ecx, edi
        call    FUN_006b0460
        pop    edi
        pop    esi
        pop    ebx
        ret    4
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    4
        lea    ecx, [edi + 0x24]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x28]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    8
        lea    eax, [edi + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    0xc
        lea    eax, [edi + 0x34]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x40]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        mov    dword ptr [edi + 0x20], 0
        je    L_89a9
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    dword ptr [edi + 0x20], eax
L_89a9:
        push    esi
        mov    ecx, edi
        call    FUN_006b0520
        pop    edi
        pop    esi
        pop    ecx
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
        mov    eax, dword ptr [g_007f24d8]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_89f0
        mov    eax, dword ptr [edi + 0x170]
        push    edi
        mov    ecx, esi
        mov    dword ptr [esi + 0x20], eax
        call    FUN_006b0750
        pop    edi
        pop    esi
        ret    4
L_89f0:
        push    edi
        mov    ecx, esi
        mov    dword ptr [esi + 0x20], edi
        call    FUN_006b0750
        pop    edi
        pop    esi
        ret    4
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        push    edi
        push    ebx
        mov    esi, ecx
        push    ebp
        call    FUN_006b0780
        push    edi
        xor    eax, eax
        push    ebx
        mov    dword ptr [esi + 0x2c], eax
        push    ebp
        mov    ecx, esi
        mov    dword ptr [esi + 0x30], eax
        call    FUN_00689410
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
    }
}
