/*
 * FUN_005E4360 (110 B) - Missile parameter resolution (__fastcall, ECX=this).
 *
 * Walks the config list from FUN_0041FD80() looking for an object whose
 * +0x128/+0x124 pointer has bit 0x80 of +0x9C clear; then walks a
 * secondary chain (+0x90) for the same flag. Stores the found object at
 * this+0x268.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void __fastcall FUN_005e4360(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x258]
        call    FUN_0041fd80
        xor     ecx, ecx
        test    eax, eax
        jz      l_store
        mov     bl, 0x80
    l_loop:
        mov     ecx, dword ptr [eax + 0x128]
        test    ecx, ecx
        jnz     l_check
        mov     ecx, dword ptr [eax + 0x124]
        test    ecx, ecx
        jz      l_advance
    l_check:
        test    byte ptr [ecx + 0x9c], bl
        jz      l_chain
    l_advance:
        mov     eax, dword ptr [eax + 0xc4]
        test    eax, eax
        jnz     l_loop
    l_store:
        mov     dword ptr [esi + 0x268], ecx
        pop     esi
        pop     ebx
        ret
    l_chain:
        test    ecx, ecx
        jz      l_store
        mov     eax, dword ptr [ecx + 0x90]
    l_chain_loop:
        test    eax, eax
        jz      l_store
        mov     edx, dword ptr [eax]
        test    edx, edx
        mov     eax, dword ptr [eax + 0x4]
        jz      l_store
        test    byte ptr [edx + 0x9c], bl
        jnz     l_chain_loop
        mov     dword ptr [esi + 0x268], edx
        pop     esi
        pop     ebx
        ret
    }
}
