/*
 * FUN_10032F20 (564 B) - __stdcall, RET 0xc.  SEH-free COM object method
 * (thiscall-style, this=arg1) that dispatches on a status/error code
 * (arg2) via a jump table (0x10033154) + byte lookup table (0x10033184).
 * Each case performs a device/object operation (vtable calls, timeGetTime
 * IAT, FUN_10032170/100322c0/100324c0/100324f0/100326d0 helpers), then
 * runs a common teardown (FUN_10032f10) and returns an HRESULT in
 * [esp+0x24].  Default case returns E_FAIL (0x80004005).
 *
 * NOTE: the batch candidates 0x10032fde, 0x10033025, 0x10033049,
 * 0x10033069, 0x10033089, 0x100330a5, 0x100330dc, 0x1003310e, 0x1003311b
 * are all CASE HANDLERS of this switch function (no own prologue; they
 * share this frame and jump back into common code), NOT separate functions.
 * The jump table at 0x10033154 / byte table at 0x10033184 are .text DATA.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_10032ef0(void);   /* rel32 call (thiscall, this=ecx) */
extern void __fastcall FUN_10032f10(void);   /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_10032170(void);      /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_100322c0(void);      /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_100324c0(void);      /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_100324f0(void);      /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_100326d0(void);      /* rel32 call (thiscall, this=ecx) */
extern void *g_10049204;                     /* IAT: timeGetTime */

__declspec(naked) void __stdcall FUN_10032F20(void)
{
    __asm {
        sub     esp, 0x14
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     ecx, edi
        call    FUN_10032ef0
        mov     eax, dword ptr [esp + 0x28]
        mov     esi, dword ptr [esp + 0x2c]
        mov     ebp, dword ptr [edi + 0x18]
        xor     ecx, ecx
        cmp     eax, 0xffff0011
        setne   cl
        mov     dword ptr [esp + 0x14], eax
        add     eax, 0xffff
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x24], 0
        add     ecx, 0xc350
        cmp     eax, 0x13
        mov     dword ptr [esp + 0x10], ecx
        ja      L_137
        movzx   edx, byte ptr [eax + 0x10033184]
        jmp     dword ptr [edx*4 + 0x10033154]
    L_8c:
        call    dword ptr [g_10049204]
        mov     dword ptr [esi + 4], eax
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        je      L_a1
        lea     eax, [esi + 4]
        jmp     L_a3
    L_a1:
        xor     eax, eax
    L_a3:
        mov     dword ptr [esp + 0x18], 0x18
        mov     dword ptr [esp + 0x24], 0x15800e
    L_b3:
        test    eax, eax
        je      L_ba
    L_b7:
        mov     ebp, dword ptr [eax + 0x18]
    L_ba:
        test    ebp, ebp
        je      L_ca
        mov     edx, dword ptr [ebp]
        lea     eax, [esp + 0xc]
        push    eax
        push    ebp
        call    dword ptr [edx + 0xc]
    L_ca:
        mov     ecx, edi
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_de:
        mov     esi, dword ptr [esi + 8]
        mov     al, byte ptr [esi + 8]
        test    al, al
        je      L_007
        mov     esi, dword ptr [esi]
        test    esi, esi
        je      L_ffb
        lea     eax, [esi + 4]
        mov     dword ptr [esp + 0x18], 0x14
        jmp     L_b3
    L_ffb:
        xor     eax, eax
        mov     dword ptr [esp + 0x18], 0x14
        jmp     L_b3
    L_007:
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     ecx, edi
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_025:
        mov     ecx, dword ptr [esi + 8]
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, dword ptr [eax]
        sub     ecx, 0xc
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        mov     ecx, edi
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_049:
        push    esi
        mov     ecx, edi
        call    FUN_10032170
        mov     ecx, edi
        mov     dword ptr [esp + 0x24], eax
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_069:
        push    esi
        mov     ecx, edi
        call    FUN_100322c0
        mov     ecx, edi
        mov     dword ptr [esp + 0x24], eax
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_089:
        push    esi
        mov     ecx, edi
        call    FUN_100324c0
        mov     ecx, edi
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_a5:
        push    esi
        mov     ecx, edi
        call    FUN_100324f0
        test    eax, eax
        je      L_b6
        add     eax, 4
        jmp     L_b8
    L_b6:
        xor     eax, eax
    L_b8:
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0xc
        jne     L_b7
        mov     ecx, edi
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_dc:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        mov     dword ptr [esp + 0x18], 0x10
        je      L_ca
        lea     eax, [esi + 4]
        test    eax, eax
        jne     L_b7
        mov     ecx, edi
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_10e:
        mov     dword ptr [esp + 0x18], 0x10
        jmp     L_ba
    L_11b:
        push    esi
        mov     ecx, edi
        call    FUN_100326d0
        mov     ecx, edi
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
    L_137:
        mov     ecx, edi
        mov     dword ptr [esp + 0x24], 0x80004005
        call    FUN_10032f10
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret     0xc
        nop
    }
}
