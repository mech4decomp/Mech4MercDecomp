/*
 * FUN_0042C220 (87 B) — __thiscall (11 stack args, RET 0x2C). Calls
 * FUN_004912B0 with a stack struct, then FUN_00435FF0; frees [this+0x5C]
 * via FUN_004084E0 if [this+0x60] is set, zeroing both.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004912B0(void);
extern void __cdecl FUN_00435FF0(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_0042C220(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x24]
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    ecx
        push    edx
        push    eax
        sub     esp, 0x18
        lea     edx, [esp + 0x34]
        mov     ecx, esp
        push    edx
        call    FUN_004912B0
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    FUN_00435FF0
        mov     eax, dword ptr [esi + 0x60]
        test    eax, eax
        je      loc_42c273
        mov     ecx, dword ptr [esi + 0x5c]
        push    ecx
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x5c], 0
        mov     dword ptr [esi + 0x60], 0
loc_42c273:
        pop     esi
        ret     0x2c
    }
}
