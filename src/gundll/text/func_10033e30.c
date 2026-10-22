/*
 * FUN_10033E30 (151 B) - __stdcall, RET 0x18.  Dispatches to
 * FUN_10033b10 (thiscall) with 5 args (arg1..arg5); on 0x80004005 failure,
 * if [arg0+0x18] is nonzero calls FUN_10033fd0 (fastcall) and skips the
 * sum; else sums a 16-bit field over edi entries of an array at arg4+8,
 * calls FUN_10034060 (thiscall, 2 args), then re-dispatches FUN_10033b10.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10033b10(void);        /* __thiscall, RET 0x14 */
extern void __fastcall FUN_10033fd0(void);
extern void FUN_10034060(void);        /* __thiscall, RET 0x8 */

__declspec(naked) void __stdcall FUN_10033E30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        push    edi
        push    ebp
        push    eax
        push    ecx
        lea     esi, [ebx - 0x18]
        push    edx
        mov     ecx, esi
        call    FUN_10033b10
        cmp     eax, 0x80004005
        jne     L_epi
        mov     eax, dword ptr [ebx + 0x18]
        test    eax, eax
        je      L_72
        mov     ecx, esi
        call    FUN_10033fd0
        jmp     L_a4
    L_72:
        test    edi, edi
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], eax
        jle     L_96
        mov     cx, word ptr [esp + 0x14]
        lea     eax, [ebp + 8]
        mov     edx, edi
    L_88:
        add     cx, word ptr [eax]
        add     eax, 0xc
        dec     edx
        jne     L_88
        mov     word ptr [esp + 0x14], cx
    L_96:
        mov     ecx, dword ptr [esp + 0x14]
        push    0
        push    ecx
        mov     ecx, esi
        call    FUN_10034060
    L_a4:
        test    eax, eax
        jl      L_epi
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    edi
        push    ebp
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_10033b10
    L_epi:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    }
}
