/*
 * FUN_10001e0f (72 B) — free a heap allocation: try the tracked-allocator
 * free path first, else HeapFree.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001e0f (72 B) -- __cdecl cancel/lookup+free: guard p; lock(9); find
 * slot via FUN_100027c3; if found: fill+unlock and return; else unlock +
 * HeapFree(p). Natural /O1 form -- balanced lock/unlock + early return.
 */

extern void *g_100057a8;                              /* 0x100057a8 heap handle */

extern int (__stdcall *g_HeapFree)(void *, unsigned int, void *); /* IAT 0x10004060 */

extern void __cdecl FUN_10001d0c(int);
extern void *__cdecl FUN_100027c3(int);
extern void __cdecl FUN_100027ee(void *, int);
extern void __cdecl FUN_10001d6d(int);

__declspec(naked) void __cdecl FUN_10001e0f(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jz      L_e55
        push    9
        call    FUN_10001d0c
        push    esi
        call    FUN_100027c3
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_e3e
        push    esi
        push    eax
        call    FUN_100027ee
        push    9
        call    FUN_10001d6d
        add     esp, 0xc
        pop     esi
        ret
L_e3e:
        push    9
        call    FUN_10001d6d
        pop     ecx
        push    esi
        push    0
        push    dword ptr [g_100057a8]
        call    dword ptr [g_HeapFree]
L_e55:
        pop     esi
        ret
    }
}
