/*
 * FUN_10026C10 (131 B) - __stdcall, RET 0x14.  COM-style registration helper:
 * if this->obj(+0xc) is non-null returns 0xC112000D; else calls FUN_1001c760,
 * duplicates two strings via FUN_10001dd0 (arg4/arg5), and on success stores
 * the handles into this->+0x20/+0x24/+0x28 and sets this->+4 = 1.  On
 * allocation failure frees via FUN_10001d60 and returns 0x8007000E.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);
extern void __stdcall FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10026C10(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_6c29
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x14
L_6c29:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_6c8d
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebx
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jne     L_6c4c
        test    ebx, ebx
        jne     L_6c79
L_6c4c:
        mov     ebx, dword ptr [esp + 0x20]
        push    ebx
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jne     L_6c60
        test    ebx, ebx
        jne     L_6c79
L_6c60:
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x24], edi
        pop     edi
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x28], ecx
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x14
L_6c79:
        test    edi, edi
        mov     esi, 0x8007000e
        je      L_6c8b
        push    edi
        call    FUN_10001d60
        add     esp, 4
L_6c8b:
        mov     eax, esi
L_6c8d:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
