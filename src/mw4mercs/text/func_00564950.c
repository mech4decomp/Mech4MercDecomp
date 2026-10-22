/*
 * FUN_00564950 (330 B) — loads MW4Stats.dll and resolves the 8
 * MW4StatsDll_* export addresses into globals 0x7eebd8..0x7eebf4.
 * On any failure, zeroes them, frees the library, returns 0x80004005.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007eebd4;
extern int g_007eebd8;
extern int g_007eebdc;
extern int g_007eebe0;
extern int g_007eebe4;
extern int g_007eebe8;
extern int g_007eebec;
extern int g_007eebf0;
extern int g_007eebf4;
extern char g_str_76c944[];
extern char g_str_77ec28[];
extern char g_str_77ec0c[];
extern char g_str_77ebec[];
extern char g_str_77ebd0[];
extern char g_str_77ebb0[];
extern char g_str_77eb98[];
extern char g_str_77eb80[];
extern char g_str_77eb68[];

extern void *(__cdecl *g_LoadLibraryA)(const char *);
extern void *(__cdecl *g_GetProcAddress)(void *, const char *);
extern int (__cdecl *g_FreeLibrary)(void *);

__declspec(naked) void FUN_00564950(void)
{
    __asm {
        push    esi
        push    offset g_str_76c944
        call    dword ptr [g_LoadLibraryA]
        cmp     eax, 0x20
        mov     dword ptr [g_007eebd4], eax
        jnc     L_977
        mov     dword ptr [g_007eebd4], 0x0
        mov     eax, 0x80004005
        pop     esi
        ret
L_977:
        mov     esi, dword ptr [g_GetProcAddress]
        push    offset g_str_77ec28
        push    eax
        call    esi
        mov     dword ptr [g_007eebd8], eax
        mov     eax, dword ptr [g_007eebd4]
        push    offset g_str_77ec0c
        push    eax
        call    esi
        mov     ecx, dword ptr [g_007eebd4]
        push    offset g_str_77ebec
        push    ecx
        mov     dword ptr [g_007eebdc], eax
        call    esi
        mov     edx, dword ptr [g_007eebd4]
        push    offset g_str_77ebd0
        push    edx
        mov     dword ptr [g_007eebe0], eax
        call    esi
        mov     dword ptr [g_007eebe4], eax
        mov     eax, dword ptr [g_007eebd4]
        push    offset g_str_77ebb0
        push    eax
        call    esi
        mov     ecx, dword ptr [g_007eebd4]
        push    offset g_str_77eb98
        push    ecx
        mov     dword ptr [g_007eebe8], eax
        call    esi
        mov     edx, dword ptr [g_007eebd4]
        push    offset g_str_77eb80
        push    edx
        mov     dword ptr [g_007eebec], eax
        call    esi
        mov     dword ptr [g_007eebf0], eax
        mov     eax, dword ptr [g_007eebd4]
        push    offset g_str_77eb68
        push    eax
        call    esi
        mov     ecx, dword ptr [g_007eebd8]
        xor     esi, esi
        cmp     ecx, esi
        mov     dword ptr [g_007eebf4], eax
        jz      L_a50
        cmp     dword ptr [g_007eebdc], esi
        jz      L_a50
        cmp     dword ptr [g_007eebe0], esi
        jz      L_a50
        cmp     dword ptr [g_007eebe4], esi
        jz      L_a50
        cmp     dword ptr [g_007eebe8], esi
        jz      L_a50
        cmp     dword ptr [g_007eebec], esi
        jz      L_a50
        cmp     dword ptr [g_007eebf0], esi
        jz      L_a50
        cmp     eax, esi
        jz      L_a50
        xor     eax, eax
        pop     esi
        ret
L_a50:
        mov     ecx, dword ptr [g_007eebd4]
        push    ecx
        mov     dword ptr [g_007eebd8], esi
        mov     dword ptr [g_007eebdc], esi
        mov     dword ptr [g_007eebe0], esi
        mov     dword ptr [g_007eebe4], esi
        mov     dword ptr [g_007eebe8], esi
        mov     dword ptr [g_007eebec], esi
        mov     dword ptr [g_007eebf0], esi
        mov     dword ptr [g_007eebf4], esi
        call    dword ptr [g_FreeLibrary]
        mov     dword ptr [g_007eebd4], esi
        mov     eax, 0x80004005
        pop     esi
        ret
    }
}
