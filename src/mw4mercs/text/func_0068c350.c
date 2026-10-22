/*
 * FUN_0068C350 (60 B) — __thiscall (ECX = this, one stack param).
 *
 * Dispatches three virtual calls (vtable+0x20) on param_1 with
 * this+0x20/0x24/0x28, then calls FUN_006B0520(param_1) on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b0520(void);

__declspec(naked) void __stdcall FUN_0068c350(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x1
        lea     ecx, [edi + 0x20]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        push    esi
        mov     ecx, edi
        call    FUN_006b0520
        pop     edi
        pop     esi
        ret     4
    }
}
