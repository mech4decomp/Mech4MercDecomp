/*
 * FUN_1000fd40 (87 B) - __stdcall, RET 0x10 (4 args).
 * If this->field_0xc is non-zero, returns error 0xc112000d. Otherwise calls
 * FUN_1001c8b0(this, arg2, arg3); on success duplicates arg4 via
 * FUN_10001dd0; if that fails and arg4 non-null returns 0x8007000e. On
 * success stores the dup into this->field_0x24 and sets this->field_0x4 = 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000fd40(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_57
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
    L_57:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_92
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_87
        test    edi, edi
        je      L_87
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x10
    L_87:
        xor     ecx, ecx
        mov     dword ptr [esi + 0x24], eax
        mov     byte ptr [esi + 0x4], 0x1
        mov     eax, ecx
    L_92:
        pop     edi
        pop     esi
        ret     0x10
    }
}
