/*
 * FUN_005d5300 (523 B) — __thiscall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005d4fb0(void);

__declspec(naked) void __stdcall FUN_005d5300(void)
{
    

extern int DAT_0076c5b0;
__asm {
sub     esp, 0x24
        fld     dword ptr [esp + 0x2c]
        push    ebx
        fmul    dword ptr [esp + 0x34]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x34]
        fcom dword ptr [DAT_0076c5b0]
        mov     eax, dword ptr [ecx + 0xc]
        fld     dword ptr [ecx + 0x8]
        mov     edx, dword ptr [ecx + 0x1c]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [ecx + 0x2c]
        mov     dword ptr [esp + 0x20], eax
        fnstsw  ax
        push    edi
        test    ah, 0x1
        mov     dword ptr [esp + 0x20], edx
        jz      L_5356
        fchs
        fld     dword ptr [ecx + 0x18]
        fchs
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ecx + 0x28]
        fchs
        fstp    dword ptr [esp + 0x18]
        fxch    st(1)
        fchs
        fxch    st(1)
        jmp     L_5364
L_5356:
        fld     dword ptr [ecx + 0x18]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ecx + 0x28]
        fstp    dword ptr [esp + 0x18]
L_5364:
        fmul    st, st(1)
        lea     eax, [esi + 0x32c]
        push    eax
        lea     ebp, [esi + 0x314]
        fstp    dword ptr [esp + 0x2c]
        push    ebp
        fld     dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x18]
        fmul    st, st(1)
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        fstp    dword ptr [esp + 0x3c]
        mov     ecx, esi
        fmul    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x28]
        call    FUN_005d4fb0
        test    al, al
        jz      L_53c7
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_53c7:
        lea     ebx, [esi + 0x338]
        push    ebx
        lea     edi, [esi + 0x320]
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    FUN_005d4fb0
        test    al, al
        jz      L_53f9
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_53f9:
        push    edi
        push    ebp
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_005d4fb0
        test    al, al
        jz      L_541f
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x2
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_541f:
        push    ebx
        lea     eax, [esi + 0x32c]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, esi
        call    FUN_005d4fb0
        test    al, al
        jz      L_544b
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x3
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_544b:
        mov     eax, dword ptr [esi + 0x350]
        mov     ecx, dword ptr [esi + 0x354]
        mov     edx, dword ptr [esi + 0x358]
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esi + 0x32c]
        push    eax
        push    ebp
        mov     dword ptr [esp + 0x1c], ecx
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], edx
        call    FUN_005d4fb0
        test    al, al
        jz      L_5495
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x4
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_5495:
        push    ebx
        push    edi
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_005d4fb0
        test    al, al
        jz      L_54bb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x5
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_54bb:
        push    edi
        push    ebp
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, esi
        call    FUN_005d4fb0
        test    al, al
        jz      L_54e1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x6
        pop     ebx
        add     esp, 0x24
        ret     0xc
L_54e1:
        push    ebx
        lea     eax, [esi + 0x32c]
        push    eax
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    FUN_005d4fb0
        neg     al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        sbb     eax, eax
        add     eax, 0x8
        add     esp, 0x24
        ret     0xc
    }


}
