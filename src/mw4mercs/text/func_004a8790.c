/*
 * FUN_004a8790 (74 B) — MLR ShardCloud constructor: allocates a 0x1c-byte
 * object, initializes it via FUN_004151c0, sets two vtable pointers, and
 * stores the result in the global registry slot g_007da994.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da998;
extern int g_007da994;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004a8790(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_4a87ce
        mov     eax, dword ptr [g_007da998]
        push    eax
        push    0x7b30a8
        push    0x524
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4a8920
        mov     dword ptr [esi + 0x18], 0x4a85a0
        mov     dword ptr [g_007da994], esi
        pop     esi
        ret
L_4a87ce:
        mov     dword ptr [g_007da994], 0x0
        pop     esi
        ret
    }
}
