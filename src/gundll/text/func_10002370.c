/*
 * FUN_10002370 (154 B) - __stdcall, RET 0x8.
 * GUID-to-string helper: formats a GUID via StringFromGUID2 into a
 * wide buffer, converts to multibyte via WideCharToMultiByte, then
 * duplicates the string via FUN_10001d90 and stores it in *param_2.
 * (The gaptext slot VA 0x10002360 begins with a 6-byte IAT thunk
 * `jmp dword ptr [0x10049238]` + 10 NOPs; the real entry is 0x10002370.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004923c;          /* IAT: StringFromGUID2 */
extern void *g_100490e4;          /* IAT: GetLastError */
extern void *g_100490fc;          /* IAT: WideCharToMultiByte */
extern void __stdcall FUN_10001d90(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10002370(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        sub     esp, 0x78
        push    0x28
        lea     eax, [esp + 0x2c]
        push    eax
        push    ecx
        call    dword ptr [g_1004923c]
        test    eax, eax
        jnz     L_23a5
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_2404
        jle     L_2404
        and     eax, 0xffff
        or      eax, 0x80070000
        add     esp, 0x78
        ret     0x8
    L_23a5:
        push    0x0
        push    0x0
        push    0x28
        lea     edx, [esp + 0xc]
        push    edx
        push    -1
        lea     eax, [esp + 0x3c]
        push    eax
        push    0x0
        push    0x0
        call    dword ptr [g_100490fc]
        test    eax, eax
        jnz     L_23e1
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_2404
        jle     L_2404
        and     eax, 0xffff
        or      eax, 0x80070000
        add     esp, 0x78
        ret     0x8
    L_23e1:
        __emit 0x8D                     /* __emit: MSVC6 drops the +0 disp on lea ecx,[esp] (gives 8D 0C 24); ref is 8D 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        push    ecx
        call    FUN_10001d90
        mov     edx, dword ptr [esp + 0x80]
        xor     ecx, ecx
        test    eax, eax
        setnz   cl
        mov     dword ptr [edx], eax
        dec     ecx
        and     ecx, 0x8007000e
        mov     eax, ecx
    L_2404:
        add     esp, 0x78
        ret     0x8
    }
}
