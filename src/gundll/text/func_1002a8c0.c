/*
 * FUN_1002A8C0 (131 B) - __stdcall, RET 0x14 (5 args).
 * COM-style object initializer. If this+0xc != 0 return 0xc112000d.
 * Else call FUN_1001ca10(this,arg2); if >=0, clone arg3 (FUN_10001dd0)
 * into this+0x1c and arg5 into this+0x24, set this+0x4=1 and this+0x20=arg4.
 * On allocation failure free the partial clone and return 0x8007000e.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);    /* rel32 call */
extern void __stdcall FUN_10001dd0(void);  /* rel32 call (clone helper) */
extern void __cdecl FUN_10001d60(void);    /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1002A8C0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_d9
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x14
    L_d9:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L_93d
        mov     ebx, dword ptr [esp + 0x18]
        push    ebx
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jne     L_fc
        test    ebx, ebx
        jne     L_929
    L_fc:
        mov     ebx, dword ptr [esp + 0x20]
        push    ebx
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jne     L_910
        test    ebx, ebx
        jne     L_929
    L_910:
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x1c], edi
        pop     edi
        mov     byte ptr [esi + 4], 0x1
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x24], ecx
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x14
    L_929:
        test    edi, edi
        mov     esi, 0x8007000e
        je      L_93b
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_93b:
        mov     eax, esi
    L_93d:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
