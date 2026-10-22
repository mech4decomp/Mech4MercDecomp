/*
 * FUN_004906a0 (65 B) — __fastcall (ECX = param_1), void return.
 * Destructor-like finalizer for a 6-dword object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004084e0(void);
extern void __fastcall FUN_00416320(void);

__declspec(naked) void __fastcall FUN_004906a0(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        push    edi
        lea     edi, [esi + 0x4]
        mov     ecx, edi
        mov     dword ptr [esi], 0x76ffdc
        call    dword ptr [eax + 0x8]
        mov     esi, dword ptr [esi + 0x18]
        test    esi, esi
        jz      l_skip_free
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip_free:
        mov     ecx, edi
        mov     dword ptr [edi], 0x76ffe0
        call    FUN_00416320
        pop     edi
        pop     esi
        ret
    }
}
