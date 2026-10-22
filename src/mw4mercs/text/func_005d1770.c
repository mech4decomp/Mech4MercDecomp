/*
 * FUN_005d1770 (619 B) — __thiscall (ECX=this), RET 8 (two stack params).
 * Object update/creation routine: builds a local float triple, dispatches
 * through FUN_005c5300, and conditionally calls a virtual method at
 * vtable+0x184.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_006F4950(void);
void FUN_0041C540(void);
void FUN_00707E70(void);
void FUN_005C5300(void);
void FUN_0040C5D0(void);
void FUN_005B3630(void);
void FUN_005DCD00(void);
void FUN_0075DB4A(void);
void FUN_00676A20(void);
void FUN_0054FD90(void);
void FUN_00415230(void);
void FUN_005D1330(void);
void FUN_00416130(void);
void FUN_006F49A0(void);

__declspec(naked) void __stdcall FUN_005d1770(void)
{
    

extern int DAT_007f244c;
extern int DAT_007b220c;
extern int DAT_0076c5b0;
extern int DAT_00785970;
extern int DAT_0080da94;
extern int DAT_007f24d8;
extern int DAT_007f25b8;
extern int DAT_0080daa4;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        mov eax, dword ptr [DAT_007f244c]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006F4950
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        lea     ebx, [esi + 0x36C]
        push    ebx
        mov     dword ptr [esp + 0x1C], 0xBF800000
        mov     dword ptr [esp + 0x20], 0xBF800000
        mov     dword ptr [esp + 0x24], 0xBF800000
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jnz     loc_5D1821
        fld     dword ptr [esi + 0x3B8]
        mov     dword ptr [esp + 0xC], 0x1
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D17E3
        mov     dword ptr [esp + 0xC], 0x0
loc_5D17E3:
        push    0x0
        call    FUN_00707E70
        fstp    qword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    0x0
        push    0x2
        mov     ecx, esi
        call    FUN_005C5300
        sub     esp, 0xC
        mov     ecx, esp
        push    ebx
        mov     edi, eax
        call    FUN_0040C5D0
        mov     ecx, edi
        call    FUN_005B3630
        mov     dl, byte ptr [esp + 0xC]
        mov     byte ptr [edi + 0x24], dl
        push    edi
        jmp     loc_5D1842
loc_5D1821:
        push    0x0
        call    FUN_00707E70
        fstp    qword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    0x0
        push    0x3
        mov     ecx, esi
        call    FUN_005C5300
        push    eax
loc_5D1842:
        mov     ecx, esi
        call    FUN_005DCD00
        mov     edx, dword ptr [esi + 0x35C]
        fld     dword ptr [edx + 0x42C]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     loc_5D1891
        push    0x0
        call    FUN_00707E70
        fstp    qword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    0x0
        push    0x8
        mov     ecx, esi
        call    FUN_005C5300
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0x14], 0x0
        call    FUN_005DCD00
loc_5D1891:
        mov     ebx, dword ptr [esi + 0x470]
        test    ebx, ebx
        jz      loc_5D19CD
        fld     qword ptr [ebp + 0x8]
        fmul qword ptr [DAT_00785970]
        call    FUN_0075DB4A
        mov     edx, dword ptr [esi + 0x474]
        mov ecx, dword ptr [DAT_0080da94]
        add     eax, edx
        push    ebx
        mov     dword ptr [ebx + 0x10], eax
        call    FUN_00676A20
        mov     edi, eax
        test    edi, edi
        jz      loc_5D19AC
        fld     dword ptr [esi + 0x3B8]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D18FF
        mov     eax, dword ptr [esi + 0x35C]
        mov     ecx, dword ptr [eax + 0xD8]
        lea     edx, [esp + 0x10]
        push    edx
        add     ecx, 0x80
        call    FUN_0054FD90
        jmp     loc_5D1928
loc_5D18FF:
        mov     ecx, dword ptr [esi + 0x35C]
        mov     eax, dword ptr [ecx + 0xD8]
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [eax + 0x28]
        fstp    dword ptr [esp + 0x18]
loc_5D1928:
        mov     edi, dword ptr [edi + 0x34]
        test    edi, edi
        jz      loc_5D19AC
        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     loc_5D1957
        test    edi, edi
        jz      loc_5D19AC
        mov eax, dword ptr [DAT_007f25b8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_5D19AC
loc_5D1957:
        push    0x0
        call    FUN_00707E70
        fcomp   qword ptr [esi + 0x49C]
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5D19CD
        mov     eax, dword ptr [esi + 0x364]
        test    eax, eax
        jz      loc_5D197B
        cmp     dword ptr [eax + 0x8], 0x3
        jz      loc_5D19CD
loc_5D197B:
        mov     edx, dword ptr [esi]
        push    0x0
        push    0x0
        mov     ecx, esi
        mov     byte ptr [esi + 0x459], 0x0
        call    dword ptr [edx + 0x184]
        mov     eax, dword ptr [ebp + 0xC]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005D1330
        mov     eax, dword ptr [esi + 0x470]
        test    eax, eax
        jz      loc_5D19C3
        push    eax
        jmp     loc_5D19B8
loc_5D19AC:
        test    ebx, ebx
        mov     byte ptr [esi + 0x459], 0x0
        jz      loc_5D19C3
        push    ebx
loc_5D19B8:
        mov ecx, dword ptr [DAT_0080daa4]
        call    FUN_00416130
loc_5D19C3:
        mov     dword ptr [esi + 0x470], 0x0
loc_5D19CD:
        call    FUN_006F49A0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
