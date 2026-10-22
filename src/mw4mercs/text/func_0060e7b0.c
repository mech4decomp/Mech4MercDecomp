/*
 * FUN_0060e7b0 (79 B) — __thiscall (this in ECX, RET 0x8).
 *
 * If [this+4] is non-null, invokes two virtual methods and fills in the
 * output struct pointed to by the stack arg. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0060e7b0(void)
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
        jz      L_f4
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [ebx + 0x8]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x641]
        mov     eax, dword ptr [ebx + 0xc]
        mov     dword ptr [eax], 0x3f800000
        mov     dword ptr [edx], ecx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x68]
        and     eax, 0xff
        mov     dword ptr [edi], eax
    L_f4:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }
}
