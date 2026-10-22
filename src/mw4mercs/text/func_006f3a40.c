/*
 * FUN_006f3a40 (316 B) — Initialize the game's heap/allocator globals.
 *
 * Zeroes two global dword arrays (0x848e90[0x100] and 0x849298[0x12]),
 * clears a set of global pointers, then creates a hierarchy of named heaps
 * via FUN_006f4710 and stores the returned handles in globals.
 *
 * __cdecl, no params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_848e90[];
extern int g_849298[];
extern int g_849328;
extern int g_8492f0;
extern int g_8aa25c;
extern int g_8492f4;
extern int g_8492ec;
extern int g_8aa258;
extern int g_8492f8;
extern int g_8492e0;
extern int g_8492e4;
extern int g_849294;
extern int g_849290;
extern int g_849300;
extern int g_849304;
extern int g_849310;
extern int g_849308;
extern int g_849318;
extern int g_849320;
extern int g_84931c;
extern int g_849324;
extern int g_849314;
extern int g_8492fc;
extern int g_849334;
extern char g_858abc;
extern char g_79f7b4[];
extern char g_79f7a0[];
extern char g_79f790[];
extern char g_79f780[];
extern char g_79f774[];
extern char g_79f768[];
extern char g_79f75c[];
extern char g_79f754[];
extern char g_79f74c[];
extern char g_79f744[];
extern int __cdecl FUN_006f4710(const char *name, int a, int b);

__declspec(naked) void __cdecl FUN_006f3a40(void)
{
    __asm {
        push    esi
        xor     esi, esi
        push    edi
        xor     eax, eax
        push    esi
        mov     ecx, 0x100
        mov     edi, offset g_848e90
        rep     stosd
        push    esi
        mov     ecx, 0x12
        mov     edi, offset g_849298
        push    offset g_79f7b4
        mov     dword ptr [g_849328], esi
        rep     stosd
        mov     dword ptr [g_8492f0], esi
        mov     dword ptr [g_8aa25c], esi
        mov     dword ptr [g_8492f4], esi
        mov     dword ptr [g_8492ec], esi
        mov     dword ptr [g_8aa258], esi
        mov     dword ptr [g_8492f8], esi
        mov     dword ptr [g_8492e0], esi
        mov     dword ptr [g_8492e4], esi
        mov     dword ptr [g_849294], esi
        mov     dword ptr [g_849290], esi
        call    FUN_006f4710
        push    esi
        push    esi
        push    offset g_79f7a0
        mov     dword ptr [g_849300], eax
        call    FUN_006f4710
        push    eax
        push    esi
        push    offset g_79f790
        mov     dword ptr [g_849304], eax
        call    FUN_006f4710
        mov     dword ptr [g_849310], eax
        mov     eax, dword ptr [g_849300]
        push    eax
        push    esi
        push    offset g_79f780
        call    FUN_006f4710
        mov     ecx, dword ptr [g_849300]
        push    ecx
        push    esi
        push    offset g_79f774
        mov     dword ptr [g_849308], eax
        call    FUN_006f4710
        push    eax
        push    esi
        push    offset g_79f768
        mov     dword ptr [g_849318], eax
        call    FUN_006f4710
        mov     edx, dword ptr [g_849318]
        push    edx
        push    esi
        push    offset g_79f75c
        mov     dword ptr [g_849320], eax
        call    FUN_006f4710
        mov     dword ptr [g_84931c], eax
        mov     eax, dword ptr [g_849318]
        push    eax
        push    esi
        push    offset g_79f754
        call    FUN_006f4710
        mov     ecx, dword ptr [g_849300]
        push    ecx
        push    esi
        push    offset g_79f74c
        mov     dword ptr [g_849324], eax
        call    FUN_006f4710
        mov     edx, dword ptr [g_849300]
        push    edx
        push    esi
        push    offset g_79f744
        mov     dword ptr [g_849314], eax
        call    FUN_006f4710
        pop     edi
        mov     dword ptr [g_849334], esi
        mov     dword ptr [g_8492fc], eax
        mov     byte ptr [g_858abc], 1
        pop     esi
        ret
    }
}
