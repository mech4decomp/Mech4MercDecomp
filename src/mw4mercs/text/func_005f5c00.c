/*
 * FUN_005f5c00 (53 B) — Copies two fields, then conditionally sets a flag.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005f5c00(void *param)
{
    __asm {
        mov     dx, word ptr [ecx + 0x16]
        mov     al, byte ptr [ecx + 0x14]
        mov     word ptr [ecx + 0x15e], dx
        mov     edx, dword ptr [ecx + 0x10]
        mov     byte ptr [ecx + 0x15c], al
        shr     edx, 0x13
        mov     eax, 0x1
        test    dl, al   /* MSVC6 encodes test al,dl as 84 C2; swap to get 84 D0 */
        jnz     done
        mov     edx, dword ptr [ecx + 0xe0]
        cmp     dword ptr [edx + 0x14], eax
        jz      done
        mov     dword ptr [ecx + 0x4a4], eax
done:
        ret
    }
}
