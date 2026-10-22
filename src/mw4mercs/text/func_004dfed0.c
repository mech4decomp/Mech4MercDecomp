/*
 * FUN_004dfed0 (extent 0x4dfed0-0x4e003e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007739e0;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc6d4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004174f0(void);
extern void __cdecl FUN_00417670(void);
extern void __cdecl FUN_00417700(void);
extern void __cdecl FUN_004ccde0(void);
extern void __cdecl FUN_004cd8e0(void);
extern void __cdecl FUN_004e0990(void);
extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_004d6350(void);

__declspec(naked) void FUN_004dfed0(void)
{
    __asm {
        push    esi
        mov    esi, dword ptr [ecx + 0x20]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 8]
        mov    ecx, esi
        call    FUN_00417700
        test    eax, eax
        je    L_fef8
L_fee6:
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 4]
        mov    ecx, esi
        call    FUN_00417700
        test    eax, eax
        jne    L_fee6
L_fef8:
        xor    al, al
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        call    FUN_00707e90
        fadd    qword ptr [g_007739e0]
        fstp    qword ptr [esp + 4]
L_ff13:
        mov    ecx, dword ptr [g_007dc6d4]
        push    0
        call    FUN_004e0990
        mov    bl, al
        test    bl, bl
        je    L_ff36
        call    FUN_00707e90
        fcomp    qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        jne    L_ff13
L_ff36:
        mov    al, bl
        pop    ebx
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        jmp    FUN_004d6350
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        je    L_ffae
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004ccde0
        test    al, al
        je    L_ffae
L_ff8c:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004ccde0
        test    al, al
        jne    L_ff8c
L_ffae:
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
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x14]
        je    L_ffe8
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        call    FUN_004cd8e0
L_ffe8:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x18
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0017
        push    edi
        mov    ecx, esi
        call    FUN_00417670
        pop    edi
        mov    dword ptr [esi], 0x773988
        mov    eax, esi
        pop    esi
        ret    
L_0017:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004174f0
        test    byte ptr [esp + 8], 1
        je    L_0038
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0038:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
