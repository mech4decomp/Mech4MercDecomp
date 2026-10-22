/*
 * FUN_005e0910 (78 B) — wrapper around FUN_005e0770 that builds a temp vector,
 * frees it, and returns the element count (size >> 2). RET 4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e0770(void *a, void *b);
extern void __stdcall FUN_004084e0(void *a);

__declspec(naked) void __stdcall FUN_005e0910(void)
{
    __asm {
        sub     esp, 0xc
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        lea     eax, [esp + 0x4]
        push    eax
        push    edx
        mov     dword ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_005e0770
        mov     eax, dword ptr [esp + 0x4]
        mov     esi, dword ptr [esp + 0x8]
        sub     esi, eax
        sar     esi, 0x2
        test    eax, eax
        jz      L_955
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_955:
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
