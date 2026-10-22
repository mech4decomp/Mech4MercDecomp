/*
 * FUN_10002260 (154 B) - __stdcall, RET 0x8.
 * GUID-to-string helper: formats a GUID via StringFromGUID2 into a
 * wide buffer, converts to multibyte via WideCharToMultiByte, then
 * duplicates the string via FUN_10001d90 and stores it in *param_2.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *g_1004923c;          /* IAT: StringFromGUID2 */
extern void *g_100490e4;          /* IAT: GetLastError */
extern void *g_100490fc;          /* IAT: WideCharToMultiByte */
extern void __stdcall FUN_10001d90(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10002260(void)
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
        jnz     L_2295
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_22f4
        jle     L_22f4
        and     eax, 0xffff
        or      eax, 0x80070000
        add     esp, 0x78
        ret     0x8
    L_2295:
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
        jnz     L_22d1
        call    dword ptr [g_100490e4]
        test    eax, eax
        jl      L_22f4
        jle     L_22f4
        and     eax, 0xffff
        or      eax, 0x80070000
        add     esp, 0x78
        ret     0x8
    L_22d1:
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
    L_22f4:
        add     esp, 0x78
        ret     0x8
    }
}
