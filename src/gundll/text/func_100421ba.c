/*
 * FUN_100421ba (431 B) __cdecl.
 * WideCharToMultiByte wrapper: converts a wide string to a multibyte
 * string, handling the DAT_1007567c "is-unicode" flag and the
 * DAT_10051b90 per-char buffer size. Returns byte count or -1 on error.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_1007567c;   /* DAT_1007567c unicode flag */
extern unsigned int g_1007568c;   /* DAT_1007568c codepage */
extern unsigned int g_10051b90;   /* DAT_10051b90 per-char buffer size */
extern void *g_100490fc;          /* IAT: WideCharToMultiByte */
extern void *g_100490e4;          /* IAT: GetLastError */
extern void __cdecl FUN_10042369(void);   /* rel32 call */
extern void __cdecl FUN_1003791a(void);   /* rel32 call */
extern void __cdecl FUN_1004277d(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_100421ba(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        xor     ebx, ebx
        xor     edi, edi
        cmp     esi, ebx
        mov     dword ptr [ebp - 0x8], ebx
        jz      L_1004231a
        mov     edx, dword ptr [ebp + 0x10]
        cmp     edx, ebx
        jnz     L_100421e3
        xor     eax, eax
        jmp     L_10042364
    L_100421e3:
        cmp     dword ptr [g_1007567c], ebx
        jnz     L_10042218
        cmp     edx, ebx
        jbe     L_10042211
        mov     ecx, dword ptr [ebp + 0xc]
    L_100421f2:
        cmp     word ptr [ecx], 0xff
        ja      L_10042356
        mov     al, byte ptr [ecx]
        mov     byte ptr [edi + esi], al
        mov     ax, word ptr [ecx]
        inc     ecx
        inc     ecx
        test    ax, ax
        jz      L_10042211
        inc     edi
        cmp     edi, edx
        jc      L_100421f2
    L_10042211:
        mov     eax, edi
        jmp     L_10042364
    L_10042218:
        cmp     dword ptr [g_10051b90], 0x1
        jnz     L_10042271
        cmp     edx, ebx
        jbe     L_10042235
        push    edx
        push    dword ptr [ebp + 0xc]
        call    FUN_10042369
        pop     ecx
        mov     dword ptr [ebp + 0x10], eax
        pop     ecx
        mov     edx, eax
    L_10042235:
        lea     eax, [ebp - 0x8]
        push    eax
        push    ebx
        push    edx
        push    esi
        push    edx
        push    dword ptr [ebp + 0xc]
        push    0x220
        push    dword ptr [g_1007568c]
        call    dword ptr [g_100490fc]
        cmp     eax, ebx
        jz      L_10042356
        cmp     dword ptr [ebp - 0x8], ebx
        jnz     L_10042356
        cmp     byte ptr [eax + esi - 0x1], bl
        jnz     L_10042364
        jmp     L_10042353
    L_10042271:
        lea     eax, [ebp - 0x8]
        mov     edi, dword ptr [g_100490fc]
        push    eax
        push    ebx
        push    edx
        push    esi
        push    -0x1
        push    dword ptr [ebp + 0xc]
        push    0x220
        push    dword ptr [g_1007568c]
        call    edi
        mov     esi, eax
        cmp     esi, ebx
        jz      L_100422a7
        cmp     dword ptr [ebp - 0x8], ebx
        jnz     L_10042356
        lea     eax, [esi - 0x1]
        jmp     L_10042364
    L_100422a7:
        cmp     dword ptr [ebp - 0x8], ebx
        jnz     L_10042356
        call    dword ptr [g_100490e4]
        cmp     eax, 0x7a
        jnz     L_10042356
        cmp     esi, dword ptr [ebp + 0x10]
        jnc     L_10042316
    L_100422bf:
        lea     eax, [ebp - 0x8]
        push    eax
        push    ebx
        push    dword ptr [g_10051b90]
        lea     eax, [ebp - 0x2]
        push    eax
        push    0x1
        push    dword ptr [ebp + 0xc]
        push    ebx
        push    dword ptr [g_1007568c]
        call    edi
        cmp     eax, ebx
        mov     dword ptr [ebp - 0xc], eax
        jz      L_10042356
        cmp     dword ptr [ebp - 0x8], ebx
        jnz     L_10042356
        lea     ecx, [eax + esi]
        cmp     ecx, dword ptr [ebp + 0x10]
        ja      L_10042316
        xor     edx, edx
        cmp     eax, ebx
        jle     L_10042310
    L_100422fb:
        mov     cl, byte ptr [ebp + edx - 0x2]
        mov     eax, dword ptr [ebp + 0x8]
        cmp     cl, bl
        mov     byte ptr [esi + eax], cl
        jz      L_10042316
        inc     edx
        inc     esi
        cmp     edx, dword ptr [ebp - 0xc]
        jl      L_100422fb
    L_10042310:
        add     dword ptr [ebp + 0xc], 0x2
        __emit 0xEB          /* __emit: backward jmp rel8 miscomputed by MSVC6 (off-by-5, reloc between branch and target); ref EB A9 */
        __emit 0xA9
    L_10042316:
        mov     eax, esi
        jmp     L_10042364
    L_1004231a:
        cmp     dword ptr [g_1007567c], ebx
        jnz     L_1004232d
        push    dword ptr [ebp + 0xc]
        call    FUN_1003791a
        pop     ecx
        jmp     L_10042364
    L_1004232d:
        lea     eax, [ebp - 0x8]
        push    eax
        push    ebx
        push    ebx
        push    ebx
        push    -0x1
        push    dword ptr [ebp + 0xc]
        push    0x220
        push    dword ptr [g_1007568c]
        call    dword ptr [g_100490fc]
        cmp     eax, ebx
        jz      L_10042356
        cmp     dword ptr [ebp - 0x8], ebx
        jnz     L_10042356
    L_10042353:
        dec     eax
        jmp     L_10042364
    L_10042356:
        call    FUN_1004277d
        mov     dword ptr [eax], 0x2a
        or      eax, 0xffffffff
    L_10042364:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
