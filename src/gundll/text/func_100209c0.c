/*
 * FUN_100209C0 (82 B) - __stdcall, RET 0xc.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls FUN_1001c760,
 * duplicates a string via FUN_10001dd0, stores the handle at +0x20 and
 * sets the +0x4 flag.  Returns 0x8007000E on alloc failure.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100209C0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_d7
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_d7:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_a0d
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_a02
        test    edi, edi
        je      L_a02
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0xc
L_a02:
        xor     ecx, ecx
        mov     dword ptr [esi + 0x20], eax
        mov     byte ptr [esi + 0x4], 1
        mov     eax, ecx
L_a0d:
        pop     edi
        pop     esi
        ret     0xc
    }
}
