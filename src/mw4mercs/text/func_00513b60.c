/*
 * FUN_00513b60 (extent 0x513b60-0x513d1f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0d0;
extern int    g_0076b320;
extern float  g_00779d20;
extern int    g_007dab40;
extern int    g_007dab44;
extern float  g_007dd278;
extern void __cdecl FUN_00403350(void);
extern void __cdecl FUN_00513c30(void);
extern void __cdecl FUN_00523000(void);
extern void __cdecl FUN_006fcab0(void);
extern void __cdecl FUN_006fcb10(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00513b60(void)
{
    __asm {
        sub    esp, 0x100
        call    FUN_006fcb10
        cmp    eax, 3
        je    L_3c1e
        push    0
        call    FUN_00707e70
        fsub    qword ptr [g_007dd278]
        fcomp    qword ptr [g_00779d20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3c13
        push    esi
        push    edi
        push    0
        call    FUN_00707e70
        fstp    qword ptr [g_007dd278]
        call    FUN_00403350
        mov    edx, dword ptr [g_007dab40]
        mov    edi, eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    esi, dword ptr [edx + 0x50]
        mov    eax, dword ptr [esi + 0xa4]
        push    0x100
        push    eax
        call    FUN_00523000
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        call    FUN_00513c30
        add    esp, 0xc
        lea    edx, [esp + 8]
        push    edx
        push    0x79fa6c
        push    0
        call    FUN_006fcab0
        add    esi, 0x378
        push    esi
        push    0x79fa2c
        push    0
        call    FUN_006fcab0
        mov    eax, edi
        pop    edi
        pop    esi
        add    esp, 0x100
        ret    0xc
L_3c13:
        xor    eax, eax
        add    esp, 0x100
        ret    0xc
L_3c1e:
        mov    eax, 1
        add    esp, 0x100
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    edi
        push    eax
        push    esi
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        test    esi, esi
        mov    ebx, eax
        je    L_3c85
        mov    byte ptr [esi + edi - 1], 0
        cmp    byte ptr [esi], 0
        je    L_3c85
        mov    edi, dword ptr [g_0076b0d0]
L_3c61:
        xor    ecx, ecx
        mov    cl, byte ptr [esi]
        push    ecx
        call    edi
        test    eax, eax
        je    L_3c74
        mov    al, byte ptr [esi + 1]
        test    al, al
        je    L_3c82
        inc    esi
L_3c74:
        mov    al, byte ptr [esi + 1]
        inc    esi
        test    al, al
        jne    L_3c61
        pop    edi
        pop    esi
        mov    eax, ebx
        pop    ebx
        ret    
L_3c82:
        mov    byte ptr [esi], 0
L_3c85:
        pop    edi
        pop    esi
        mov    eax, ebx
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x3534]
        ret    0xc
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        cmp    ecx, dword ptr [eax + 0x205524]
        mov    dword ptr [edx], 0
        jl    L_3ce5
        xor    eax, eax
        pop    esi
        ret    0xc
L_3ce5:
        mov    esi, dword ptr [eax + ecx*4 + 0x205128]
        mov    eax, dword ptr [eax + ecx*4 + 0x204d2c]
        mov    dword ptr [edx], esi
        pop    esi
        ret    0xc
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
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x205524]
        ret    0xc
    }
}
