/*
 * FUN_005c8610 (375 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Vector-like container at this+0x648 (begin/end/cap of 16-byte elements).
 * Searches for element matching param->[0x30]; if found and a random gate
 * passes, returns the element's first dword. Otherwise appends a new element
 * built from FUN_005fbb00 + FUN_005c8790 results.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00707e70(void);
extern void __stdcall FUN_00415020(void);
extern void __stdcall FUN_005fbb00(void *param);
extern void __stdcall FUN_005c8790(void *param);
extern void __stdcall FUN_005cb970(void *param, void *param2, int param3);

__declspec(naked) void __stdcall FUN_005c8610(void *param)
{
    

extern int DAT_00787948;
__asm {
sub     esp, 0x20
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x2c]
        push    esi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx + 0x648]
        mov     eax, dword ptr [ebx + 0x64c]
        cmp     esi, eax
        push    edi
        lea     edi, [ebx + 0x648]
        mov     dword ptr [esp + 0x10], ebx
        jz      L_b6
        mov     ecx, dword ptr [ebp + 0x30]
    L_3a:
        cmp     dword ptr [esi + 0x4], ecx
        jz      L_48
        add     esi, 0x10
        cmp     esi, eax
        jnz     L_3a
        jmp     L_b6
    L_48:
        fld dword ptr [DAT_00787948]
        push    0x0
        fadd    qword ptr [esi + 0x8]
        fstp    qword ptr [esp + 0x18]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_73
        mov     eax, dword ptr [esi]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x4
    L_73:
        mov     edx, dword ptr [edi + 0x4]
        lea     ecx, [esi + 0x10]
        cmp     ecx, edx
        jz      L_b0
        mov     eax, edx
        sub     eax, ecx
        sar     eax, 0x4
        test    eax, eax
        jle     L_b0
    L_88:
        dec     eax
        lea     ecx, [esi + 0x10]
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        mov     dword ptr [esi], ebp
        mov     ebp, dword ptr [ebx + 0x4]
        mov     dword ptr [esi + 0x4], ebp
        mov     ebp, dword ptr [ebx + 0x8]
        mov     dword ptr [esi + 0x8], ebp
        mov     ebx, dword ptr [ebx + 0xc]
        mov     dword ptr [esi + 0xc], ebx
        mov     esi, ecx
        jnz     L_88
        mov     ebp, dword ptr [esp + 0x34]
        mov     ebx, dword ptr [esp + 0x10]
    L_b0:
        add     edx, -0x10
        mov     dword ptr [edi + 0x4], edx
    L_b6:
        call    FUN_00415020
        fstp    qword ptr [esp + 0x14]
        push    0x0
        call    FUN_00707e70
        fadd    qword ptr [esp + 0x14]
        mov     eax, dword ptr [ebp + 0x30]
        lea     ecx, [esp + 0x14]
        push    ecx
        fstp    qword ptr [esp + 0x2c]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x28], eax
        call    FUN_005fbb00
        push    eax
        mov     ecx, ebx
        call    FUN_005c8790
        mov     edx, dword ptr [edi + 0x8]
        mov     ecx, eax
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, edx
        mov     dword ptr [esp + 0x20], ecx
        jz      L_1e
        test    eax, eax
        jz      L_16
        mov     edx, eax
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [edx + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [edx + 0xc], ecx
    L_16:
        add     eax, 0x10
        mov     dword ptr [edi + 0x4], eax
        jmp     L_2d
    L_1e:
        push    0x1
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_005cb970
    L_2d:
        mov     eax, dword ptr [edi + 0x4]
        mov     esi, dword ptr [edi]
        sub     eax, esi
        sar     eax, 0x4
        cmp     eax, 0x4
        jbe     L_79
        mov     ecx, esi
        mov     esi, dword ptr [edi + 0x4]
        lea     edx, [ecx + 0x10]
        cmp     edx, esi
        jz      L_73b
        mov     eax, esi
        sub     eax, edx
        sar     eax, 0x4
        test    eax, eax
        jle     L_73b
    L_53:
        dec     eax
        lea     edx, [ecx + 0x10]
        mov     ebx, edx
        mov     ebp, dword ptr [ebx]
        mov     dword ptr [ecx], ebp
        mov     ebp, dword ptr [ebx + 0x4]
        mov     dword ptr [ecx + 0x4], ebp
        mov     ebp, dword ptr [ebx + 0x8]
        mov     dword ptr [ecx + 0x8], ebp
        mov     ebx, dword ptr [ebx + 0xc]
        mov     dword ptr [ecx + 0xc], ebx
        mov     ecx, edx
        jnz     L_53
    L_73b:
        add     esi, -0x10
        mov     dword ptr [edi + 0x4], esi
    L_79:
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x4
    }


}
