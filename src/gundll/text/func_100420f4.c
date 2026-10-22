/*
 * FUN_100420f4 (105 B) — __cdecl, 2 params.
 * WideCharToMultiByte wrapper: fast path for <0x100, else W2MB, else error.
 */

extern unsigned int g_1007567c;
extern unsigned int g_10051b90;
extern unsigned int g_1007568c;
extern void *g_100490fc;   /* IAT: WideCharToMultiByte */
extern void *__cdecl FUN_1004277d(void);

__declspec(naked) void __cdecl FUN_100420f4(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jnz     L1
        pop     ebp
        ret
    L1:
        cmp     dword ptr [g_1007567c], 0x0
        jnz     L2
        mov     cx, word ptr [ebp + 0xc]
        cmp     cx, 0xff
        ja      L3
        push    0x1
        mov     byte ptr [eax], cl
        pop     eax
        pop     ebp
        ret
    L2:
        lea     ecx, [ebp + 0x8]
        and     dword ptr [ebp + 0x8], 0x0
        push    ecx
        push    0x0
        push    dword ptr [g_10051b90]
        push    eax
        lea     eax, [ebp + 0xc]
        push    0x1
        push    eax
        push    0x220
        push    dword ptr [g_1007568c]
        call    dword ptr [g_100490fc]   /* WideCharToMultiByte */
        test    eax, eax
        jz      L3
        cmp     dword ptr [ebp + 0x8], 0x0
        jz      L4
    L3:
        call    FUN_1004277d
        mov     dword ptr [eax], 0x2a
        or      eax, 0xffffffff
    L4:
        pop     ebp
        ret
    }
}
