/*
 * FUN_10024250 (96 B) - __stdcall, RET 0x14.  If this->obj(+0xc) is non-null
 * returns 0xC112000D; else calls FUN_1001c760(this, arg2), then duplicates
 * arg3 via FUN_10001dd0 (stdcall).  On success stores arg1/arg2 into
 * this->+0x20/+0x24, the dup result into this->+0x28, sets this->+4 = 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10024250(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_4267
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
L_4267:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_42ab
        mov     edi, dword ptr [esp + 0x1c]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_4292
        test    edi, edi
        je      L_4292
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x14
L_4292:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x28], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], edx
        mov     eax, ecx
L_42ab:
        pop     edi
        pop     esi
        ret     0x14
    }
}
