/*
 * FUN_006E2850 (58 B) — String buffer copy-on-write / refcount increment.
 *
 * If the refcount at (*param1 - 0x0c) >= 0, increments it via
 * InterlockedIncrement and stores the pointer. Otherwise calls
 * FUN_006e27b0 to get a new empty buffer, stores it, then calls
 * FUN_006e2bc0 to copy the old string into the new buffer.
 * Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: source string ptr).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_006e27b0(void);
extern void *__stdcall FUN_006e2bc0(int param);

__declspec(naked) int *__stdcall FUN_006e2850(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    edi
        mov     edi, dword ptr [eax]
        lea     eax, dword ptr [edi - 0x0C]
        mov     esi, ecx
        cmp     dword ptr [eax], 0
        jl      l_need_copy
        push    eax
        mov     dword ptr [esi], edi
        _emit   0xFF
        _emit   0x15
        _emit   0x20
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    l_need_copy:
        call    FUN_006e27b0
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi], ecx
        push    edi
        mov     ecx, esi
        call    FUN_006e2bc0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
