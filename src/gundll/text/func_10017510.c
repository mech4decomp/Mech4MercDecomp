/*
 * FUN_10017510 (94 B) - __stdcall, RET 0x14 (5 args).
 * If this->field_0xc is non-zero, returns error 0xc112000d. Otherwise calls
 * FUN_1001c8b0(this, arg2, arg3); on success duplicates arg5 via
 * FUN_10001dd0 (fails with 0x8007000e if it returns 0 and arg5 non-null),
 * then sets this->field_0x4=1, +0x24=arg4, +0x28=result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void);                 /* rel32 call */

__declspec(naked) void __stdcall FUN_10017510(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_go
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
    L_go:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_done
        mov     edi, dword ptr [esp + 0x1c]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_ok
        test    edi, edi
        je      L_ok
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x14
    L_ok:
        mov     edx, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x28], eax
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x24], edx
        mov     eax, ecx
    L_done:
        pop     edi
        pop     esi
        ret     0x14
    }
}
