/*
 * FUN_006c7900 (106 B) — Log/event dispatch with node insertion.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Reads a mode word at [this+0x44]->[+8], selects a 6-arg call to
 * FUN_00717a10 based on the mode, then allocates an 8-byte node via
 * FUN_006f3c80 and links it into a list headed at [EDI].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00717a10(void);
extern void __stdcall FUN_006f3c80(void);
extern int g_82e220;

__declspec(naked) void __fastcall FUN_006c7900(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x44]
        mov     eax, dword ptr [edi + 0x8]
        cmp     eax, 0x2
        jnz     loc_21
        mov     eax, dword ptr [esp + 0xc]
        push    0x0
        push    0x0
        push    0x41
        push    eax
        push    0x83a108
        push    0x1
        jmp     loc_46
loc_21:
        cmp     eax, 0x1
        push    0x0
        push    0x0
        push    0x41
        jnz     loc_3A
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    0x83a108
        push    0x2
        jmp     loc_46
loc_3A:
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    0x83a108
        push    0x0
loc_46:
        call    FUN_00717a10
        mov     esi, eax
        mov     eax, dword ptr [g_82e220]
        push    eax
        push    0x8
        call    FUN_006f3c80
        mov     ecx, dword ptr [edi]
        mov     dword ptr [edi], eax
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
