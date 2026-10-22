/*
 * FUN_00416820 (25 B) — DB item/pool release helper. If the node at
 * [this+0x14] is non-null, calls virtual method [vtbl+0] with arg 1,
 * then clears [this+0x14].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416820(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        jz      done
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x14], 0
done:
        pop     esi
        ret
    }
}
