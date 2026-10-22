/*
 * FUN_00699190 (53 B) — Copy a count (this+0x30 >> 4) of decremented
 * bytes from a 16-byte-per-entry table into this+0x1C, and store a
 * value into this+0x10.
 *
 * __fastcall (ECX = this), no stack args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00699190(void *this)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0xC]
        push    esi
        mov     esi, dword ptr [edx + 0x30]
        mov     dword ptr [ecx + 0x10], eax
        shr     esi, 0x4
        xor     eax, eax
        test    esi, esi
        jle     L_done
        mov     edx, dword ptr [edx + 0x2C]
        push    edi
        mov     edi, dword ptr [ecx + 0x1C]
        add     edx, 0xC
L_loop:
        mov     cl, byte ptr [edx]
        dec     cl
        mov     byte ptr [edi + eax*0x1], cl
        inc     eax
        add     edx, 0x10
        cmp     eax, esi
        jl      L_loop
        pop     edi
L_done:
        pop     esi
        ret
    }
}
