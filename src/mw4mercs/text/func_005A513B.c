/*
 * FUN_005A513B (143 B of a 149 B block) — __thiscall (2 stack args,
 * RET 8). Calls FUN_005F39C0, computes a double difference against
 * [this+0xE4], then dispatches on [vtable+0x150] / FUN_005F4B30 /
 * FUN_005F52D0 based on [edx+0x14]-9.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005F39C0(void);
extern void __cdecl FUN_005F4B30(void);
extern void __cdecl FUN_005F52D0(void);

__declspec(naked) void FUN_005A513B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005F39C0
        fld     qword ptr [esp + 0xc]
        fsub    qword ptr [esi + 0xe4]
        mov     edx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [edx + 0x14]
        sub     eax, 9
        fstp    dword ptr [esp + 0xc]
        je      loc_5a51b0
        sub     eax, 2
        je      loc_5a5194
        sub     eax, 3
        jne     loc_5a51c7
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, esi
        call    FUN_005F4B30
        push    edi
        mov     ecx, esi
        call    FUN_005F52D0
        pop     edi
        pop     esi
        ret     8
loc_5a5194:
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x150]
        push    edi
        mov     ecx, esi
        call    FUN_005F52D0
        pop     edi
        pop     esi
        ret     8
loc_5a51b0:
        mov     edi, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x150]
        push    edi
        mov     ecx, esi
        call    FUN_005F52D0
loc_5a51c7:
        pop     edi
        pop     esi
        ret     8
    }
}
