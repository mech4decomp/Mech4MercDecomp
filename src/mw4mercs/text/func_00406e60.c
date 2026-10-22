/*
 * FUN_00406e60 (78 B) — option-loading helper. Calls FUN_00708930 to read
 * a config value, then checks a string via FUN_006fc4d0. __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_76c6c0[];          /* 0x76c6c0 */
extern char g_str_76c6b4[];          /* 0x76c6b4 */
extern void __stdcall FUN_00708930(int, int *, int *, char *);
extern int  __cdecl FUN_006fc4d0(char *);

__declspec(naked) int __cdecl FUN_00406e60(void)
{
    __asm {
        sub     esp, 0x8
        push    0x0
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        push    offset g_str_76c6c0
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x4
        call    FUN_00708930
        __emit 0x8B   /* __emit: MSVC6 encodes mov eax,[esp] as 8B 04 24 (no disp); ref needs 8B 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jz      L6EA5
        push    offset g_str_76c6b4
        call    FUN_006fc4d0
        test    al, al
        jz      L6EA5
        xor     eax, eax
        add     esp, 0x8
        ret
L6EA5:
        mov     eax, 0x1
        add     esp, 0x8
        ret
    }
}
