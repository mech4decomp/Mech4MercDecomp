/*
 * FUN_006f67e0 (219 B) — __thiscall config/network lookup. Reads a string
 * value via FUN_006f5b80, parses it with atoi, resolves an address via a
 * function pointer table (0x008aac90/0x008aac94), and dispatches through a
 * global object (0x007b6ed0) vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_79fac0[];         /* 0x0079fac0 */
extern char g_79fa18[];         /* 0x0079fa18 "IpAddr" */
extern char g_79fae0[];         /* 0x0079fae0 "Flags" */
extern char g_79fbdc[];         /* 0x0079fbdc */
extern char g_6f9110[];         /* 0x006f9110 (function) */

extern void *g_76b318;          /* IAT: atoi */
extern void *g_008aac90;        /* 0x008aac90 (function pointer) */
extern void *g_008aac94;        /* 0x008aac94 (function pointer) */
extern int g_007b6ed0;          /* 0x007b6ed0 (pointer to object) */

extern void __cdecl FUN_006f5b80(void);

__declspec(naked) void __fastcall FUN_006f67e0(void)
{
    __asm {
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    offset g_79fac0
        mov     esi, ecx
        push    edi
        call    FUN_006f5b80
        test    eax, eax
        jz      L6808
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        ret     4
L6808:
        push    offset g_79fa18
        push    edi
        mov     ecx, esi
        call    FUN_006f5b80
        mov     ebp, eax
        test    ebp, ebp
        jz      L68b2
        push    ebx
        push    offset g_79fae0
        push    edi
        mov     ecx, esi
        call    FUN_006f5b80
        xor     ebx, ebx
        test    eax, eax
        jz      L683f
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 4
        mov     ebx, eax
L683f:
        push    ebp
        call    dword ptr [g_008aac90]
        test    bh, 0x10
        pop     ebx
        jnz     L68a0
        cmp     eax, -1
        jz      L68a0
        push    eax
        call    dword ptr [g_008aac94]
        lea     edx, [esp + 0x10]
        mov     esi, eax
        mov     eax, dword ptr [g_007b6ed0]
        mov     ecx, dword ptr [eax]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx + 0x18]
        test    eax, eax
        jz      L6896
        mov     eax, dword ptr [g_007b6ed0]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 8]
        mov     eax, dword ptr [g_007b6ed0]
        mov     edx, dword ptr [eax]
        push    edi
        push    offset g_6f9110
        push    esi
        push    eax
        call    dword ptr [edx + 0x1c]
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebp
        ret     4
L6896:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        ret     4
L68a0:
        mov     eax, dword ptr [esi]
        push    offset g_79fbdc
        push    offset g_79fac0
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 8]
L68b2:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebp
        ret     4
    }
}
