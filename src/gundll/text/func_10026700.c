/*
 * FUN_10026700 (82 B) - __stdcall, RET 0xc.  If this+0xc != 0 return
 * 0xc112000d; else call FUN_1001c760(arg2,this); if >= 0, duplicate arg3 via
 * FUN_10001dd0 and, on success, store the handle into this+0x20 and set
 * this+4 = 1.  Returns 0 on success, 0x8007000e if the duplicate failed.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void); /* rel32 call */

__declspec(naked) void __stdcall FUN_10026700(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_26717
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_26717:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_2674d
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_26742
        test    edi, edi
        je      L_26742
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0xc
L_26742:
        xor     ecx, ecx
        mov     dword ptr [esi + 0x20], eax
        mov     byte ptr [esi + 4], 1
        mov     eax, ecx
L_2674d:
        pop     edi
        pop     esi
        ret     0xc
    }
}
