/*
 * FUN_005d5ea0 (414 B) — __thiscall, RET 8 (2 stack params).
 *
 * Reads source vectors, conditionally calls FUN_005d5b50, switches on
 * this->[0x450] to select a vector, computes a distance-squared check,
 * and conditionally calls virtual methods / FUN_005d5bf0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005d5b50(void);
extern void __stdcall FUN_005d5bf0(void *param);

__declspec(naked) void __stdcall FUN_005d5ea0(void)
{
    

extern int DAT_0078815c;
__asm {
sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esi + 0x454]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [ecx + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x8], 0x0
        mov     dword ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x10], 0x0
        jz      L_5f0b
        cmp     dword ptr [esi + 0x450], 0x4
        jz      L_5f0b
        mov     ecx, esi
        call    FUN_005d5b50
L_5f0b:
        mov     eax, dword ptr [esi + 0x450]
        cmp     eax, 0x4
        ja      L_5f7e
        jmp     dword ptr [eax*4 + 0x5d6040]

L_case1:
        mov     eax, dword ptr [esi + 0x438]
        mov     ecx, dword ptr [esi + 0x43c]
        mov     edx, dword ptr [esi + 0x440]
        mov     dword ptr [esp + 0x8], eax
        mov     dword ptr [esp + 0xc], ecx
        jmp     L_5f7a

L_case4:
        mov     ecx, dword ptr [esi + 0x448]
        mov     eax, dword ptr [esi + 0x444]
        mov     edx, dword ptr [esi + 0x44c]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x8], eax
        mov     dword ptr [esp + 0x10], edx
        call    FUN_005d5b50
        jmp     L_5f7e

L_case3:
        mov     eax, dword ptr [esi + 0x444]
        mov     ecx, dword ptr [esi + 0x448]
        mov     edx, dword ptr [esi + 0x44c]
        mov     dword ptr [esp + 0x8], eax
        mov     dword ptr [esp + 0xc], ecx

L_5f7a:
        mov     dword ptr [esp + 0x10], edx

L_5f7e:
        fld     dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x35c]
        fsub    dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax + 0x440]
        fld     dword ptr [esp + 0xc]
        mov     al, byte ptr [esi + 0x4d8]
        test    al, al
        fsub    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x4], ecx
        fsub    dword ptr [esp + 0x1c]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        jz      L_5fe2
        mov     edx, dword ptr [esi]
        fstp    st(0)
        mov     ecx, esi
        call    dword ptr [edx + 0x1c4]
        push    0x1
        mov     ecx, esi
        call    FUN_005d5bf0
        pop     esi
        add     esp, 0x1c
        ret     8

L_5fe2:
        fcom dword ptr [DAT_0078815c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_6004
        fld     dword ptr [esp + 0x4]
        fmul    dword ptr [esp + 0x4]
        fxch    st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_6037
        jmp     L_6006

L_6004:
        fstp    st(0)

L_6006:
        mov     eax, dword ptr [esi + 0x450]
        cmp     eax, 0x3
        jz      L_6030
        cmp     eax, 0x4
        jz      L_6030
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x1c4]
        push    0x1
        mov     ecx, esi
        call    FUN_005d5bf0
        pop     esi
        add     esp, 0x1c
        ret     8

L_6030:
        mov     byte ptr [esi + 0x4d8], 0x1

L_6037:
        pop     esi
        add     esp, 0x1c
        ret     8
    }


}
