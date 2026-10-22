/*
 * FUN_00682A70 (139 B of a 154 B block) — __thiscall (no args, RET 0).
 * Calls FUN_00580580 and FUN_0063B370, then a virtual method at
 * [vtable+0x34]; scans a range for a matching entry and frees the buffer
 * via FUN_004084E0. Returns 0/1.
 *
 * NOTE: the 154 B block 0x682A70 also contains an extra function at
 * 0x00682B00 (mov eax,[ecx+4]; fld [eax+0x654]; ret, not in this
 * assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_0063B370(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_00682A70(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        lea     eax, [esp + 8]
        push    eax
        lea     ecx, [esp + 0xb]
        push    ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00580580
        lea     edx, [esp + 0xc]
        push    0
        push    edx
        call    FUN_0063B370
        mov     eax, dword ptr [esi]
        add     esp, 8
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     edx, dword ptr [esp + 0xc]
        mov     esi, dword ptr [esp + 0x10]
        cmp     edx, esi
        mov     ecx, edx
        je      loc_682ad0
loc_682ac5:
        cmp     dword ptr [ecx], eax
        je      loc_682ad0
        add     ecx, 4
        cmp     ecx, esi
        jne     loc_682ac5
loc_682ad0:
        cmp     ecx, esi
        pop     esi
        je      loc_682ae8
        test    edx, edx
        je      loc_682ae2
        push    edx
        call    FUN_004084E0
        add     esp, 4
loc_682ae2:
        xor     al, al
        add     esp, 0x14
        ret
loc_682ae8:
        test    edx, edx
        je      loc_682af5
        push    edx
        call    FUN_004084E0
        add     esp, 4
loc_682af5:
        mov     al, 1
        add     esp, 0x14
        ret
    }
}
