/*
 * FUN_10022690 (96 B) - __stdcall, RET 0x14 (5 args).  Object init: if
 * this+0xc != 0 return 0xc112000d; else call FUN_1001c760(arg2, this); on
 * success allocate via FUN_10001dd0 (fail -> 0x8007000e), store results into
 * this+0x20/0x24/0x28, set this+4=1, return 0.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);   /* rel32 call */
extern void __cdecl FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10022690(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        push    edi
        je      L_a7
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
L_a7:
        mov     eax, dword ptr [esp+0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_eb
        mov     edi, dword ptr [esp+0x1c]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_d2
        test    edi, edi
        je      L_d2
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x14
L_d2:
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x20], edx
        mov     edx, dword ptr [esp+0x18]
        xor     ecx, ecx
        mov     dword ptr [esi+0x28], eax
        mov     byte ptr [esi+4], 1
        mov     dword ptr [esi+0x24], edx
        mov     eax, ecx
L_eb:
        pop     edi
        pop     esi
        ret     0x14
    }
}
