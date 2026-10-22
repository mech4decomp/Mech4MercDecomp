/*
 * FUN_00644efc (extent 0x644efc-0x6451a8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern int    g_007ddde0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_005614d0(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00644efc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        mov    esi, ecx
        lea    eax, [esi + 0x14]
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_0040c410
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_4f32
        fld    dword ptr [esp + 4]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 4]
L_4f32:
        fld    dword ptr [esp + 8]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_4f51
        fld    dword ptr [esp + 8]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 8]
L_4f51:
        add    esi, 0x20
        push    esi
        lea    ecx, [esp + 0x14]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076d064]
        pop    esi
        fnstsw  ax
        test    ah, 0x41
        je    L_4f76
        fmul    dword ptr [g_0077dff8]
L_4f76:
        fld    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_4f8d
        fmul    dword ptr [g_0077dff4]
L_4f8d:
        fadd    dword ptr [esp + 4]
        push    0x9600af00
        call    FUN_0075db4a
        fadd    dword ptr [esp + 4]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0xc]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0xc]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eb90
        add    esp, 0x2c
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
        sub    esp, 0x3c
        mov    eax, dword ptr [g_007ddde0]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00561430
        push    0x43800000
        push    0x43800000
        push    0x42ae0000
        push    0x42ce0000
        xor    ebx, ebx
        push    ebx
        push    0x42ba0000
        push    ebx
        push    0x792448
        mov    ecx, esi
        mov    dword ptr [esi], 0x792650
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43310000
        push    0x42ce0000
        push    0x42b20000
        push    0x42b80000
        push    1
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        lea    ecx, [esp + 0x24]
        push    ecx
        lea    ecx, [esi + 0x14]
        mov    dword ptr [esp + 0x28], 0x439e8000
        mov    dword ptr [esp + 0x2c], 0x43fa8000
        mov    dword ptr [esp + 0x30], 0x3f666666
        call    FUN_0040c410
        lea    edx, [esp + 0xc]
        push    edx
        lea    eax, [esp + 0x1c]
        lea    edi, [esi + 0x38]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x1c]
        mov    dword ptr [esp + 0x10], ecx
        push    edx
        mov    ecx, edi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_50a0
        mov    edx, dword ptr [esp + 0xc]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_50d7
L_50a0:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_50d7:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    edx, [esp + 0x30]
        fsub    dword ptr [eax + 4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        mov    dword ptr [esp + 0x3c], 0
        fstp    dword ptr [esp + 0x44]
        mov    ecx, dword ptr [esp + 0x44]
        mov    dword ptr [esp + 0x38], ecx
        lea    ecx, [esi + 0x20]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0040c410
        mov    dword ptr [esi + 0x54], ebx
        push    0x138
        mov    dword ptr [esi + 0x70], 0x58
        mov    dword ptr [esi + 0x50], 0xff
        mov    dword ptr [esi + 0x58], ebx
        mov    dword ptr [esi + 0x64], 0xffff0000
        mov    dword ptr [esi + 0x60], 0xffffff00
        mov    dword ptr [esi + 0x5c], 0xff009000
        mov    dword ptr [esi + 0x68], ebx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_515a
        push    ebx
        mov    ecx, eax
        call    FUN_00560190
        mov    edi, eax
        jmp    L_515c
L_515a:
        xor    edi, edi
L_515c:
        push    0x44014000
        push    0x43670000
        mov    ecx, edi
        mov    dword ptr [esi + 0x74], edi
        call    FUN_005603e0
        push    0x44070000
        push    0x43900000
        mov    ecx, edi
        call    FUN_00560400
        push    ebx
        push    ebx
        mov    dword ptr [edi + 0x10c], ebx
        push    0x79264c
        mov    ecx, edi
        mov    dword ptr [edi + 0x104], 0xffffffff
        call    FUN_00560420
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        add    esp, 0x3c
        ret    
    }
}
