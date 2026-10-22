/*
 * FUN_005DBEE0 (595 B) — __thiscall(2) member function. Computes a scalar
 * factor (via FUN_00637B40 / FUN_00637A20 with various opcodes, clamping
 * against [esp+0x24] and globals), reads a resolution from [esi+0xd8],
 * calls FUN_0075DB4A / FUN_006100D0 / FUN_00415020 / FUN_005DBD60, and
 * conditionally dispatches through the vtable at [edx+0xf8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_00637B40(void);
extern void * __cdecl FUN_00637A20(int opcode);
extern int __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_006100D0(void *a, void *b, void *c, void *d, void *e, void *f);
extern void __cdecl FUN_00415020(void);
extern int __cdecl FUN_005DBD60(void *obj);

extern float g_76c5b0;   /* DAT_0076c5b0 */
extern float g_786dd8;   /* DAT_00786dd8 */
extern float g_7880fc;   /* DAT_007880fc */
extern unsigned int g_7f2440; /* DAT_007f2440 */
extern float g_76d070;   /* DAT_0076d070 */
extern float g_7882b0;   /* DAT_007882b0 */
extern float g_77016c;   /* DAT_0077016c */
extern float g_7884c0;   /* DAT_007884c0 */

__declspec(naked) void FUN_005DBEE0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx + 0x170]
        push    edi
        call    FUN_00637B40
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_76c5b0]
        mov     edi, eax
        mov     dword ptr [esp + 0x10], 0x3f800000
        fnstsw  ax
        test    ah, 1
        jne     L_5dbf60
        push    0xf1
        mov     ecx, edi
        call    FUN_00637A20
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jne     L_5dbf30
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0x14
        ret     8
L_5dbf30:
        push    0xf1
        mov     ecx, edi
        call    FUN_00637A20
        fadd    st(0), st(0)
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 1
        je      L_5dbf50
        push    0xfa
        jmp     L_5dbf55
L_5dbf50:
        push    0xf2
L_5dbf55:
        mov     ecx, edi
        call    FUN_00637A20
        fstp    dword ptr [esp + 0x10]
L_5dbf60:
        mov     al, byte ptr [esp + 0x28]
        test    al, al
        je      L_5dbf7c
        push    0xfc
        mov     ecx, edi
        call    FUN_00637A20
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
L_5dbf7c:
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x1c], eax
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [g_786dd8]
        push    ebp
        mov     dword ptr [esp + 0x18], ecx
        fmul    dword ptr [g_7880fc]
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_0075DB4A
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [g_786dd8]
        mov     ebp, eax
        shl     ebp, 9
        fmul    dword ptr [g_7880fc]
        call    FUN_0075DB4A
        mov     ecx, dword ptr [g_7f2440]
        mov     edx, dword ptr [ecx + 0x3c]
        add     ebp, eax
        mov     eax, dword ptr [edx + 8]
        shl     ebp, 1
        sub     eax, ebp
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 1]
        pop     ebp
        and     ecx, 3
        mov     eax, ecx
        cmp     ax, 1
        jne     L_5dbffc
        push    0xf6
        jmp     L_5dc007
L_5dbffc:
        cmp     ax, 2
        jne     L_5dc016
        push    0xf7
L_5dc007:
        mov     ecx, edi
        call    FUN_00637A20
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
L_5dc016:
        mov     eax, dword ptr [esi + 0x5b8]
        test    eax, eax
        je      L_5dc034
        push    0xf9
        mov     ecx, edi
        call    FUN_00637A20
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
L_5dc034:
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld     dword ptr [eax + 0x2bc]
        fmul    dword ptr [g_76d070]
        fcomp   dword ptr [esi + 0x440]
        fnstsw  ax
        test    ah, 1
        je      L_5dc06a
        push    0xfb
        mov     ecx, edi
        call    FUN_00637A20
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
L_5dc06a:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    0
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x17]
        push    ecx
        push    esi
        push    edx
        push    eax
        call    FUN_006100D0
        fstp    st(0)
        mov     al, byte ptr [esp + 0x27]
        add     esp, 0x18
        cmp     al, 3
        je      L_5dc097
        cmp     al, 7
        jne     L_5dc0ab
L_5dc097:
        push    0xf8
        mov     ecx, edi
        call    FUN_00637A20
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
L_5dc0ab:
        call    FUN_00415020
        fstp    dword ptr [esp + 0x28]
        mov     ecx, ebx
        call    FUN_005DBD60
        mov     dword ptr [esp + 0x24], eax
        fild    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x10]
        fld     dword ptr [g_7882b0]
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fcom    dword ptr [g_77016c]
        fnstsw  ax
        test    ah, 1
        je      L_5dc0ec
        fstp    st(0)
        fld     dword ptr [g_77016c]
        jmp     L_5dc101
L_5dc0ec:
        fcom    dword ptr [g_7884c0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_5dc101
        fstp    st(0)
        fld     dword ptr [g_7884c0]
L_5dc101:
        fld     dword ptr [esp + 0x28]
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        jne     L_5dc125
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0xf8]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x14
        ret     8
L_5dc125:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x14
        ret     8
    }
}
