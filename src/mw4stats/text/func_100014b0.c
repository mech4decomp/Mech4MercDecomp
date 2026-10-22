/*
 * MW4StatsDll_CreateLog (397 B) - exported log-creation entry point.
 * Builds a log object, initializes several sub-objects, and returns 0.
 *
 * __stdcall, RET 0x24 (9 dword params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003980(void);
extern void __cdecl FUN_10004610(void);
extern void __cdecl FUN_10003130(void);
extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_10005bf0(void);
extern void __cdecl FUN_10005ae0(void);
extern void __cdecl FUN_10003250(void);
extern void __cdecl FUN_10001250(void);
extern int *g_time;   /* IAT slot 0x100210f0 (CRT time) */
extern int g_jt_10001640;   /* jump table base 0x10001640 */

__declspec(naked) void __cdecl MW4StatsDll_CreateLog(void)
{
    __asm {
        push    -1
        push    0x1001f1bb
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x2a8
        mov     eax, dword ptr [esp + 0x2b8]
        /* __emit: lea ecx,[esp] zero-disp; MSVC6 drops the 00 disp byte (8D 0C 24) */
        __emit  0x8D
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        push    ecx
        mov     ecx, 0x10027058
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0x80
        mov     dword ptr [esp + 0x1c], 0x10024040
        mov     dword ptr [esp + 0x18], eax
        call    FUN_10003980
        lea     ecx, [esp + 0x1c]
        call    FUN_10004610
        mov     eax, dword ptr [esp + 0x2bc]
        cmp     eax, 4
        mov     dword ptr [esp + 0x2b0], 0
        ja      L1534
        jmp     dword ptr [eax*4 + g_jt_10001640]
L1524:
        push    0
        jmp     L1536
L1528:
        push    1
        jmp     L1536
L152C:
        push    2
        jmp     L1536
L1530:
        push    4
        jmp     L1536
L1534:
        push    3
L1536:
        lea     ecx, [esp + 0x2a4]
        call    FUN_10003130
        mov     edx, dword ptr [esp + 0x2c0]
        push    esi
        push    edx
        lea     ecx, [esp + 0x20c]
        call    FUN_10001660
        push    0x100274dc
        lea     ecx, [esp + 0x174]
        call    FUN_10001660
        lea     eax, [esp + 0x16c]
        push    eax
        call    dword ptr [g_time]
        mov     esi, dword ptr [esp + 0x2d0]
        add     esp, 4
        push    esi
        lea     ecx, [esp + 0x40]
        mov     dword ptr [esp + 0x38], 0
        mov     dword ptr [esp + 0x3c], 0x150
        call    FUN_10001660
        push    esi
        lea     ecx, [esp + 0xd8]
        call    FUN_10001660
        mov     edx, dword ptr [esp + 0x2d4]
        mov     ecx, dword ptr [esp + 0x2d0]
        mov     eax, dword ptr [esp + 0x2d8]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x2dc]
        mov     dword ptr [esp + 0x28], edx
        lea     edx, [esp + 0x20]
        push    edx
        mov     dword ptr [esp + 0x34], ecx
        push    0x10027058
        mov     ecx, 0x10027080
        mov     dword ptr [esp + 0x34], eax
        call    FUN_10005bf0
        mov     ecx, 0x10026ba0
        call    FUN_10005ae0
        mov     eax, dword ptr [esp + 0x2c8]
        push    eax
        mov     ecx, 0x10026bb0
        call    FUN_10001660
        push    0
        mov     ecx, 0x10026c54
        call    FUN_10003250
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x2b4], 0xffffffff
        call    FUN_10001250
        mov     ecx, dword ptr [esp + 0x2ac]
        xor     eax, eax
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2b4
        ret     0x24
    }
}
