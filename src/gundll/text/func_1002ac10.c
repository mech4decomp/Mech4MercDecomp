/*
 * FUN_1002AC10 (89 B) - __stdcall, RET 0x10 (4 args).
 * COM-style initializer. If this->+0xc != 0 return 0xc112000d; else call
 * FUN_1001c760(this,arg2); if >=0, clone arg3 (FUN_10001dd0) into
 * this->+0x20 (on failure return 0x8007000e), set this->+0x4=1 and
 * this->+0x24=arg4, return 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c760(void);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void);   /* rel32 call (clone helper) */

__declspec(naked) void __stdcall FUN_1002AC10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_ac27
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
    L_ac27:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_ac64
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_ac52
        test    edi, edi
        je      L_ac52
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x10
    L_ac52:
        mov     edx, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x20], eax
        mov     byte ptr [esi + 4], 0x1
        mov     dword ptr [esi + 0x24], edx
        mov     eax, ecx
    L_ac64:
        pop     edi
        pop     esi
        ret     0x10
    }
}
