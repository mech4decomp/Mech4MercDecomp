/*
 * FUN_004a1b70 (74 B) — MLR particle/shrapnel: singleton factory. Allocates
 * 0x1c bytes via FUN_004084d0, constructs via FUN_004151c0, patches two
 * function pointers at +0x14/+0x18, stores result in global 0x7da978.
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_7da980;
extern void *g_7da978;

__declspec(naked) void FUN_004a1b70(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L1bae
        mov     eax, dword ptr [g_7da980]
        push    eax
        push    0x7b2e14
        push    0x52b
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x4a1c70
        mov     dword ptr [esi+0x18], 0x4a19a0
        mov     dword ptr [g_7da978], esi
        pop     esi
        ret
L1bae:
        mov     dword ptr [g_7da978], 0x0
        pop     esi
        ret
    }
}
