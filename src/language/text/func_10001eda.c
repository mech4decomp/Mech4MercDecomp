/*
 * FUN_10001eda (108 B) — walk the critical-section pointer table from
 * 0x100060f0 to 0x100061b0, DeleteCriticalSection + free each non-null
 * entry that is not one of the four fixed sections, then delete the four
 * fixed sections (0x10006114, 0x10006124, 0x10006134, 0x100060f4).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100020f9(void);               /* _free */

extern char g_100060f0;                               /* 0x100060f0 table base */
extern char g_10006134;                               /* 0x10006134 fixed section */
extern char g_10006124;                               /* 0x10006124 fixed section */
extern char g_10006114;                               /* 0x10006114 fixed section */
extern char g_100060f4;                               /* 0x100060f4 fixed section */
extern char g_100061b0;                               /* 0x100061b0 table end */

extern void *g_10006114p;                             /* 0x10006114 value */
extern void *g_10006124p;                             /* 0x10006124 value */
extern void *g_10006134p;                             /* 0x10006134 value */
extern void *g_100060f4p;                             /* 0x100060f4 value */

extern void (__stdcall *g_DeleteCriticalSection)(void *); /* IAT 0x10005040 */

__declspec(naked) void __stdcall FUN_10001eda(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [g_DeleteCriticalSection]
        mov     esi, offset g_100060f0
L_1ee7:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_1f18
        cmp     esi, offset g_10006134
        jz      L_1f18
        cmp     esi, offset g_10006124
        jz      L_1f18
        cmp     esi, offset g_10006114
        jz      L_1f18
        cmp     esi, offset g_100060f4
        jz      L_1f18
        push    eax
        call    edi
        push    dword ptr [esi]
        call    FUN_100020f9
        pop     ecx
L_1f18:
        add     esi, 4
        cmp     esi, offset g_100061b0
        jl      L_1ee7
        push    dword ptr [g_10006114p]
        call    edi
        push    dword ptr [g_10006124p]
        call    edi
        push    dword ptr [g_10006134p]
        call    edi
        push    dword ptr [g_100060f4p]
        call    edi
        pop     edi
        pop     esi
        ret
    }
}
