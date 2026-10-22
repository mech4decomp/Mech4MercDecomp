/*
 * FUN_005dd5f0 (238 B) — __thiscall, RET 0 (no stack params).
 *
 * Resets/initializes a large set of fields on `this` (ESI = ECX).
 * If [this+0x2e4] != 0, calls FUN_0064c620(this+0x2e4) then
 * FUN_004084e0(ptr) and clears it. Then calls FUN_0041fcb0(this+0x1c8)
 * and stores many default values.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0064c620(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void __cdecl func_005dd5f0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x2e4]
        xor     ebx, ebx
        cmp     edi, ebx
        jz      L617
        mov     ecx, edi
        call    FUN_0064c620
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x2e4], ebx
L617:
        or      edi, 0xffffffff
        lea     ecx, [esi + 0x1c8]
        mov     dword ptr [esi + 0x1d4], edi
        mov     dword ptr [esi + 0x1d8], ebx
        call    FUN_0041fcb0
        mov     eax, 0x40a00000
        mov     dword ptr [esi + 0x1b8], eax
        mov     dword ptr [esi + 0x1bc], eax
        mov     al, 0x1
        mov     byte ptr [esi + 0x2f0], al
        mov     byte ptr [esi + 0x2f2], al
        mov     byte ptr [esi + 0x2fa], al
        cmp     dword ptr [esi + 0x170], ebx
        mov     dword ptr [esi + 0x1c0], ebx
        mov     byte ptr [esi + 0x2f1], bl
        mov     dword ptr [esi + 0x2f4], ebx
        mov     byte ptr [esi + 0x2f8], bl
        mov     byte ptr [esi + 0x2f9], bl
        mov     dword ptr [esi + 0x2e0], ebx
        mov     dword ptr [esi + 0x2e4], ebx
        mov     byte ptr [esi + 0x1d0], bl
        mov     dword ptr [esi + 0x304], 0xbf800000
        mov     dword ptr [esi + 0x1dc], edi
        mov     dword ptr [esi + 0x1e0], ebx
        mov     byte ptr [esi + 0x1c4], bl
        mov     byte ptr [esi + 0x30a], bl
        mov     dword ptr [esi + 0x30c], ebx
        mov     dword ptr [esi + 0x2fc], ebx
        mov     byte ptr [esi + 0x308], bl
        mov     byte ptr [esi + 0x309], bl
        mov     byte ptr [esi + 0x178], bl
        jnz     L6D4
        mov     byte ptr [esi + 0x30a], bl
L6D4:
        pop     edi
        mov     byte ptr [esi + 0x300], bl
        pop     esi
        pop     ebx
        ret
    }
}
