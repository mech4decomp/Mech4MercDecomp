/*
 * FUN_5e003550 (85 B) — DirectDraw wrapper method.
 * If obj+0x41e8 is set, forwards (param_2) through its vtable[0x14/4].
 * Otherwise stores param_2 into obj+0x41ec (releasing the old one first).
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003550(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     eax, dword ptr [esi + 0x41e8]
        test    eax, eax
        jz      L570
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        pop     edi
        pop     esi
        ret     0x8
    L570:
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jz      L59e
        mov     eax, dword ptr [esi + 0x41ec]
        test    eax, eax
        jz      L592
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x41ec], 0x0
    L592:
        mov     edx, dword ptr [edi]
        push    edi
        mov     dword ptr [esi + 0x41ec], edi
        call    dword ptr [edx + 0x4]
    L59e:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x8
    }
}
