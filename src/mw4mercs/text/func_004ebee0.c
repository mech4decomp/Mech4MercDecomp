/*
 * FUN_004ebee0 (57 B) — __thiscall. If [ESI+0x2c] is nonzero and [ESI+0x30]
 * is zero, calls FUN_004ec2e0 and returns; otherwise calls FUN_004ec2e0 then
 * invokes virtual method [ESI] with arg 1 (if ESI nonzero).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ec2e0(void);

__declspec(naked) void FUN_004ebee0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x2c]
        test    ecx, ecx
        jz      L_b
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jnz     L_a
        call    FUN_004ec2e0
        pop     esi
        ret
L_a:
        call    FUN_004ec2e0
        test    esi, esi
        jz      L_done
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        pop     esi
        ret
L_b:
        test    esi, esi
        jz      L_done
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_done:
        pop     esi
        ret
    }
}
