/*
 * FUN_0069fad0 (94 B) — __thiscall.
 *
 * Looks up an object by index via FUN_004fcb30, validates a flag bit, and
 * checks FUN_00415230 before returning it. On failure sets [this+0x10] = -2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_007dab44;   /* [0x007dab44] */
extern void *g_007dab40;   /* [0x007dab40] */
extern void *g_007f268c;   /* [0x007f268c] */
extern void __cdecl FUN_004fcb30(void);
extern char __cdecl FUN_00415230(void *ptr);

__declspec(naked) void FUN_0069fad0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x10]
        test    ecx, ecx
        jl      L_ret0
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      L_fail
        mov     ecx, dword ptr [esi + 0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        cmp     cl, 0x1
        jz      L_fail
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_fail
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    L_fail:
        mov     dword ptr [edi + 0x10], 0xfffffffe
    L_ret0:
        pop     edi
        xor     eax, eax
        pop     esi
        ret
    }
}
