/*
 * FUN_100125A0 (136 B) - __stdcall, RET 0x18.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3), then allocates arg4/arg6 via
 * FUN_10001dd0; on success sets this->+4=1 and stores +0x24/+0x28/+0x2c.
 * On failure frees via FUN_10001d60 and returns 0x8007000E.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);
extern void *__stdcall FUN_10001dd0(void *);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_100125A0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_125b9
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x18
L_125b9:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_12622
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebx
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jne     L_125e1
        test    ebx, ebx
        jne     L_1260e
L_125e1:
        mov     ebx, dword ptr [esp + 0x24]
        push    ebx
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jne     L_125f5
        test    ebx, ebx
        jne     L_1260e
L_125f5:
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
L_1260e:
        test    edi, edi
        mov     esi, 0x8007000e
        je      L_12620
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_12620:
        mov     eax, esi
L_12622:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x18
    }
}
