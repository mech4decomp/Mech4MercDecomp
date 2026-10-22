/*
 * FUN_100383bc (163 B) — __cdecl.
 * TLS/global teardown: runs atexit-style function table, calls two
 * cleanup helpers with data addresses, optionally re-enters teardown.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038461(void);
extern void __cdecl FUN_10038473(void);
extern void __cdecl FUN_1003846a(void);
extern int g_100754f4;
extern int g_100754f0;
extern char g_100754ec;
extern int g_10076bb0;
extern int g_10076bac;
extern void *g_100490d4;   /* IAT */
extern void *g_100490d0;   /* IAT */
extern void *g_100490cc;   /* IAT */
extern char g_1005002c;
extern char g_10050024;
extern char g_10050038;
extern char g_10050030;

__declspec(naked) void __cdecl FUN_100383bc(void)
{
    __asm {
        push    edi
        call    FUN_10038461
        push    0x1
        pop     edi
        cmp     dword ptr [g_100754f4], edi
        jnz     L_de
        push    dword ptr [esp + 0x8]
        call    dword ptr [g_100490d4]
        push    eax
        call    dword ptr [g_100490d0]
    L_de:
        cmp     dword ptr [esp + 0xc], 0x0
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        mov     dword ptr [g_100754f0], edi
        mov     byte ptr [g_100754ec], bl
        jnz     L_432
        mov     eax, dword ptr [g_10076bb0]
        test    eax, eax
        jz      L_421
        mov     ecx, dword ptr [g_10076bac]
        push    esi
        lea     esi, [ecx + -0x4]
        cmp     esi, eax
        jc      L_420
    L_40d:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_415
        call    eax
    L_415:
        sub     esi, 0x4
        cmp     esi, dword ptr [g_10076bb0]
        jnc     L_40d
    L_420:
        pop     esi
    L_421:
        push    offset g_1005002c
        push    offset g_10050024
        call    FUN_10038473
        pop     ecx
        pop     ecx
    L_432:
        push    offset g_10050038
        push    offset g_10050030
        call    FUN_10038473
        pop     ecx
        pop     ecx
        test    ebx, ebx
        pop     ebx
        jz      L_44f
        call    FUN_1003846a
        pop     edi
        ret
    L_44f:
        push    dword ptr [esp + 0x8]
        mov     dword ptr [g_100754f4], edi
        call    dword ptr [g_100490cc]
    }
}
