/*
 * FUN_00724350 (extent 0x724350-0x7248d0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00856b8c;
extern int    g_00856b94;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00756590(void);
extern void __cdecl FUN_00756670(void);
extern void __cdecl FUN_00756790(void);
extern void __cdecl FUN_00756810(void);
extern void __cdecl FUN_00756870(void);
extern void __cdecl FUN_007568d0(void);
extern void __cdecl FUN_00756a60(void);
extern void __cdecl FUN_00756aa0(void);
extern void __cdecl FUN_007571c0(void);
extern void __cdecl FUN_00757220(void);
extern void __cdecl FUN_00757260(void);
extern void __cdecl FUN_007572a0(void);
extern void __cdecl FUN_00757300(void);
extern void __cdecl FUN_00757360(void);
extern void __cdecl FUN_00757390(void);
extern void __cdecl FUN_007573c0(void);
extern void __cdecl FUN_007573f0(void);
extern void __cdecl FUN_00757400(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00724350(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 8
        mov    eax, dword ptr [g_00856b94]
        xor    ecx, ecx
        cmp    eax, ecx
        push    esi
        je    L_48c6
        mov    eax, dword ptr [ebp + 0xc]
        cmp    eax, 0x200
        jg    L_46fc
        je    L_469e
        add    eax, -2
        cmp    eax, 0xfe
        ja    L_47e7
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x7248f4]
        jmp    dword ptr [ecx*4 + 0x7248d0]
        mov    eax, dword ptr [ebp + 8]
        cmp    eax, -1
        jne    L_43c9
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0xd8]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        call    FUN_007571c0
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_43c9:
        mov    ecx, dword ptr [eax*4 + 0x856a8c]
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [ecx + 0x5c]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_00756590
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        mov    eax, dword ptr [ebp + 8]
        cmp    eax, -1
        jne    L_441b
        push    0x7a54cc
        push    0x7a54b8
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_48c6
        int 3    
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_441b:
        mov    ecx, dword ptr [eax*4 + 0x856a8c]
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [ecx + 0x60]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        call    FUN_00756670
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        mov    eax, dword ptr [ebp + 8]
        cmp    eax, -1
        jne    L_446d
        push    0x7a5484
        push    0x7a54b8
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_48c6
        int 3    
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_446d:
        mov    ecx, dword ptr [eax*4 + 0x856a8c]
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [ecx + 0x64]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_00756790
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_48c6
        int 3    
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        mov    eax, dword ptr [ebp + 8]
        cmp    eax, -1
        jne    L_450c
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0x88]
        fnstsw  ax
        test    ah, 0x40
        je    L_44f4
        fld    dword ptr [ebp + 0x14]
        fcomp    dword ptr [ecx + 0x8c]
        fnstsw  ax
        test    ah, 0x40
        je    L_44f4
        fld    dword ptr [ebp + 0x18]
        fcomp    dword ptr [ecx + 0x90]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_44f4:
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    eax
        push    edx
        call    FUN_00757220
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_450c:
        mov    ecx, dword ptr [eax*4 + 0x856a8c]
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [ecx + 0x20]
        fnstsw  ax
        test    ah, 0x40
        je    L_453e
        fld    dword ptr [ebp + 0x14]
        fcomp    dword ptr [ecx + 0x24]
        fnstsw  ax
        test    ah, 0x40
        je    L_453e
        fld    dword ptr [ebp + 0x18]
        fcomp    dword ptr [ecx + 0x28]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_453e:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        push    eax
        mov    eax, dword ptr [ebp + 0x10]
        push    edx
        push    eax
        call    FUN_00756810
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        mov    eax, dword ptr [ebp + 8]
        cmp    eax, -1
        jne    L_45b0
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0x94]
        fnstsw  ax
        test    ah, 0x40
        je    L_4598
        fld    dword ptr [ebp + 0x14]
        fcomp    dword ptr [ecx + 0x98]
        fnstsw  ax
        test    ah, 0x40
        je    L_4598
        fld    dword ptr [ebp + 0x18]
        fcomp    dword ptr [ecx + 0x9c]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_4598:
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    eax
        push    edx
        call    FUN_00757260
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_45b0:
        mov    ecx, dword ptr [eax*4 + 0x856a8c]
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [ecx + 0x2c]
        fnstsw  ax
        test    ah, 0x40
        je    L_45e2
        fld    dword ptr [ebp + 0x14]
        fcomp    dword ptr [ecx + 0x30]
        fnstsw  ax
        test    ah, 0x40
        je    L_45e2
        fld    dword ptr [ebp + 0x18]
        fcomp    dword ptr [ecx + 0x34]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_45e2:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        push    eax
        mov    eax, dword ptr [ebp + 0x10]
        push    edx
        push    eax
        call    FUN_00756870
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0xa0]
        fnstsw  ax
        test    ah, 0x40
        je    L_4634
        fld    dword ptr [ebp + 0x14]
        fcomp    dword ptr [ecx + 0xa4]
        fnstsw  ax
        test    ah, 0x40
        je    L_4634
        fld    dword ptr [ebp + 0x18]
        fcomp    dword ptr [ecx + 0xa8]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_4634:
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    eax
        push    edx
        call    FUN_00757300
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0xac]
        fnstsw  ax
        test    ah, 0x40
        je    L_4686
        fld    dword ptr [ebp + 0x14]
        fcomp    dword ptr [ecx + 0xb0]
        fnstsw  ax
        test    ah, 0x40
        je    L_4686
        fld    dword ptr [ebp + 0x18]
        fcomp    dword ptr [ecx + 0xb4]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_4686:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        push    eax
        mov    eax, dword ptr [ebp + 0x10]
        push    edx
        push    eax
        call    FUN_007572a0
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_469e:
        mov    eax, dword ptr [ebp + 8]
        cmp    eax, -1
        jne    L_46c3
        push    0x7a5458
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_48c6
        int 3    
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_46c3:
        mov    ecx, dword ptr [eax*4 + 0x856a8c]
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [ecx + 0x50]
        fnstsw  ax
        test    ah, 0x40
        je    L_46e8
        fld    dword ptr [ebp + 0x14]
        fcomp    dword ptr [ecx + 0x54]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_46e8:
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x10]
        push    edx
        push    eax
        call    FUN_007568d0
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_46fc:
        cmp    eax, 0x2000
        jg    L_47ce
        je    L_47a4
        cmp    eax, 0x400
        je    L_477a
        cmp    eax, 0x800
        je    L_4750
        cmp    eax, 0x1000
        jne    L_47e7
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0xb8]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        call    FUN_007573c0
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_4750:
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0xbc]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_00757390
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_477a:
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0xc0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        call    FUN_00757360
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_47a4:
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0xdc]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    eax, dword ptr [ebp + 0x10]
        push    eax
        call    FUN_007573f0
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_47ce:
        cmp    eax, 0x4000
        je    L_48a7
        cmp    eax, 0x8000
        je    L_4851
        cmp    eax, 0x10000
        je    L_4804
L_47e7:
        push    0x7a5440
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_48c6
        int 3    
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_4804:
        mov    ecx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ecx*4 + 0x856a8c]
        fld    dword ptr [ecx + 0x40]
        fcomp    dword ptr [ebp + 0x10]
        fnstsw  ax
        test    ah, 0x40
        je    L_4839
        fld    dword ptr [ecx + 0x44]
        fcomp    dword ptr [ebp + 0x14]
        fnstsw  ax
        test    ah, 0x40
        je    L_4839
        fld    dword ptr [ecx + 0x48]
        fcomp    dword ptr [ebp + 0x18]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_4839:
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    eax
        push    edx
        call    FUN_00756aa0
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_4851:
        mov    eax, dword ptr [ebp + 8]
        mov    esi, dword ptr [eax*4 + 0x856a8c]
        mov    edx, dword ptr [esi + 0x38]
        mov    dword ptr [ebp - 8], edx
        mov    dword ptr [ebp - 4], ecx
        fild    qword ptr [ebp - 8]
        fcomp    dword ptr [ebp + 0x10]
        fnstsw  ax
        test    ah, 0x40
        je    L_4887
        mov    eax, dword ptr [esi + 0x3c]
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 4], ecx
        fild    qword ptr [ebp - 8]
        fcomp    dword ptr [ebp + 0x14]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
L_4887:
        fld    dword ptr [ebp + 0x14]
        call    FUN_0075db4a
        fld    dword ptr [ebp + 0x10]
        push    eax
        call    FUN_0075db4a
        push    eax
        mov    ecx, esi
        call    FUN_00756a60
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_48a7:
        fld    dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [g_00856b8c]
        fcomp    dword ptr [ecx + 0xe0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_48c6
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        call    FUN_00757400
L_48c6:
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x007248D0 (76 relocated pointers)
        __emit 0x97
        __emit 0x43
        __emit 0x72
        __emit 0x00
        __emit 0xF1
        __emit 0x43
        __emit 0x72
        __emit 0x00
        __emit 0x43
        __emit 0x44
        __emit 0x72
        __emit 0x00
        __emit 0x95
        __emit 0x44
        __emit 0x72
        __emit 0x00
        __emit 0xB2
        __emit 0x44
        __emit 0x72
        __emit 0x00
        __emit 0x56
        __emit 0x45
        __emit 0x72
        __emit 0x00
        __emit 0xFA
        __emit 0x45
        __emit 0x72
        __emit 0x00
        __emit 0x4C
        __emit 0x46
        __emit 0x72
        __emit 0x00
        __emit 0xE7
        __emit 0x47
        __emit 0x72
        __emit 0x00
        __emit 0x00
        __emit 0x08
        __emit 0x01
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x02
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x03
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x04
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x05
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x06
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x08
        __emit 0x07
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
        __emit 0x90
        // jump-table data @ 0x00724C00 (0 relocated pointers)
    }
}
