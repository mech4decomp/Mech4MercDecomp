/*
 * FUN_005d23d0 (1164 B) — __thiscall (ECX=this), RET 0x10 (4 stack params).
 * Object update routine with FPU vector math and virtual dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00419480(void);
void FUN_0040CA10(void);
void FUN_00707E70(void);
void FUN_005D1330(void);
void FUN_005A68E0(void);
void FUN_0050E230(void);
void FUN_0041ACB0(void);
void FUN_0041FDE0(void);
void FUN_0041C830(void);

__declspec(naked) void __stdcall FUN_005d23d0(void)
{
    

extern int DAT_007f2440;
extern int DAT_0077016c;
extern int DAT_00787ec8;
__asm {
sub     esp, 0x70
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     al, byte ptr [ebx + 0x3CE]
        test    al, al
        push    esi
        push    edi
        jz      loc_5D241B
        fld     qword ptr [esp + 0x84]
        fsub    qword ptr [ebx + 0x3BC]
        fcomp   qword ptr [ebx + 0x3C4]
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D2850
        mov     ecx, dword ptr [ebx + 0x35C]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xBC]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x70
        ret     0x10
loc_5D241B:
        mov     ebp, dword ptr [ebx + 0x35C]
        mov     ecx, dword ptr [ebp + 0xD8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_00419480
        mov     edi, dword ptr [esp + 0x8C]
        lea     edx, [esp + 0x2C]
        push    edx
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040CA10
        fld     dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x28]
        mov     esi, dword ptr [ebp + 0x99C]
        test    esi, esi
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st
        fsqrt
        fstp    dword ptr [esp + 0x10]
        fstp    st(0)
        fstp    st(0)
        jnz     loc_5D2565
        mov     al, byte ptr [esp + 0x90]
        test    al, al
        jz      loc_5D24A0
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x70
        ret     0x10
loc_5D24A0:
        mov     eax, dword ptr [ebx + 0x368]
        test    eax, eax
        jz      loc_5D252E
        mov     cl, byte ptr [eax + 0x3C]
        test    cl, cl
        jz      loc_5D252E
        mov     ecx, dword ptr [eax + 0x60]
        cmp     ecx, dword ptr [eax + 0x54]
        jz      loc_5D252E
        mov     eax, dword ptr [ecx + 0x14]
        cmp     eax, -0x1
        jz      loc_5D252E
        mov ecx, dword ptr [DAT_007f2440]
        mov     edx, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [edx + eax*4]
        test    eax, eax
        jz      loc_5D252E
        mov     ecx, dword ptr [eax + 0x4]
        xor     edx, edx
        mov     ebp, ecx
        cmp     ecx, ebp
        setnz   dl
        mov     esi, 0xBF800000
        mov     ecx, edx
        mov     dword ptr [eax + ecx*4 + 0x14], esi
        mov     ecx, dword ptr [eax + 0x4]
        mov     edi, dword ptr [eax + 0x8]
        xor     edx, edx
        cmp     ecx, edi
        setnz   dl
        mov     ecx, edx
        mov     dword ptr [eax + ecx*4 + 0x14], esi
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, ecx
        cmp     ecx, edx
        mov     edx, 0xFFFFFFFE
        jnz     loc_5D2515
        and     dword ptr [eax + 0xA8], edx
        jmp     loc_5D251B
loc_5D2515:
        and     dword ptr [eax + 0xAC], edx
loc_5D251B:
        cmp     ecx, dword ptr [eax + 0x8]
        jnz     loc_5D2528
        and     dword ptr [eax + 0xA8], edx
        jmp     loc_5D252E
loc_5D2528:
        and     dword ptr [eax + 0xAC], edx
loc_5D252E:
        mov     ecx, dword ptr [ebx + 0x364]
        test    ecx, ecx
        jz      loc_5D2545
        cmp     dword ptr [ecx + 0x8], 0x3
        jnz     loc_5D2545
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x38]
loc_5D2545:
        push    0x0
        call    FUN_00707E70
        sub     esp, 0x8
        mov     ecx, ebx
        fstp    qword ptr [esp]
        call    FUN_005D1330
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x70
        ret     0x10
loc_5D2565:
        mov     ecx, dword ptr [ebp + 0x440]
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, esi
        call    FUN_005A68E0
        fst     qword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0x1C0]
        fstp    qword ptr [ebx + 0x3C4]
        push    eax
        call    FUN_0050E230
        fcomp   qword ptr [esp + 0x1C]
        add     esp, 0x4
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D2737
        fld     dword ptr [ebp + 0x440]
        push    ecx
        fadd dword ptr [DAT_0077016c]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [edi + 0x4]
        mov     ecx, dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x38]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, esi
        call    FUN_005A68E0
        fst     qword ptr [esp + 0x18]
        mov     edx, dword ptr [esi + 0x1C0]
        fstp    qword ptr [ebx + 0x3C4]
        push    edx
        call    FUN_0050E230
        fcomp   qword ptr [esp + 0x1C]
        add     esp, 0x4
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D272F
        mov     al, byte ptr [esp + 0x90]
        test    al, al
        jz      loc_5D2611
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x70
        ret     0x10
loc_5D2611:
        mov     eax, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [edi + 0x4]
        mov     ecx, dword ptr [eax + 0x2BC]
        fsub    dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, esi
        call    FUN_005A68E0
        fst     qword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0x1C0]
        fstp    qword ptr [ebx + 0x3C4]
        push    eax
        call    FUN_0050E230
        fcomp   qword ptr [esp + 0x1C]
        add     esp, 0x4
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D2725
        mov     eax, dword ptr [ebx + 0x368]
        test    eax, eax
        jz      loc_5D26EE
        mov     cl, byte ptr [eax + 0x3C]
        test    cl, cl
        jz      loc_5D26EE
        mov     ecx, dword ptr [eax + 0x60]
        cmp     ecx, dword ptr [eax + 0x54]
        jz      loc_5D26EE
        mov     eax, dword ptr [ecx + 0x14]
        cmp     eax, -0x1
        jz      loc_5D26EE
        mov ecx, dword ptr [DAT_007f2440]
        mov     edx, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [edx + eax*4]
        test    eax, eax
        jz      loc_5D26EE
        mov     ecx, dword ptr [eax + 0x4]
        xor     edx, edx
        mov     ebp, ecx
        cmp     ecx, ebp
        setnz   dl
        mov     esi, 0xBF800000
        mov     ecx, edx
        mov     dword ptr [eax + ecx*4 + 0x14], esi
        mov     ecx, dword ptr [eax + 0x4]
        mov     edi, dword ptr [eax + 0x8]
        xor     edx, edx
        cmp     ecx, edi
        setnz   dl
        mov     ecx, edx
        mov     dword ptr [eax + ecx*4 + 0x14], esi
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, ecx
        cmp     ecx, edx
        mov     edx, 0xFFFFFFFE
        jnz     loc_5D26D5
        and     dword ptr [eax + 0xA8], edx
        jmp     loc_5D26DB
loc_5D26D5:
        and     dword ptr [eax + 0xAC], edx
loc_5D26DB:
        cmp     ecx, dword ptr [eax + 0x8]
        jnz     loc_5D26E8
        and     dword ptr [eax + 0xA8], edx
        jmp     loc_5D26EE
loc_5D26E8:
        and     dword ptr [eax + 0xAC], edx
loc_5D26EE:
        mov     ecx, dword ptr [ebx + 0x364]
        test    ecx, ecx
        jz      loc_5D2705
        cmp     dword ptr [ecx + 0x8], 0x3
        jnz     loc_5D2705
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x38]
loc_5D2705:
        push    0x0
        call    FUN_00707E70
        sub     esp, 0x8
        mov     ecx, ebx
        fstp    qword ptr [esp]
        call    FUN_005D1330
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x70
        ret     0x10
loc_5D2725:
        mov     dword ptr [esp + 0x14], 0x2
        jmp     loc_5D2737
loc_5D272F:
        mov     dword ptr [esp + 0x14], 0x1
loc_5D2737:
        mov     eax, dword ptr [ebp + 0xD8]
        lea     esi, [eax + 0x80]
        push    esi
        lea     ecx, [esp + 0x48]
        call    FUN_0041ACB0
        push    0x2
        push    0x0
        mov     ecx, 0xC
        lea     edi, [esp + 0x58]
        push    0x1
        rep     movsd
        push    0x7B8D18
        lea     ecx, [esp + 0x60]
        call    FUN_0041FDE0
        mov     edx, dword ptr [esp + 0x8C]
        lea     ecx, [esp + 0x50]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_0041C830
        fld     dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x40]
        fpatan
        fst     dword ptr [esp + 0x10]
        fcomp dword ptr [DAT_00787ec8]
        fnstsw  ax
        test    ah, 0x41
        jz      loc_5D27B0
        fld dword ptr [DAT_00787ec8]
        fchs
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5D27C7
loc_5D27B0:
        mov     al, byte ptr [esp + 0x90]
        test    al, al
        jz      loc_5D27C7
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x70
        ret     0x10
loc_5D27C7:
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0xB8]
        test    al, al
        jz      loc_5D2850
        mov     ecx, dword ptr [esp + 0x84]
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     edx, dword ptr [esp + 0x88]
        mov     dword ptr [ebx + 0x3BC], ecx
        mov     byte ptr [ebx + 0x3CE], 0x1
        mov     byte ptr [ebx + 0x3CF], 0x0
        mov     dword ptr [ebx + 0x3C0], edx
        jz      loc_5D283B
        cmp     eax, 0x1
        mov     byte ptr [ebp + 0x5C8], 0x1
        jnz     loc_5D2826
        fld     dword ptr [ebp + 0x440]
        fadd dword ptr [DAT_0077016c]
        fstp    dword ptr [ebp + 0x5CC]
        jmp     loc_5D283B
loc_5D2826:
        mov     eax, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x2BC]
        mov     dword ptr [ebp + 0x5CC], ecx
loc_5D283B:
        mov     byte ptr [ebp + 0x5C0], 0x1
        fld     dword ptr [esp + 0x44]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [ebp + 0x5C4]
loc_5D2850:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x70
        ret     0x10
    }


}
