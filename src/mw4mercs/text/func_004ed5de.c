/*
 * FUN_004ed5de (extent 0x4ed5de-0x4ed833) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_00858940;
extern int    g_00858944;
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_004122e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00729ae0(void);

__declspec(naked) void FUN_004ed5de(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004d5b10
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x24], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x28], eax
        mov    eax, dword ptr [esp + 0x14]
        lea    ecx, [esi + 0x34]
        xor    ebx, ebx
        mov    dword ptr [ecx], ebx
        mov    dword ptr [esi + 0x38], ebx
        push    eax
        mov    dword ptr [esi], 0x774928
        mov    dword ptr [esi + 0x10], edx
        call    FUN_00412780
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x1c]
        mov    al, 1
        mov    byte ptr [esi + 0x2c], al
        mov    byte ptr [esi + 0x2e], al
        mov    eax, 0x3f800000
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x28], eax
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x24], eax
        mov    byte ptr [esi + 0x2f], bl
        mov    byte ptr [esi + 0x30], bl
        mov    byte ptr [esi + 0x2d], bl
        mov    dword ptr [esi + 0x3c], ecx
        mov    dword ptr [esi + 0x40], edx
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_004d5b10
        mov    edi, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [edi + 0x14]
        mov    eax, 0xbf800000
        lea    ebx, [esi + 0x1c]
        mov    dword ptr [ebx], eax
        mov    dword ptr [esi + 0x34], 0
        lea    ecx, [esi + 0x38]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [ebx + 8], eax
        mov    dword ptr [ebx + 4], eax
        mov    dword ptr [ebx + 0xc], eax
        mov    dword ptr [esi], 0x774928
        call    FUN_00412780
        push    1
        lea    eax, [esi + 0x14]
        push    eax
        push    0x7749f4
        mov    ecx, edi
        call    FUN_00411bf0
        mov    eax, dword ptr [esi + 0x14]
        push    0
        push    0x100
        push    0
        push    eax
        call    FUN_00729ae0
        push    0
        lea    ecx, [ebp + 8]
        push    ecx
        push    0x7749f4
        mov    ecx, edi
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [ebp + 8], 0x76b768
        call    FUN_00411bf0
        mov    edx, dword ptr [ebp + 8]
        push    edx
        lea    ecx, [esi + 0x34]
        call    FUN_00412780
        lea    eax, [esi + 0x2c]
        push    0
        push    eax
        push    0x7749e4
        mov    ecx, edi
        mov    byte ptr [eax], 1
        call    FUN_00411ec0
        push    1
        lea    eax, [esi + 0x3c]
        push    eax
        push    0x7749d8
        mov    ecx, edi
        call    FUN_00411cb0
        mov    eax, dword ptr [esi + 0x3c]
        test    eax, eax
        mov    ecx, dword ptr [g_00858940]
        jl    L_d72a
        cmp    eax, ecx
        jle    L_d741
L_d72a:
        mov    eax, dword ptr [esi + 0x38]
        push    ecx
        push    eax
        push    0x7749b0
        call    FUN_006fab90
        add    esp, 0xc
        test    eax, eax
        je    L_d741
        int 3    
L_d741:
        push    1
        lea    eax, [esi + 0x40]
        push    eax
        push    0x7749a4
        mov    ecx, edi
        call    FUN_00411cb0
        mov    eax, dword ptr [esi + 0x40]
        test    eax, eax
        mov    ecx, dword ptr [g_00858944]
        jl    L_d764
        cmp    eax, ecx
        jle    L_d77b
L_d764:
        push    ecx
        mov    ecx, dword ptr [esi + 0x38]
        push    ecx
        push    0x77497c
        call    FUN_006fab90
        add    esp, 0xc
        test    eax, eax
        je    L_d77b
        int 3    
L_d77b:
        push    0
        mov    eax, 0x3f800000
        push    ebx
        push    0x76ff70
        mov    ecx, edi
        mov    dword ptr [esi + 0x28], eax
        mov    dword ptr [ebx], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x24], eax
        call    FUN_004122e0
        push    0
        lea    ebx, [esi + 0x18]
        push    ebx
        push    0x7749e4
        mov    ecx, edi
        mov    dword ptr [ebx], 0x3f800000
        call    FUN_00411d60
        fld    dword ptr [ebx]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_d7d3
        push    0x774964
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_d7d3
        int 3    
L_d7d3:
        lea    eax, [esi + 0x2d]
        push    0
        push    eax
        push    0x774958
        mov    ecx, edi
        mov    byte ptr [eax], 0
        call    FUN_00411ec0
        lea    eax, [esi + 0x2e]
        push    0
        push    eax
        push    0x774948
        mov    ecx, edi
        mov    byte ptr [eax], 0
        call    FUN_00411ec0
        lea    eax, [esi + 0x2f]
        push    0
        push    eax
        push    0x774940
        mov    ecx, edi
        mov    byte ptr [eax], 0
        call    FUN_00411ec0
        lea    eax, [esi + 0x30]
        push    0
        push    eax
        push    0x774938
        mov    ecx, edi
        mov    byte ptr [eax], 0
        call    FUN_00411ec0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
        ret    4
    }
}
