/*
 * FUN_005DF62B (364 B) — __thiscall (ECX = this, RET 8, 2 stack params).
 *
 * In-.text data block at 0x5DF62B (5 NOP pad + body). Gameplay update:
 * if flag[0x484] set, copy 0x30 bytes from [this+0xd8]+0x80 into
 * [this+0x454] and clear the flag; else run a state machine (test
 * [this+0x41c], FPU compare against 0x76d970, clamp counters at
 * [this+0x158]/[this+0x450]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005fa070(void);
extern char __cdecl FUN_005e1240(void);
extern void __cdecl FUN_005df4f0(void);
extern void __cdecl FUN_005df420(void);
extern void __cdecl FUN_005df9e0(void);
extern void __cdecl FUN_005df390(void);
extern void __cdecl FUN_005df620(void);
extern void __cdecl FUN_005df7a0(void);
extern void __cdecl FUN_005df940(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_004dabc0(void);

extern double g_76d970;   /* DAT_0076d970 */
extern double g_7888a0;   /* DAT_007888a0 */
extern int    g_7dab44;   /* DAT_007dab44 */
extern int    g_7dab40;   /* DAT_007dab40 */

__declspec(naked) void __cdecl FUN_005DF62B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        push    ebp
        mov     ebp, ecx
        cmp     byte ptr [ebp + 0x484], 1
        push    esi
        push    edi
        jne     L675
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_005fa070
        mov     esi, dword ptr [ebp + 0xd8]
        add     esi, 0x80
        lea     edi, [ebp + 0x454]
        mov     ecx, 0xc
        rep     movsd
        pop     edi
        pop     esi
        mov     byte ptr [ebp + 0x484], 0
        pop     ebp
        ret     8
L675:
        mov     ecx, ebp
        call    FUN_005e1240
        test    al, al
        jne     L696
        push    0
        mov     ecx, ebp
        call    FUN_005df4f0
        mov     ecx, ebp
        call    FUN_005df420
        pop     edi
        pop     esi
        pop     ebp
        ret     8
L696:
        fld     qword ptr [ebp + 0x440]
        mov     ecx, ebp
        fcomp   qword ptr [g_76d970]
        fnstsw  ax
        test    ah, 0x40
        jne     L6b2
        call    FUN_005df9e0
        jmp     L6fc
L6b2:
        call    FUN_005df390
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        mov     esi, dword ptr [g_7dab40]
        mov     edi, dword ptr [ebp + 0x10]
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     al, byte ptr [ecx + 0x17fc]
        or      edi, 0x40
        test    al, al
        mov     dword ptr [ebp + 0x10], edi
        je      L6fc
        mov     ecx, ebp
        call    FUN_005df620
        test    eax, eax
        mov     ecx, ebp
        jne     L6f7
        call    FUN_005df7a0
        jmp     L6fc
L6f7:
        call    FUN_005df940
L6fc:
        cmp     byte ptr [ebp + 0x41c], 1
        jne     L791
        push    0
        call    FUN_00707e70
        fsub    dword ptr [ebp + 0x48c]
        fcomp   qword ptr [g_7888a0]
        fnstsw  ax
        test    ah, 0x41
        jne     L780
        push    0
        call    FUN_00707e70
        fstp    dword ptr [ebp + 0x48c]
        mov     esi, dword ptr [ebp + 0x158]
        mov     edx, dword ptr [ebp + 0x450]
        add     esi, edx
        mov     eax, esi
        test    eax, eax
        mov     dword ptr [ebp + 0x158], esi
        jg      L760
        mov     dword ptr [ebp + 0x158], 0
        mov     dword ptr [ebp + 0x450], 1
        jmp     L779
L760:
        cmp     eax, 5
        jl      L779
        mov     dword ptr [ebp + 0x158], 5
        mov     dword ptr [ebp + 0x450], 0xffffffff
L779:
        mov     ecx, ebp
        call    FUN_004dabc0
L780:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_005fa070
L791:
        pop     edi
        pop     esi
        pop     ebp
        ret     8
    }
}
