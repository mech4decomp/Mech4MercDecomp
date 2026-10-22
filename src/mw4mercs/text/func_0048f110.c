/*
 * FUN_0048f110 (72 B) — MLR global light-array allocator.
 * Allocates a 0x14-byte object, initializes it via FUN_004151c0, and stores
 * the result in the global light-array pointer/count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

extern int g_007b8c08;
extern int g_007da84c;
extern int g_007da848;

__declspec(naked) void FUN_0048f110(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_f143
        mov     ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76fec0
        push    0x46
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007da84c], eax
        mov     dword ptr [g_007da848], 0x0
        ret
L_f143:
        mov     dword ptr [g_007da84c], 0x0
        mov     dword ptr [g_007da848], 0x0
        ret
    }
}
