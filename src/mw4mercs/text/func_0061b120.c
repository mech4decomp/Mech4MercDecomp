/*
 * FUN_0061b120 (59 B) — __thiscall helper: initializes two sub-objects
 * (at this+0x30 / this+0x34), dispatches virtual calls, sets status fields.
 *
 * __thiscall (ECX = this). No stack params, RET (no cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041ea10(void);

__declspec(naked) void __stdcall FUN_0061b120(void *this)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x34]
        mov     ecx, esi
        call    FUN_0041ea10
        mov     edi, dword ptr [edi + 0x30]
        mov     ecx, edi
        call    FUN_0041ea10
        mov     eax, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], 0xffffffec
        call    dword ptr [edx + 0xc]
        mov     dword ptr [edi + 0x8], 0xffffffec
        pop     edi
        pop     esi
        ret
    }
}
