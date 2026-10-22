/*
 * FUN_006747e0 (175 B) — Writes a set of key/value pairs into a
 * stream object (EDI = param1) describing a subsystem state:
 * ExecutionState, CriticalHitsTaken, SubsystemIndex, and
 * InternalLocation. Depending on the state code at this+0xe0->0x14
 * it also writes a "DamagedState"/"DestroyedState" string.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501d90(int p);
extern void __cdecl FUN_00412780(int p);
extern void __cdecl FUN_00411c40(int key, int val);
extern void __cdecl FUN_00411d10(int key, int val);
extern int __cdecl FUN_004e7fb0(int p);
extern void __cdecl FUN_004084e0(int p);

__declspec(naked) void __fastcall FUN_006747e0(int this, int param1)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_00501d90
        mov     eax, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [eax + 0x14]
        sub     eax, 4
        mov     dword ptr [esp + 0xc], 0
        jz      l_case4
        dec     eax
        jnz     l_after
        push    0x78a0b8
        jmp     l_call
    l_case4:
        push    0x78a0c8
    l_call:
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
    l_after:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        push    0x773250
        mov     ecx, edi
        call    FUN_00411c40
        mov     edx, dword ptr [esi + 0x168]
        push    edx
        push    0x797264
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x16c]
        push    eax
        push    0x797254
        mov     ecx, edi
        call    FUN_00411d10
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x170]
        push    ecx
        call    FUN_004e7fb0
        add     esp, 4
        push    eax
        push    0x797240
        mov     ecx, edi
        call    FUN_00411c40
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        pop     edi
        pop     esi
        jz      l_ret
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ret
        push    eax
        call    FUN_004084e0
        pop     ecx
    l_ret:
        ret     4
    }
}
