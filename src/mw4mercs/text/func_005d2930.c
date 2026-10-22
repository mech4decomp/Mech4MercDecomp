/*
 * FUN_005d2930 (802 B) — __thiscall (ECX=this), RET 8 (two stack params).
 * Object update routine with FPU math and virtual dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00707E70(void);
void FUN_005D1330(void);
void FUN_00707F50(void);
void FUN_00419480(void);
void FUN_00686140(void);
void FUN_00685B20(void);
void FUN_0041C540(void);

__declspec(naked) void __stdcall FUN_005d2930(void)
{
    

extern int DAT_0077431c;
extern int DAT_007b220c;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x44
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x368]
        test    eax, eax
        push    edi
        jz      loc_5D2C49
        mov     al, byte ptr [esi + 0x4AC]
        test    al, al
        mov     byte ptr [esp + 0xE], 0x0
        mov     byte ptr [esp + 0xF], 0x0
        mov     dword ptr [esp + 0x2C], 0x0
        mov     dword ptr [esp + 0x30], 0x0
        mov     dword ptr [esp + 0x34], 0x0
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x14], 0xBF800000
        mov     dword ptr [esp + 0x18], 0xBF800000
        mov     dword ptr [esp + 0x1C], 0xBF800000
        jz      loc_5D29DD
        push    0x0
        call    FUN_00707E70
        fcomp   qword ptr [esi + 0x4A4]
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D2C49
        mov     eax, dword ptr [ebp + 0xC]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005D1330
        mov     byte ptr [esi + 0x459], 0x0
        mov     byte ptr [esi + 0x4AC], 0x0
loc_5D29DD:
        mov     edi, dword ptr [esi + 0x368]
        test    edi, edi
        jz      loc_5D2C49
        mov     al, byte ptr [edi + 0x3C]
        test    al, al
        jnz     loc_5D2A05
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x174]
        mov     eax, dword ptr [esi]
        push    0x1
        jmp     loc_5D2C39
loc_5D2A05:
        mov     ebx, dword ptr [esi + 0x35C]
        mov     eax, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        call    dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x10], eax
        call    FUN_00707F50
        mov     eax, dword ptr [esi + 0x3D4]
        test    eax, eax
        jz      loc_5D2A43
        mov     ecx, dword ptr [esp + 0x10]
        fld     dword ptr [esi + 0x3A8]
        fmul    dword ptr [ecx + 0x2BC]
        fmul dword ptr [DAT_0077431c]
        fstp    dword ptr [esp + 0x10]
        jmp     loc_5D2A4D
loc_5D2A43:
        mov     edx, dword ptr [ebx + 0x440]
        mov     dword ptr [esp + 0x10], edx
loc_5D2A4D:
        mov     eax, dword ptr [ebx + 0xD8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00419480
        fld     qword ptr [ebp + 0x8]
        mov     ecx, dword ptr [esp + 0x44]
        fsub    qword ptr [esi + 0xE4]
        mov     edx, dword ptr [esp + 0x4C]
        mov     dword ptr [esp + 0x2C], ecx
        lea     eax, [esp + 0xF]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x12]
        push    ecx
        mov     dword ptr [esp + 0x3C], edx
        lea     edx, [esp + 0x1C]
        push    edx
        push    eax
        sub     esp, 0x8
        lea     ecx, [esp + 0x44]
        fstp    qword ptr [esp]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x4C], 0x0
        call    FUN_00686140
        call    FUN_00707F50
        cmp     dword ptr [edi + 0x68], 0x6
        jnz     loc_5D2B05
        mov     edx, dword ptr [esi]
        push    0x0
        lea     eax, [esp + 0x3C]
        push    eax
        push    0x0
        lea     ecx, [esp + 0x50]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x48], 0xBF800000
        mov     dword ptr [esp + 0x4C], 0xBF800000
        mov     dword ptr [esp + 0x50], 0xBF800000
        mov     dword ptr [esp + 0x54], 0xBF800000
        mov     dword ptr [esp + 0x58], 0xBF800000
        mov     dword ptr [esp + 0x5C], 0xBF800000
        call    dword ptr [edx + 0x1D0]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
loc_5D2B05:
        mov     al, byte ptr [edi + 0x3C]
        test    al, al
        jnz     loc_5D2B1F
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x174]
        mov     eax, dword ptr [esi]
        push    0x1
        jmp     loc_5D2C39
loc_5D2B1F:
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x3D0], 0x0
        call    FUN_00685B20
        fld     dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x20]
        mov     eax, ecx
        mov     dword ptr [esp + 0x24], eax
        mov     al, byte ptr [esp + 0xE]
        test    al, al
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, edx
        mov     dword ptr [esp + 0x4C], edx
        mov     dword ptr [esp + 0x28], ecx
        jz      loc_5D2B78
        mov     ecx, dword ptr [ebp + 0xC]
        mov     edx, dword ptr [esi]
        push    0x0
        lea     eax, [esp + 0x24]
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        push    ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x160]
        jmp     loc_5D2B7F
loc_5D2B78:
        mov     byte ptr [esi + 0x3CE], 0x0
loc_5D2B7F:
        mov     edi, dword ptr [esi + 0x364]
        test    edi, edi
        jz      loc_5D2BF9
        cmp     dword ptr [edi + 0x8], 0x2
        jnz     loc_5D2BF9
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x1C]
        push    eax
        mov     dword ptr [esp + 0x50], 0xBF800000
        mov     dword ptr [esp + 0x54], 0xBF800000
        mov     dword ptr [esp + 0x58], 0xBF800000
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jz      loc_5D2BF9
        mov     ecx, dword ptr [edi + 0x44]
        mov     ebx, dword ptr [edi + 0x40]
        mov     eax, dword ptr [edi + 0x4C]
        sub     ecx, ebx
        sar     ecx, 0x2
        dec     ecx
        cmp     eax, ecx
        jge     loc_5D2BF9
        mov     edx, dword ptr [edi]
        inc     eax
        push    eax
        lea     eax, [esp + 0x48]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x2C]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x14], ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x18], edx
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x1C], eax
loc_5D2BF9:
        mov     ecx, dword ptr [esi + 0x368]
        cmp     dword ptr [ecx + 0x68], 0x7
        mov     edx, dword ptr [esi]
        push    0x0
        jz      loc_5D2C2B
        mov     ecx, dword ptr [esi + 0x3B8]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        lea     eax, [esp + 0x2C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x1D0]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
loc_5D2C2B:
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x1C8]
        mov     eax, dword ptr [esi]
        push    0x0
loc_5D2C39:
        mov     ecx, dword ptr [ebp + 0xC]
        mov     edx, dword ptr [ebp + 0x8]
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x15C]
loc_5D2C49:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
