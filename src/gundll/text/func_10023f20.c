/*
 * FUN_10023F20 (103 B) - __stdcall, RET 0x18.  If this->obj(+0xc) is non-null
 * returns 0xC112000D; else calls FUN_1001c760(this, arg2), then duplicates
 * arg3 via FUN_10001dd0 (stdcall).  On success stores arg1/arg2/arg4 into
 * this->+0x20/+0x24/+0x2c, sets this->+4 = 1 and this->+0x28 = dup result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10023F20(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_f37
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x18
L_f37:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_f82
        mov     edi, dword ptr [esp + 0x1c]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_f62
        test    edi, edi
        je      L_f62
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x18
L_f62:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x2c], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], edx
        mov     eax, ecx
L_f82:
        pop     edi
        pop     esi
        ret     0x18
    }
}
