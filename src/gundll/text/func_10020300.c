/*
 * FUN_10020300 (96 B) - __stdcall, RET 0x14 (5 args).  Registration helper:
 * if this->obj(+0xc) is non-zero returns 0xC112000D; else calls
 * FUN_1001c760(this, arg2), then FUN_10001dd0(arg3) to duplicate a string;
 * on failure (null result with non-null arg3) returns 0x8007000E.  On
 * success stores the duplicated pointer into this->+0x20, arg4 into
 * this->+0x24, arg5 into this->+0x28, sets this->+4=1, returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);

__declspec(naked) void __stdcall FUN_10020300(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_20317
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
L_20317:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_2035b
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_20342
        test    edi, edi
        je      L_20342
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x14
L_20342:
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x28], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], edx
        mov     eax, ecx
L_2035b:
        pop     edi
        pop     esi
        ret     0x14
    }
}
