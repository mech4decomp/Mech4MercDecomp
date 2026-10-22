/*
 * FUN_0068F900 (674 B) — __thiscall (RET). GOS vector/angle helper: divides
 * several fields by 6 (magic 0x66666667), computes angles via atan2
 * (0x75db4a), and appends computed (angle,value) pairs to a dynamic array
 * at this+8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00691C00(void);
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_00691AF0(void);
extern void __cdecl FUN_006F49A0(void);
extern unsigned int g_007F2464;
extern float g_0076C5B0;
extern float g_0076D598;
extern double g_0076D970;

__declspec(naked) void FUN_0068F900(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 8]
        mov     eax, dword ptr [edi + 0xc]
        lea     esi, [edi + 8]
        push    ecx
        push    eax
        push    eax
        call    FUN_00691C00
        mov     edx, dword ptr [g_007F2464]
        add     esp, 0xc
        push    edx
        mov     dword ptr [esi + 4], eax
        call    FUN_006F4950
        mov     ecx, dword ptr [edi + 0x14]
        mov     eax, 0x66666667
        imul    ecx
        mov     ecx, dword ptr [edi + 0x18]
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [esp + 0x20], edx
        mov     eax, 0x66666667
        imul    ecx
        fild    dword ptr [esp + 0x20]
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ecx, dword ptr [edi + 0x1c]
        mov     dword ptr [esp + 0x1c], edx
        mov     eax, 0x66666667
        imul    ecx
        mov     ecx, dword ptr [edi + 0x20]
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [esp + 0x20], edx
        mov     eax, 0x66666667
        imul    ecx
        fild    dword ptr [esp + 0x20]
        fsub    st(0), st(1)
        fild    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x18]
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     dword ptr [esp + 0x20], edx
        fild    dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076C5B0]
        fnstsw  ax
        test    ah, 1
        je      L68F9C5
        fld     st(0)
        fmul    dword ptr [g_0076D598]
        fstp    dword ptr [esp + 0x14]
        jmp     L68F9C9
L68F9C5:
        fst     dword ptr [esp + 0x14]
L68F9C9:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076C5B0]
        fld     dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      L68F9E4
        fmul    dword ptr [g_0076D598]
L68F9E4:
        fld     dword ptr [esp + 0x14]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L68FA3E
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fdiv    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x10]
        fcom    qword ptr [g_0076D970]
        fld     st(0)
        fnstsw  ax
        test    ah, 1
        je      L68FA14
        fmul    dword ptr [g_0076D598]
L68FA14:
        call    FUN_0075DB4A
        fcomp   dword ptr [g_0076C5B0]
        mov     dword ptr [esp + 0x20], eax
        fnstsw  ax
        test    ah, 1
        je      L68FA34
        mov     dword ptr [esp + 0x1c], 0xbf800000
        jmp     L68FA8D
L68FA34:
        mov     dword ptr [esp + 0x1c], 0x3f800000
        jmp     L68FA8D
L68FA3E:
        fxch    st(1)
        fdiv    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fcomp   qword ptr [g_0076D970]
        fld     dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      L68FA63
        fmul    dword ptr [g_0076D598]
L68FA63:
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076C5B0]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], 0xbf800000
        fnstsw  ax
        test    ah, 1
        jne     L68FA8D
        mov     dword ptr [esp + 0x10], 0x3f800000
L68FA8D:
        mov     edx, dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x18]
        mov     ebx, eax
        call    FUN_0075DB4A
        mov     edx, dword ptr [esi + 8]
        mov     ebp, eax
        mov     eax, dword ptr [esi + 4]
        cmp     eax, edx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x28], ebp
        je      L68FAD8
        test    eax, eax
        je      L68FAD0
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 4], ecx
L68FAD0:
        add     eax, 8
        mov     dword ptr [esi + 4], eax
        jmp     L68FAE7
L68FAD8:
        push    1
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00691AF0
L68FAE7:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        je      L68FB58
        mov     ebp, eax
L68FAF1:
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x14]
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x18]
        mov     ebx, eax
        call    FUN_0075DB4A
        mov     ecx, dword ptr [esi + 8]
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [esi + 4]
        cmp     eax, ecx
        mov     dword ptr [esp + 0x24], ebx
        je      L68FB44
        test    eax, eax
        je      L68FB3C
        mov     dword ptr [eax], ebx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 4], ecx
L68FB3C:
        add     eax, 8
        mov     dword ptr [esi + 4], eax
        jmp     L68FB53
L68FB44:
        push    1
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00691AF0
L68FB53:
        dec     ebp
        jne     L68FAF1
        jmp     L68FB8C
L68FB58:
        mov     eax, dword ptr [esi + 4]
        cmp     eax, dword ptr [esi + 8]
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], ebp
        je      L68FB7D
        test    eax, eax
        je      L68FB75
        mov     dword ptr [eax], ebx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 4], ecx
L68FB75:
        add     eax, 8
        mov     dword ptr [esi + 4], eax
        jmp     L68FB8C
L68FB7D:
        push    1
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00691AF0
L68FB8C:
        mov     eax, dword ptr [esi]
        mov     dword ptr [edi + 4], eax
        mov     byte ptr [edi + 0x24], 1
        call    FUN_006F49A0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
