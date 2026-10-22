/*
 * FUN_00699160 (46 B) — __fastcall (ECX = param_1), RET.
 *
 * Reads a size from a nested structure, stores a pointer, and zero-fills
 * a buffer via rep stosd / rep stosb.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00699160(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x30]
        mov     edx, dword ptr [edx + 0x8]
        shr     ecx, 4
        test    ecx, ecx
        mov     dword ptr [eax + 0x10], edx
        jle     L_done
        mov     edx, ecx
        push    edi
        mov     edi, dword ptr [eax + 0x1c]
        shr     ecx, 2
        xor     eax, eax
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        pop     edi
L_done:
        ret
    }
}
