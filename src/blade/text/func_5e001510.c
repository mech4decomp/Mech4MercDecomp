/*
 * FUN_5e001510 (241 B) — lazy loader. If DAT_5e03a4a4 (HMODULE) is NULL,
 * LoadLibraryA("ddraw"), then GetProcAddress for the 7 DirectDraw entry
 * points, storing them in DAT_5e03a4a8..c0. Returns 1 if the first four
 * are all present, else frees the library and returns 0.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e03a4a4;                       /* DAT_5e03a4a4 (HMODULE) */
extern int (*g_5e03a4a8)(void);              /* DirectDrawCreate */
extern int (*g_5e03a4ac)(void);              /* DirectDrawCreateClipper */
extern int (*g_5e03a4b0)(void);              /* DirectDrawEnumerateW */
extern int (*g_5e03a4b4)(void);              /* DirectDrawEnumerateA */
extern int (*g_5e03a4b8)(void);              /* DirectDrawEnumerateExW */
extern int (*g_5e03a4bc)(void);              /* DirectDrawEnumerateExA */
extern int (*g_5e03a4c0)(void);              /* DirectDrawCreateEx */
extern void *(__stdcall *g_5e035008)(const char *);   /* IAT: LoadLibraryA */
extern void *(__stdcall *g_5e035004)(void *, const char *); /* IAT: GetProcAddress */
extern int (__stdcall *g_5e035084)(void *);  /* IAT: FreeLibrary */

__declspec(naked) void __cdecl FUN_5e001510(void)
{
    __asm {
        mov     eax, dword ptr [g_5e03a4a4]
        test    eax, eax
        jnz     L_15fe
        push    0x5e038030
        call    dword ptr [g_5e035008]
        test    eax, eax
        mov     dword ptr [g_5e03a4a4], eax
        jz      L_15fe
        push    esi
        mov     esi, dword ptr [g_5e035004]
        push    0x5e038038
        push    eax
        call    esi
        mov     dword ptr [g_5e03a4a8], eax
        mov     eax, dword ptr [g_5e03a4a4]
        push    0x5e03804c
        push    eax
        call    esi
        mov     ecx, dword ptr [g_5e03a4a4]
        push    0x5e038064
        push    ecx
        mov     dword ptr [g_5e03a4ac], eax
        call    esi
        mov     edx, dword ptr [g_5e03a4a4]
        push    0x5e03807c
        push    edx
        mov     dword ptr [g_5e03a4b0], eax
        call    esi
        mov     dword ptr [g_5e03a4b4], eax
        mov     eax, dword ptr [g_5e03a4a4]
        push    0x5e038094
        push    eax
        call    esi
        mov     ecx, dword ptr [g_5e03a4a4]
        push    0x5e0380ac
        push    ecx
        mov     dword ptr [g_5e03a4b8], eax
        call    esi
        mov     edx, dword ptr [g_5e03a4a4]
        push    0x5e0380c4
        push    edx
        mov     dword ptr [g_5e03a4bc], eax
        call    esi
        mov     dword ptr [g_5e03a4c0], eax
        mov     eax, dword ptr [g_5e03a4a8]
        test    eax, eax
        pop     esi
        jz      L_15e4
        mov     eax, dword ptr [g_5e03a4ac]
        test    eax, eax
        jz      L_15e4
        mov     eax, dword ptr [g_5e03a4b0]
        test    eax, eax
        jz      L_15e4
        mov     eax, dword ptr [g_5e03a4b4]
        test    eax, eax
        jz      L_15e4
        mov     eax, 1
        ret
    L_15e4:
        mov     eax, dword ptr [g_5e03a4a4]
        test    eax, eax
        jz      L_15fe
        push    eax
        call    dword ptr [g_5e035084]
        mov     dword ptr [g_5e03a4a4], 0
    L_15fe:
        xor     eax, eax
        ret
    }
}
