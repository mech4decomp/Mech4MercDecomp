/*
 * FUN_004e0b40 (55 B) — factory. Allocates a 0x14-byte block; on success
 * constructs an object (0x1c5 bytes, vtable 0x773ae4) using g_007dc6d0
 * and stores it in g_007dc6d8, else stores NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6d0;
extern int g_007dc6d8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004e0b40(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc_failed
        mov     ecx, dword ptr [g_007dc6d0]
        push    ecx
        push    0x773ae4
        push    0x1c5
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc6d8], eax
        ret
L_alloc_failed:
        mov     dword ptr [g_007dc6d8], 0x0
        ret
    }
}
