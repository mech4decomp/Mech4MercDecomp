/*
 * FUN_006b3772 (extent 0x6b3772-0x6b3a52) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc728;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_004b6ca0(void);
extern void __cdecl FUN_006b36f0(void);
extern void __cdecl FUN_006b3750(void);
extern void __cdecl FUN_006b39c0(void);
extern void __cdecl FUN_006b3a60(void);
extern void __cdecl FUN_006b3b00(void);

__declspec(naked) void FUN_006b3772(void)
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
        sub    esp, 8
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    0xb
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x10], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 8]
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_006b36f0
        mov    esi, dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x18]
        push    0
        push    esi
        push    edi
        push    ecx
        push    edx
        call    FUN_006b3a60
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [eax + esi*4 + 0x9098]
        add    eax, 0x9090
        add    edx, 0xb
        mov    dword ptr [eax + esi*4 + 8], edx
        mov    ecx, dword ptr [eax + 0xc00]
        add    esp, 0x20
        add    ecx, 0xb
        pop    edi
        mov    dword ptr [eax + 0xc00], ecx
        pop    esi
        add    esp, 8
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
        sub    esp, 8
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    0xb
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x10], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 8]
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_006b36f0
        mov    esi, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x18]
        push    1
        push    esi
        push    edi
        push    ecx
        push    edx
        call    FUN_006b3a60
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [eax + esi*4 + 0x9098]
        add    eax, 0x9090
        add    edx, 0xb
        mov    dword ptr [eax + esi*4 + 8], edx
        mov    ecx, dword ptr [eax + 0xc00]
        add    esp, 0x20
        add    ecx, 0xb
        pop    edi
        mov    dword ptr [eax + 0xc00], ecx
        pop    esi
        add    esp, 8
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x524]
        add    eax, 0xb
        ret    
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        mov    ecx, dword ptr [esp + 0x18]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x14]
        xor    edx, 0x85739531
        push    esi
        push    edi
        mov    ecx, eax
        shl    ecx, 7
        add    ecx, eax
        shl    ecx, 3
        sub    ecx, eax
        lea    eax, [edx + ecx*8 + 0x3560]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 8]
        mov    ecx, edx
        mov    dword ptr [esp + 0x10], edx
        push    ecx
        mov    ecx, dword ptr [g_007dc728]
        mov    edx, eax
        push    edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_004b6ca0
        lea    ecx, [esp + 8]
        push    ecx
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_006b36f0
        mov    edi, dword ptr [esp + 0x30]
        add    esp, 0xc
        push    0xb
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    FUN_0041ec50
        mov    esi, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    ecx
        push    edx
        call    FUN_006b39c0
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [eax + esi*4 + 0x9098]
        add    eax, 0x9090
        add    edx, 0xb
        mov    dword ptr [eax + esi*4 + 8], edx
        mov    ecx, dword ptr [eax + 0xc00]
        add    esp, 0x10
        add    ecx, 0xb
        pop    edi
        mov    dword ptr [eax + 0xc00], ecx
        pop    esi
        add    esp, 0x14
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        xor    eax, eax
        mov    dword ptr [esp + 4], eax
        __emit 0x89  // mov dword ptr [esp], eax with explicit disp8=0 (MSVC6 drops the 00 byte)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    edi
        lea    eax, [esp + 4]
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        call    FUN_006b3750
        mov    eax, dword ptr [esp + 0x18]
        lea    ecx, [eax + 1]
        lea    edi, [eax - 1]
        add    esp, 8
        cmp    edi, ecx
        mov    dword ptr [esp + 0x10], ecx
        jg    L_3a4d
        mov    eax, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [esp + 0x20]
        push    ebp
        mov    ebp, dword ptr [esp + 0x20]
        push    esi
L_3a01:
        test    edi, edi
        jl    L_3a45
        cmp    edi, dword ptr [esp + 0x14]
        jge    L_3a45
        mov    edx, dword ptr [esp + 0x20]
        lea    esi, [edx - 1]
        lea    ecx, [edx + 1]
        cmp    esi, ecx
        jg    L_3a41
L_3a19:
        test    esi, esi
        jl    L_3a39
        cmp    esi, eax
        jge    L_3a39
        imul    eax, edi
        push    ebx
        add    eax, esi
        push    ebp
        push    eax
        call    FUN_006b3b00
        mov    eax, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x2c]
        add    esp, 0xc
L_3a39:
        inc    esi
        lea    ecx, [edx + 1]
        cmp    esi, ecx
        jle    L_3a19
L_3a41:
        mov    ecx, dword ptr [esp + 0x1c]
L_3a45:
        inc    edi
        cmp    edi, ecx
        jle    L_3a01
        pop    esi
        pop    ebp
        pop    ebx
L_3a4d:
        pop    edi
        add    esp, 8
        ret    
    }
}
