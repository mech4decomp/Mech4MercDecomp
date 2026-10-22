/*
 * FUN_0060ec90 (107 B) — __thiscall (this in ECX, RET 0x8).
 *
 * If [this+4] is non-null, invokes a virtual method, copies fields into
 * the output struct pointed to by the stack arg, and (if a linked object
 * at [this+0x3ec] exists) checks a type tag, setting a flag. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0060ec90(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [edi + 0x4]
        mov     dword ptr [ebx], 0x0
        jz      L_f0
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [edi + 0x8]
        mov     esi, dword ptr [esi + 0x3ec]
        xor     ecx, ecx
        test    esi, esi
        mov     cl, byte ptr [eax + 0x66a]
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [edi + 0xc]
        mov     edx, dword ptr [eax + 0x664]
        mov     dword ptr [ecx], edx
        jz      L_f0
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        cmp     dword ptr [eax + 0x30], 0x8c
        jnz     L_f0
        mov     dword ptr [ebx], 0x1
    L_f0:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }
}
