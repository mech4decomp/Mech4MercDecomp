/*
 * FUN_006f07e0 (324 B) — Process a command/event, logging errors and
 * updating global tables.
 *
 * Calls FUN_005237f0 to read a command; on -1 logs via FUN_0072d830/
 * FUN_006e4210. Then FUN_006efe10, and on success updates global tables
 * 0x842b10/0x842710/0x842310. Handles a sub-command (0..8) via
 * FUN_00523cb0 or LoadStringA, then FUN_005240b0 / FUN_006f0770.
 *
 * __cdecl, RET 0 (no params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_841768;
extern int g_848c6c;
extern int g_842b10[];
extern int g_842710[];
extern int g_842310[];
extern int g_8422c8[];
extern void *g_7b82b4;
extern int (__cdecl *g_76b574)(void *inst, int id, char *buf, int max);  /* LoadStringA */
extern int __cdecl FUN_005237f0(int a, int b, void *c);
extern void *__cdecl FUN_0072d830(void *a, int b);
extern void __cdecl FUN_006e4210(void *a, void *b, int c);
extern int __cdecl FUN_006efe10(int a, void *b);
extern int __cdecl FUN_00523cb0(int a, int b, void *c);
extern int __cdecl FUN_005240b0(int a, int b, void *c);
extern void __cdecl FUN_006f0770(void);

__declspec(naked) int __cdecl FUN_006f07e0(void)
{
    __asm {
        sub     esp, 0x110
        lea     eax, [esp + 0x118]
        mov     dword ptr [esp + 4], eax
        lea     eax, [esp + 4]
        push    eax
        push    3
        lea     ecx, [esp + 0x11c]
        lea     edx, [esp + 0x124]
        push    0
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
        call    FUN_005237f0
        cmp     eax, -1
        /* __emit: MSVC6 drops 00 disp for [esp] (89 04 24); ref is 89 44 24 00 */
        __emit  0x89
        __emit  0x44
        __emit  0x24
        __emit  0x00
        jnz     loc_6f0850
        mov     ecx, dword ptr [g_841768]
        push    0
        push    0x64e
        push    ecx
        call    FUN_0072d830
        mov     edx, dword ptr [g_841768]
        push    eax
        push    0xc9a
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006e4210
        mov     eax, dword ptr [esp + 0xc]
        add     esp, 0xc
loc_6f0850:
        push    esi
        mov     esi, dword ptr [esp + 0x124]
        push    esi
        push    eax
        call    FUN_006efe10
        add     esp, 8
        test    eax, eax
        jz      loc_6f088a
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [g_848c6c]
        inc     ecx
        mov     dword ptr [eax*4 + g_842b10], esi
        mov     dword ptr [eax*4 + g_842710], 4
        mov     dword ptr [eax*4 + g_842310], ecx
loc_6f088a:
        mov     eax, dword ptr [esp + 0x128]
        test    eax, eax
        lea     edx, [esp + 4]
        mov     dword ptr [esp + 8], edx
        pop     esi
        jl      loc_6f0902
        cmp     eax, 9
        jge     loc_6f0902
        mov     ecx, dword ptr [eax*4 + g_8422c8]
        test    ecx, ecx
        jz      loc_6f08c9
        lea     ecx, [esp + 4]
        push    ecx
        push    2
        lea     eax, [esp + 0x12c]
        push    0
        mov     dword ptr [esp + 0x14], eax
        call    FUN_00523cb0
        jmp     loc_6f0902
loc_6f08c9:
        mov     eax, dword ptr [g_7b82b4]
        push    0x100
        lea     edx, [esp + 0x14]
        push    edx
        push    4
        push    eax
        call    dword ptr [g_76b574]
        mov     edx, dword ptr [g_841768]
        push    0
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0xc9a
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006e4210
        add     esp, 0xc
loc_6f0902:
        lea     eax, [esp + 4]
        push    eax
        push    1
        push    0
        call    FUN_005240b0
        test    eax, eax
        jnz     loc_6f0919
        call    FUN_006f0770
loc_6f0919:
        /* __emit: MSVC6 drops 00 disp for [esp] (8B 04 24); ref is 8B 44 24 00 */
        __emit  0x8B
        __emit  0x44
        __emit  0x24
        __emit  0x00
        add     esp, 0x110
        ret
    }
}
