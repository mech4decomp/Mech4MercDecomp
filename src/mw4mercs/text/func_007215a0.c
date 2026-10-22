/*
 * FUN_007215a0 (258 B) — __cdecl, no args, returns bool. Anti-debugging
 * check: resolves IsDebuggerPresent, else reads TEB Self and IsBadReadPtr,
 * then queries the AeDebug registry key / profile string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7a5148[];
extern char g_7a149c[];
extern char g_87dd09;
extern char g_87dc04[];
extern char g_7a5110[];
extern char g_7a5104[];
extern char g_7a50fc[];
extern char g_76b768[];

extern void *(__stdcall *g_76b14c)(const char *);
extern void *(__stdcall *g_76b0c8)(void *, const char *);
extern unsigned long (__stdcall *g_76b158)(void);
extern unsigned long (__stdcall *g_76b208)(void);
extern int (__stdcall *g_76b128)(const void *, unsigned int);
extern long (__stdcall *g_76b030)(void *, const char *, unsigned long, unsigned long, void **);
extern long (__stdcall *g_76b018)(void *, const char *, unsigned long *, unsigned long *, char *, unsigned long *);
extern long (__stdcall *g_76b00c)(void *);
extern unsigned long (__stdcall *g_76b084)(const char *, const char *, const char *, char *, unsigned long);

__declspec(naked) void __stdcall FUN_007215a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    esi
        push    offset g_7a5148
        push    offset g_7a149c
        mov     byte ptr [g_87dd09], 0x0
        call    dword ptr [g_76b14c]
        push    eax
        call    dword ptr [g_76b0c8]
        test    eax, eax
        jz      L_15cd
        call    eax
        jmp     L_160a
L_15cd:
        call    dword ptr [g_76b158]
        mov     dword ptr [ebp - 0xc], eax
        call    dword ptr [g_76b208]
        mov     ecx, eax
        mov     eax, 0x18
        mov     eax, dword ptr fs:[eax]
        sub     eax, 0x10
        xor     eax, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x10], eax
        mov     esi, dword ptr [ebp - 0x10]
        xor     esi, ecx
        push    0xbe
        push    esi
        call    dword ptr [g_76b128]
        test    eax, eax
        jnz     L_1618
        mov     eax, dword ptr [esi + 0x20]
        and     eax, 0x1
L_160a:
        test    eax, eax
        jz      L_1618
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_1618:
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x20019
        push    0x0
        push    offset g_7a5110
        push    0x80000002
        mov     byte ptr [g_87dd09], 0x1
        mov     dword ptr [ebp - 0x8], 0x105
        call    dword ptr [g_76b030]
        test    eax, eax
        jnz     L_1677
        mov     edx, dword ptr [ebp - 0x4]
        lea     ecx, [ebp - 0x8]
        push    ecx
        push    offset g_87dc04
        push    eax
        push    eax
        push    offset g_7a5104
        push    edx
        call    dword ptr [g_76b018]
        mov     esi, eax
        mov     eax, dword ptr [ebp - 0x4]
        push    eax
        call    dword ptr [g_76b00c]
        xor     eax, eax
        test    esi, esi
        setz    al
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_1677:
        mov     ecx, dword ptr [ebp - 0x8]
        push    ecx
        push    offset g_87dc04
        push    offset g_76b768
        push    offset g_7a5104
        push    offset g_7a50fc
        call    dword ptr [g_76b084]
        xor     edx, edx
        cmp     edx, eax
        sbb     eax, eax
        neg     eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
