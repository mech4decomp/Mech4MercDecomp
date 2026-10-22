/*
 * FUN_004C266B (143 B of a 154 B block) — __thiscall (1 stack arg,
 * RET 4). Same shape as FUN_004B0ADB: copies data via FUN_0041C7D0/
 * FUN_0041C680, checks [this+0x174], and if non-zero calls FUN_00488300
 * then FUN_0041C680 again; returns 1 on success.
 *
 * NOTE: the 154 B block 0x4C266B also contains an extra function at
 * 0x004C2700 (mov eax,ecx; ret 4, not in this assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041C7D0(void);
extern void __cdecl FUN_0041C680(void);
extern void __cdecl FUN_00488300(void);

__declspec(naked) void FUN_004C266B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x28
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x34]
        push    esi
        mov     esi, dword ptr [ebp]
        push    edi
        mov     edi, ecx
        lea     ebx, [edi + 0x144]
        push    ebx
        push    esi
        lea     ecx, [esp + 0x24]
        call    FUN_0041C7D0
        push    ebx
        lea     eax, [esi + 0xc]
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_0041C680
        mov     ecx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [edi + 0x174]
        test    ecx, ecx
        je      loc_4c26f0
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00488300
        test    al, al
        je      loc_4c26f0
        mov     ecx, dword ptr [esp + 0x34]
        lea     edx, [edi + 0x80]
        push    edx
        lea     eax, [esp + 0x14]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_0041C680
        mov     ecx, dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 8], ecx
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x28
        ret     4
loc_4c26f0:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x28
        ret     4
    }
}
