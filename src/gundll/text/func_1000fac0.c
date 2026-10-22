/*
 * FUN_1000fac0 (100 B) - __stdcall, RET 0x10. Parses a
 * "ChangePasswordFromHintRes" event string via FUN_1001c920 / FUN_1001c660.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c920(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern char g_10049f94[];                 /* "ChangePasswordFromHintRes" string, push offset */
extern short g_100502b0;                  /* data ptr, push offset */

__declspec(naked) void __stdcall FUN_1000fac0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 8]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        push    offset g_10049f94
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x20], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_fb1d
        mov     eax, dword ptr [esp + 0xc]
        push    offset g_100502b0
        lea     edx, [esp + 0x10]
        push    edx
        sub     esi, eax
        lea     ecx, [edi + eax*2]
        push    esi
        push    ecx
        mov     ebx, eax
        call    FUN_1001c660
        add     esp, 0x10
        test    eax, eax
        jl      L_fb1d
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x20]
        add     ebx, ecx
        mov     dword ptr [edx], ebx
L_fb1d:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
