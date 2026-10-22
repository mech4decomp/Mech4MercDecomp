/*
 * FUN_0075AF00 (317 B) — MAPI send-mail helper. Loads MAPI32.DLL,
 * resolves MAPISendMail, builds a MapiMessage struct on the stack plus
 * a global attachment array, invokes MAPISendMail, and formats errors
 * into a global buffer via wsprintfA.
 *
 * __stdcall, RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b0c0;                 /* IAT: LoadLibraryA */
extern void *g_76b0c8;                 /* IAT: GetProcAddress */
extern void *g_76b0b8;                 /* IAT: FreeLibrary */
extern void *g_76b4f8;                 /* IAT: wsprintfA */
extern char g_7af37c[];                /* "MAPI32.DLL" */
extern char g_7af360[];                /* "Could not find MAPI32.DLL" */
extern char g_7af350[];                /* "MAPISendMail" */
extern char g_7af340[];                /* "Bad MAPI32.DLL" */
extern char g_7a6098[];                /* "Screen.bmp" */
extern char g_7a608c[];                /* "LogFile.txt" */
extern char g_7af334[];                /* "Error \'%s\'\n" */
extern char g_8bc350;                  /* DAT_008bc350 attachment array base */
extern char g_8bc358;                  /* +0x8 */
extern char g_8bc35c;                  /* +0xc */
extern char g_8bc360;                  /* +0x10 */
extern char g_8bc250;                  /* DAT_008bc250 error buffer */
extern int __stdcall FUN_0075ad90(int code);

__declspec(naked) char *__stdcall FUN_0075AF00(void *p1, void *p2, void *p3, int p4, int p5)
{
    __asm {
        sub     esp, 0x34
        push    ebp
        push    offset g_7af37c
        call    dword ptr [g_76b0c0]
        mov     ebp, eax
        test    ebp, ebp
        jnz     L_af21
        mov     eax, offset g_7af360
        pop     ebp
        add     esp, 0x34
        ret     0x14
L_af21:
        push    offset g_7af350
        push    ebp
        call    dword ptr [g_76b0c8]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jnz     L_af48
        push    ebp
        call    dword ptr [g_76b0b8]
        mov     eax, offset g_7af340
        pop     ebp
        add     esp, 0x34
        ret     0x14
L_af48:
        mov     edx, dword ptr [esp + 0x48]
        push    edi
        xor     eax, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0xc]
        rep     stosd
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
        xor     eax, eax
        test    edx, edx
        mov     ecx, 0xc
        mov     edi, offset g_8bc350
        rep     stosd
        mov     ecx, dword ptr [esp + 0x34]
        pop     edi
        jz      L_afae
        lea     eax, [ecx + ecx*2]
        shl     eax, 0x3
        mov     dword ptr [eax + g_8bc358], 0xffffffff
        inc     ecx
        mov     dword ptr [eax + g_8bc35c], edx
        mov     dword ptr [eax + g_8bc360], offset g_7a6098
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x34], offset g_8bc350
L_afae:
        mov     edx, dword ptr [esp + 0x4c]
        test    edx, edx
        jz      L_afe3
        lea     eax, [ecx + ecx*2]
        shl     eax, 0x3
        mov     dword ptr [eax + g_8bc358], 0xffffffff
        inc     ecx
        mov     dword ptr [eax + g_8bc35c], edx
        mov     dword ptr [eax + g_8bc360], offset g_7a608c
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x34], offset g_8bc350
L_afe3:
        mov     eax, dword ptr [esp + 0x3c]
        push    0x0
        push    0x9
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        push    0x0
        call    dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_b02d
        cmp     eax, 0x1
        jz      L_b02d
        push    eax
        call    FUN_0075ad90
        push    eax
        push    offset g_7af334
        push    offset g_8bc250
        call    dword ptr [g_76b4f8]
        add     esp, 0xc
        push    ebp
        call    dword ptr [g_76b0b8]
        mov     eax, offset g_8bc250
        pop     ebp
        add     esp, 0x34
        ret     0x14
L_b02d:
        push    ebp
        call    dword ptr [g_76b0b8]
        xor     eax, eax
        pop     ebp
        add     esp, 0x34
        ret     0x14
    }
}
