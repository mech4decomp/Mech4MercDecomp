/*
 * FUN_004169c0 (41 B) — __fastcall (ECX=this) teardown: walks the linked
 * list at this+0xc, calling each node's vtable[1](1), then calls
 * FUN_00415bc0 (list destructor).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415bc0(void);

__declspec(naked) void FUN_004169c0(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi+0xc]
        test    ecx, ecx
        jz      L_169e0
        push    esi
    L_169cb:
        test    ecx, ecx
        mov     esi, dword ptr [ecx+0x10]
        jz      L_169d9
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax+4]
    L_169d9:
        test    esi, esi
        mov     ecx, esi
        jnz     L_169cb
        pop     esi
    L_169e0:
        mov     ecx, edi
        call    FUN_00415bc0
        pop     edi
        ret
    }
}
