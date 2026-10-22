/*
 * FUN_00546884 (extent 0x546884-0x5469a6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00546884(void)
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
        mov    eax, dword ptr [esp + 4]
        imul    eax, eax, 0x22ac
        push    esi
        mov    esi, dword ptr [eax + ecx + 0x205d24]
        test    esi, esi
        push    edi
        lea    edi, [eax + ecx]
        je    L_68e0
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        mov    dword ptr [esi + 8], 0xffffffec
        call    dword ptr [eax + 4]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        test    esi, esi
        je    L_68d6
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_68d6:
        mov    dword ptr [edi + 0x205d24], 0
L_68e0:
        mov    ecx, dword ptr [edi + 0x205d28]
        test    ecx, ecx
        je    L_68fa
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [edi + 0x205d28], 0
L_68fa:
        pop    edi
        pop    esi
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x3030], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x3038], edx
        mov    edx, dword ptr [g_007dab44]
        mov    dword ptr [ecx + 0x303c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        mov    edx, dword ptr [esp + 0x10]
        test    edx, edx
        mov    dword ptr [ecx + 0x302c], 1
        mov    dword ptr [ecx + 0x3034], 0
        mov    dword ptr [ecx + 0x3040], 0
        mov    dword ptr [ecx + 0x3044], 0
        mov    dword ptr [eax + 0x44], 1
        jle    L_697a
        dec    edx
        mov    dword ptr [eax + 0x38], 1
        mov    dword ptr [eax + 0x3c], edx
L_697a:
        or    eax, 0xffffffff
        mov    dword ptr [ecx + 0x3048], eax
        mov    dword ptr [ecx + 0x304c], eax
        mov    dword ptr [ecx + 0x3050], eax
        lea    eax, [ecx + 0x3054]
        or    ecx, 0xffffffff
        mov    dword ptr [eax], ecx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 0xc], ecx
        ret    0x10
    }
}
