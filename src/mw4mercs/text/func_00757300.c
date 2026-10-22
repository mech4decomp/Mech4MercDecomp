/*
 * FUN_00757300 (90 B) — __thiscall member that stores 3 params into
 * this+0xa0/0xa4/0xa8, calls FUN_007580c0 with several this fields, and
 * sets a flag byte at this+0xe8.
 *
 * __thiscall (ECX = this), 3 stack params, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007580c0(void);

__declspec(naked) void __stdcall FUN_00757300(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    0x1
        mov     dword ptr [esi + 0xa0], eax
        mov     eax, dword ptr [esi + 0xb4]
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0xa4], ecx
        mov     ecx, dword ptr [esi + 0xb0]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0xa8], edx
        mov     edx, dword ptr [esi + 0xac]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        mov     eax, dword ptr [esi]
        push    ecx
        push    edx
        push    eax
        call    FUN_007580c0
        mov     byte ptr [esi + 0xe8], 0x1
        pop     esi
        ret     0xc
    }
}
