/*
 * FUN_10017370 (56 B) - __stdcall, RET 0x10 (4 args).
 * If this->field_0xc is non-zero, returns error 0xc112000d. Otherwise calls
 * FUN_1001c8b0(this, arg2, arg3); on success (>=0) sets this->field_0x4 = 1
 * and stores arg4 into this->field_0x24.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10017370(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_ret_err
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
    L_ret_err:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_done
        mov     edx, dword ptr [esp + 0x14]
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x24], edx
    L_done:
        pop     esi
        ret     0x10
    }
}
