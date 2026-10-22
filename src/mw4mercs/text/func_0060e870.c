/*
 * FUN_0060e870 (79 B) — __thiscall (this in ECX, RET 0x8).
 *
 * If [this+4] is non-null, invokes a virtual method and FUN_005faf20,
 * filling in the output struct pointed to by the stack arg. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005faf20(void);

__declspec(naked) void FUN_0060e870(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        push    edi
        mov     edi, dword ptr [ebx + 0x4]
        mov     dword ptr [edi], 0x0
        jz      L_b4
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [ebx + 0x8]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x642]
        mov     eax, dword ptr [ebx + 0xc]
        mov     dword ptr [eax], 0x3f800000
        mov     dword ptr [edx], ecx
        mov     ecx, esi
        call    FUN_005faf20
        and     eax, 0xff
        mov     dword ptr [edi], eax
    L_b4:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }
}
