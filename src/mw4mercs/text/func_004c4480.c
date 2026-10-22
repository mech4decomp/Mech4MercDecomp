/*
 * FUN_004C4480 (58 B) — Destructor.
 *
 * __thiscall (ECX = this), RET.
 * Sets vtable at [this] to 0x7716ec, iterates linked list at this+0x144
 * calling vtable+0 on each entry, then calls FUN_00417980 and FUN_004c68f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00417980(void);
extern void __fastcall FUN_004c68f0(void);

__declspec(naked) void __fastcall FUN_004c4480(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ebx, [edi + 0x144]
        _emit 0xC7
        _emit 0x07
        _emit 0xEC
        _emit 0x16
        _emit 0x77
        _emit 0x00
        mov     esi, dword ptr [ebx]
    l_loop:
        test    esi, esi
        jz      l_call_cleanup
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 4]
        jz      l_call_cleanup
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp     l_loop

    l_call_cleanup:
        mov     ecx, ebx
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_004c68f0
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
