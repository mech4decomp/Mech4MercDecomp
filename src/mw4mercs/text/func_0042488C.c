/*
 * FUN_0042488C (484 B) — __thiscall (ecx = this), 2 params (ret 8).
 *
 * MLR color/lighting routine: if [this+0x58] <= 0, clears [this+0x10]
 * and returns 0. Otherwise iterates [this+0x24] entries computing
 * per-vertex colors (FPU math + 0x75db4a packing), then fills a buffer
 * at [g_007d98fc] with 0x01010101 and calls a virtual method at
 * [vtable+0x98].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_007b9628;
extern float g_0076df00;
extern float g_007b962c;
extern float g_007b9630;
extern float g_0076defc;
extern float g_0076def8;
extern char g_007da86c;
extern int g_007b9640;
extern int g_007b963c;
extern int g_007d98fc;

extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) int __cdecl FUN_0042488C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub     esp, 0x28
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x58]
        test    eax, eax
        jg      L_4248aa
        mov     byte ptr [ebp + 0x10], 0
        xor     eax, eax
        pop     ebp
        add     esp, 0x28
        ret     8
L_4248aa:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        jle     L_4249bc
        mov     edi, dword ptr [esp + 0x3c]
        mov     esi, dword ptr [ebp + 0x14]
        mov     dword ptr [esp + 0x3c], ecx
        mov     dword ptr [esp + 0x10], eax
L_4248cd:
        fld     dword ptr [esi]
        lea     ecx, [esp + 0x14]
        fsub    dword ptr [edi]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 4]
        fsub    dword ptr [edi + 4]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esi + 8]
        fsub    dword ptr [edi + 8]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_0040cb00
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x18]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x1c]
        fld     dword ptr [g_007b9628]
        fadd    dword ptr [esp + 0x20]
        fmul    dword ptr [g_0076df00]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [g_007b962c]
        fadd    dword ptr [esp + 0x24]
        fmul    dword ptr [g_0076df00]
        fstp    dword ptr [esp + 0x30]
        fadd    dword ptr [g_007b9630]
        fmul    dword ptr [g_0076df00]
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [g_0076defc]
        fadd    dword ptr [g_0076def8]
        call    FUN_0075db4a
        fmul    dword ptr [g_0076defc]
        mov     ebx, eax
        or      ebx, 0xffffff00
        fadd    dword ptr [g_0076def8]
        shl     ebx, 8
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [g_0076defc]
        and     eax, 0xff
        or      ebx, eax
        shl     ebx, 8
        fadd    dword ptr [g_0076def8]
        call    FUN_0075db4a
        and     eax, 0xff
        or      ebx, eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     dword ptr [eax], ebx
        add     eax, 4
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0xc
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_4248cd
L_4249bc:
        mov     al, byte ptr [g_007da86c]
        fld     dword ptr [g_0076d064]
        test    al, 0x20
        mov     ebx, dword ptr [ebp + 0x20]
        jle     L_4249d5
        __emit  0xDD /* fstp st(0) */
        __emit  0xD8
        fld     dword ptr [ebp + 0x74]
        jmp     L_4249de
L_4249d5:
        test    al, 0x40
        jle     L_4249de
        __emit  0xDD /* fstp st(0) */
        __emit  0xD8
        fld     dword ptr [ebp + 0x7c]
L_4249de:
        test    ebx, ebx
        jle     L_424a2d
        mov     eax, dword ptr [g_007b9640]
        mov     esi, dword ptr [eax]
        mov     ecx, dword ptr [g_007b963c]
        mov     edi, dword ptr [ecx]
        mov     eax, dword ptr [ebp + 0x1c]
        lea     ecx, [esi + 4]
        lea     edx, [edi + 4]
        sub     esi, eax
        sub     edi, eax
L_4249fe:
        fld     st(0)
        add     ecx, 8
        fmul    dword ptr [eax]
        add     eax, 8
        add     edx, 8
        dec     ebx
        fstp    dword ptr [esi + eax - 8]
        fld     st(0)
        fmul    dword ptr [eax - 4]
        fstp    dword ptr [ecx - 8]
        fld     dword ptr [ebp + 0x78]
        fmul    dword ptr [eax - 8]
        fstp    dword ptr [edi + eax - 8]
        fld     dword ptr [eax - 4]
        fmul    dword ptr [ebp + 0x78]
        fstp    dword ptr [edx - 8]
        jne     L_4249fe
L_424a2d:
        mov     edx, dword ptr [g_007d98fc]
        __emit  0xDD /* fstp st(0) */
        __emit  0xD8
        mov     ecx, dword ptr [ebp + 0x58]
        mov     edi, dword ptr [edx]
        mov     edx, ecx
        shr     ecx, 2
        mov     eax, 0x1010101
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        mov     eax, dword ptr [ebp]
        mov     ebx, 1
        mov     ecx, ebp
        mov     byte ptr [ebp + 0x10], bl
        call    dword ptr [eax + 0x98]
        pop     edi
        pop     esi
        mov     byte ptr [ebp + 0x11], bl
        mov     eax, ebx
        pop     ebx
        pop     ebp
        add     esp, 0x28
        ret     8
    }
}
