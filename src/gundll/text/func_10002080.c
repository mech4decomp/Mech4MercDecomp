/*
 * FUN_10002080 (148 B) - __stdcall, RET 0xC.
 * Wide-string to allocated buffer helper: queries the required size via
 * WideCharToMultiByte, allocates via FUN_10001d50, converts via
 * FUN_10002020, and returns the buffer + byte count. Frees the buffer
 * on conversion failure.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_100490fc;          /* IAT: WideCharToMultiByte */
extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern void __stdcall FUN_10002020(void); /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10002080(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        test    ebx, ebx
        mov     dword ptr [esp + 0x4], 0
        jnz     L_2099
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0xc
    L_2099:
        push    esi
        push    edi
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    -1
        push    ebx
        push    0x0
        push    0xfde9
        call    dword ptr [g_100490fc]
        mov     edi, eax
        push    edi
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jnz     L_20d2
        mov     edi, 0x8007000e
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    L_20d2:
        lea     eax, [esp + 0xc]
        push    eax
        push    edi
        push    esi
        push    ebx
        call    FUN_10002020
        mov     edi, eax
        test    edi, edi
        jl      L_2102
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx], esi
        jz      L_210b
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [eax], edx
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    L_2102:
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_210b:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
