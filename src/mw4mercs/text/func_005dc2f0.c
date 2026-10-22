/*
 * FUN_005DC2F0 (47 B) — If this+0x170 is non-null and this+0x2F0 is
 * zero, sets this+0x30B to 1, calls virtual method at vtable+0xC4 on
 * the object at this+0x170, then clears this+0x30B.
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005dc2f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x170]
        test    ecx, ecx
        jz      done
        mov     al, byte ptr [esi + 0x2F0]
        test    al, al
        jnz     done
        mov     eax, dword ptr [ecx]
        mov     byte ptr [esi + 0x30B], 1
        call    dword ptr [eax + 0xC4]
        mov     byte ptr [esi + 0x30B], 0
    done:
        pop     esi
        ret
    }
}
