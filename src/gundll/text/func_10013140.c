/*
 * FUN_10013140 (82 B) - __stdcall, RET 0xc.  If this->obj(+0xc) is non-null
 * returns 0xC112000D; else calls FUN_1001ca10(arg2, this), then
 * FUN_10001dd0(arg3).  If that fails and arg3 is non-null returns
 * 0x8007000E; else stores +0x1c=result, +4=1, returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10013140(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_13157
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_13157:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L_1318d
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_13182
        test    edi, edi
        je      L_13182
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0xc
L_13182:
        xor     ecx, ecx
        mov     dword ptr [esi + 0x1c], eax
        mov     byte ptr [esi + 4], 1
        mov     eax, ecx
L_1318d:
        pop     edi
        pop     esi
        ret     0xc
    }
}
