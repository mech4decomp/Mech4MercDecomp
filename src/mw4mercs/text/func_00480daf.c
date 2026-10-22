/*
 * FUN_00480daf (extent 0x480daf-0x481030) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004353a0(void);
extern void __cdecl FUN_004393d0(void);
extern void __cdecl FUN_0043d7f0(void);
extern void __cdecl FUN_00441700(void);
extern void __cdecl FUN_00444900(void);
extern void __cdecl FUN_00450120(void);
extern void __cdecl FUN_00453690(void);
extern void __cdecl FUN_00457c20(void);
extern void __cdecl FUN_0045d440(void);
extern void __cdecl FUN_00460d20(void);
extern void __cdecl FUN_00464830(void);
extern void __cdecl FUN_004675a0(void);
extern void __cdecl FUN_0046b200(void);
extern void __cdecl FUN_0046f080(void);
extern void __cdecl FUN_00472390(void);
extern void __cdecl FUN_00475c60(void);
extern void __cdecl FUN_00479b10(void);
extern void __cdecl FUN_0047f420(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00480daf(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        dec    eax
        shl    eax, 4
        mov    ecx, dword ptr [eax + 0x7da60c]
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [eax + 0x7da610]
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [eax + 0x7da614]
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx], eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        test    eax, eax
        je    L_0e83
        mov    edx, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        fst    dword ptr [ecx + 4]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fst    dword ptr [ecx + 0xc]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 8]
        fst    dword ptr [ecx + 0x14]
        fstp    dword ptr [ecx + 0x10]
        jbe    L_0e83
        push    esi
        mov    esi, eax
L_0e10:
        fld    dword ptr [edx]
        fcomp    dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        je    L_0e1f
        mov    eax, dword ptr [edx]
        mov    dword ptr [ecx], eax
L_0e1f:
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 1
        je    L_0e32
        mov    eax, dword ptr [edx + 4]
        mov    dword ptr [ecx + 8], eax
L_0e32:
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_0e45
        mov    eax, dword ptr [edx + 8]
        mov    dword ptr [ecx + 0x10], eax
L_0e45:
        fld    dword ptr [edx]
        fcomp    dword ptr [ecx + 4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0e56
        mov    eax, dword ptr [edx]
        mov    dword ptr [ecx + 4], eax
L_0e56:
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [ecx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0e69
        mov    eax, dword ptr [edx + 4]
        mov    dword ptr [ecx + 0xc], eax
L_0e69:
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [ecx + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0e7c
        mov    eax, dword ptr [edx + 8]
        mov    dword ptr [ecx + 0x14], eax
L_0e7c:
        add    edx, 0xc
        dec    esi
        jne    L_0e10
        pop    esi
L_0e83:
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
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0ea2
        int 3    
L_0ea2:
        xor    al, al
        ret    8
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
        mov    ecx, dword ptr [eax]
        add    ecx, -0x57
        cmp    ecx, 0x18
        ja    L_102b
        jmp    dword ptr [ecx*4 + 0x481030]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_0047f420
        add    esp, 8
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_00479b10
        add    esp, 8
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_00475c60
        add    esp, 8
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_00472390
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_0046f080
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_0046b200
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_004675a0
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_00464830
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_00460d20
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_0045d440
        add    esp, 8
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_00453690
        add    esp, 8
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_00450120
        add    esp, 8
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_00457c20
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_004393d0
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_004353a0
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_00444900
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_00441700
        add    esp, 0xc
        ret    
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ecx + 0x18]
        push    edx
        push    ecx
        push    eax
        call    FUN_0043d7f0
        add    esp, 0xc
        ret    
L_102b:
        xor    eax, eax
        ret    
        mov    edi, edi
        // jump-table data @ 0x00481030 (63 relocated pointers)
        __emit 0xC9
        __emit 0x0E
        __emit 0x48
        __emit 0x00
        __emit 0xDA
        __emit 0x0E
        __emit 0x48
        __emit 0x00
        __emit 0xEB
        __emit 0x0E
        __emit 0x48
        __emit 0x00
        __emit 0xFC
        __emit 0x0E
        __emit 0x48
        __emit 0x00
        __emit 0x11
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x26
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x2B
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0x2B
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0x2B
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0x3B
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x50
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x65
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x7A
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0xAD
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x8B
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x9C
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x2B
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0x2B
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0x2B
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0x2B
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0xEC
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x01
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0x16
        __emit 0x10
        __emit 0x48
        __emit 0x00
        __emit 0xC2
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0xD7
        __emit 0x0F
        __emit 0x48
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x09
        __emit 0x8D
        __emit 0x41
        __emit 0xA9
        __emit 0x83
        __emit 0xF8
        __emit 0x18
        __emit 0x77
        __emit 0x79
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x2C
        __emit 0x11
        __emit 0x48
        __emit 0x00
        __emit 0xB8
        __emit 0x48
        __emit 0xF9
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x34
        __emit 0xF9
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x20
        __emit 0xF9
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0xFC
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0xDC
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0xC0
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x9C
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x78
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x58
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x3C
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x1C
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x00
        __emit 0xF8
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0xE8
        __emit 0xF7
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0xC0
        __emit 0xF7
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x9C
        __emit 0xF7
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x78
        __emit 0xF7
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x50
        __emit 0xF7
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x2C
        __emit 0xF7
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x0C
        __emit 0xF7
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x04
        __emit 0xF7
        __emit 0x76
        __emit 0x00
        __emit 0xC3
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        // jump-table data @ 0x0048112C (1 relocated pointers)
        __emit 0xB1
        __emit 0x10
        __emit 0x48
        __emit 0x00
    }
}
