/*
 * FUN_100248A0 (136 B) - __stdcall, RET 0x18 (6 args).  Registration helper:
 * if this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3); on success duplicates arg4/arg6 via
 * FUN_10001dd0, stores them at +0x24/+0x2c, arg5 at +0x28, sets +4=1.
 * On failure returns 0x8007000E (freeing arg4 dup via FUN_10001d60).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_100248A0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_b9
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x18
L_b9:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_922
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebx
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jne     L_e1
        test    ebx, ebx
        jne     L_90e
L_e1:
        mov     ebx, dword ptr [esp + 0x24]
        push    ebx
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jne     L_f5
        test    ebx, ebx
        jne     L_90e
L_f5:
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x24], edi
        pop     edi
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x28], edx
        mov     dword ptr [esi + 0x2c], ecx
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x18
L_90e:
        test    edi, edi
        mov     esi, 0x8007000e
        je      L_920
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_920:
        mov     eax, esi
L_922:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x18
    }
}
