/*
 * FUN_10033ED0 (86 B) - __stdcall, RET 0x10.  Dispatches to
 * FUN_10033c10 (thiscall) with 3 args (arg1..arg3); on failure, if
 * [arg0+0x18] is nonzero calls FUN_10033fd0 (fastcall), else calls
 * FUN_10034060 (thiscall, 2 args), then re-dispatches FUN_10033c10.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10033c10(void);        /* __thiscall, RET 0xC */
extern void __fastcall FUN_10033fd0(void);
extern void FUN_10034060(void);        /* __thiscall, RET 0x8 */

__declspec(naked) void __stdcall FUN_10033ED0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        push    edi
        push    ebp
        lea     esi, [ebx - 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_10033c10
        test    eax, eax
        jge     L_epi
        mov     eax, dword ptr [ebx + 0x18]
        test    eax, eax
        mov     ecx, esi
        je      L_05
        call    FUN_10033fd0
        jmp     L_0d
    L_05:
        push    0
        push    edi
        call    FUN_10034060
    L_0d:
        test    eax, eax
        jl      L_epi
        mov     ecx, dword ptr [esp + 0x18]
        push    edi
        push    ebp
        push    ecx
        mov     ecx, esi
        call    FUN_10033c10
    L_epi:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
