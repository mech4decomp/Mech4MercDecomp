/*
 * FUN_00703ab0 (143 B) — teardown: frees several global objects, resets
 * flags, and re-registers a callback via FUN_00740d10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f8a00(void);
extern void __cdecl FUN_00741120(void *a, void *b);
extern void __cdecl FUN_006f4230(void *p);
extern void __cdecl FUN_00742910(void);
extern void __cdecl FUN_00740ec0(void *p);
extern void __cdecl FUN_00740db0(void *p);
extern void __cdecl FUN_00740d10(void *a, void *b, int c, void *d, void *e);
extern void __cdecl FUN_00701de0(void);
extern void __cdecl FUN_00701da0(void);

extern char g_7a2e00[];
extern char g_7a2e10[];

extern int g_008aaabc;
extern int g_008aaae4;
extern int g_008aaab8;
extern char g_008aaac1;

__declspec(naked) void FUN_00703ab0(void)
{
    __asm {
        push    ebx
        call    FUN_006f8a00
        mov     eax, dword ptr [g_008aaabc]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      loc_3ad3
        push    eax
        mov     eax, dword ptr [g_008aaae4]
        push    eax
        call    FUN_00741120
        mov     dword ptr [g_008aaabc], ebx
loc_3ad3:
        mov     eax, dword ptr [g_008aaab8]
        cmp     eax, ebx
        jz      loc_3ae8
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_008aaab8], ebx
loc_3ae8:
        cmp     byte ptr [g_008aaac1], bl
        jz      loc_3b07
        call    FUN_00742910
        mov     ecx, dword ptr [g_008aaae4]
        push    ecx
        call    FUN_00740ec0
        mov     byte ptr [g_008aaac1], bl
loc_3b07:
        mov     eax, dword ptr [g_008aaae4]
        cmp     eax, ebx
        jz      loc_3b1c
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_008aaae4], ebx
loc_3b1c:
        push    offset g_008aaae4
        push    offset g_7a2e00
        push    0x1
        push    ebx
        push    offset g_7a2e10
        call    FUN_00740d10
        call    FUN_00701de0
        call    FUN_00701da0
        pop     ebx
        ret
    }
}
