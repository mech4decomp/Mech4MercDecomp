/*
 * FUN_005AEAA0 (58 B) — __thiscall (this = ECX), plain RET.
 *
 * Sets [this+0x16c] = 3, calls FUN_00551870 twice (__thiscall-style with
 * ECX=ESP, passing a pointer to [this+0x1f4]), then FUN_005aeeb0 on
 * [this+0x230].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005aeeb0(void);

__declspec(naked) void __cdecl func_005aeaa0(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        push    0x0
        sub     esp, 0xc
        lea     edi, [esi + 0x1f4]
        mov     ecx, esp
        push    edi
        mov     dword ptr [esi + 0x16c], 0x3
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    edi
        call    FUN_00551870
        lea     ecx, [esi + 0x230]
        call    FUN_005aeeb0
        pop     edi
        pop     esi
        ret
    }
}
