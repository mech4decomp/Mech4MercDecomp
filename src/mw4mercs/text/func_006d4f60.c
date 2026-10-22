/*
 * FUN_006D4F60 (240 B) — in-.text data block function (block 0x6D4BB1).
 * Serializes a structure into a string via FUN_0040eda0 / FUN_00411d10 /
 * FUN_0040dd50 / FUN_006d3f20 / FUN_004123f0 / FUN_0040de20 and IAT
 * callback 0x76b420.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_006d3f20(void);
extern void __cdecl FUN_004123f0(void);
extern void __cdecl FUN_0040de20(void);

extern void (__cdecl *g_0076b420)(void);   /* IAT @ 0x76b420 */

extern char g_79eb80[];   /* string @ 0x79eb80 */
extern char g_79eb70[];   /* string @ 0x79eb70 */
extern char g_79eb64[];   /* string @ 0x79eb64 */
extern char g_79eb5c[];   /* string @ 0x79eb5c */
extern char g_79eb54[];   /* string @ 0x79eb54 */
extern char g_79eb44[];   /* string @ 0x79eb44 */
extern char g_79eb8c[];   /* string @ 0x79eb8c */
extern char g_79eb38[];   /* string @ 0x79eb38 */

__declspec(naked) void FUN_006D4F60(void)
{
    __asm {
        sub     esp, 0x90
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0xa4]
        push    offset g_79eb80
        call    FUN_0040eda0
        mov     ebp, eax
        push    6
        push    offset g_79eb70
        mov     ecx, ebp
        call    FUN_00411d10
        mov     eax, dword ptr [edi + 4]
        push    eax
        push    offset g_79eb64
        mov     ecx, ebp
        call    FUN_00411d10
        mov     ecx, dword ptr [edi + 8]
        push    ecx
        push    offset g_79eb5c
        mov     ecx, ebp
        call    FUN_00411d10
        mov     edx, dword ptr [edi + 0xc]
        push    edx
        push    offset g_79eb54
        mov     ecx, ebp
        call    FUN_00411d10
        mov     ebx, dword ptr [edi + 0x118]
        push    ebx
        push    offset g_79eb44
        mov     ecx, ebp
        call    FUN_00411d10
        push    0
        lea     ecx, [esp + 0x14]
        call    FUN_0040dd50
        xor     esi, esi
        test    ebx, ebx
        jle     L5029
        mov     edi, dword ptr [edi + 0x11c]
L4FE7:
        push    esi
        lea     eax, [esp + 0x64]
        push    offset g_79eb8c
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        lea     ecx, [esp + 0x60]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_0040eda0
        mov     edx, dword ptr [esp + 0xac]
        mov     ecx, dword ptr [esp + 0xa8]
        push    edx
        push    ecx
        mov     ecx, dword ptr [edi]
        push    eax
        call    FUN_006d3f20
        inc     esi
        add     edi, 4
        cmp     esi, ebx
        jl      L4FE7
L5029:
        lea     edx, [esp + 0x10]
        push    edx
        push    offset g_79eb38
        mov     ecx, ebp
        call    FUN_004123f0
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x90
        ret     0xc
    }
}
