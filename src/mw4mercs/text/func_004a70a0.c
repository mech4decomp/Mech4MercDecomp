/*
 * FUN_004a70a0 (74 B) — MLR: global ShapeCloud singleton initializer.
 * Allocates a 0x1c-byte object (FUN_004084d0), constructs it via
 * FUN_004151c0 with a name string, sets two function pointers at
 * +0x14/+0x18, and stores the result in global g_007da990.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da998;
extern int g_007da990;
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004a70a0(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L70de
        mov     eax, dword ptr [g_007da998]
        push    eax
        push    0x7b3048
        push    0x527
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4a7190
        mov     dword ptr [esi + 0x18], 0x4a6ef0
        mov     dword ptr [g_007da990], esi
        pop     esi
        ret
L70de:
        mov     dword ptr [g_007da990], 0x0
        pop     esi
        ret
    }
}
