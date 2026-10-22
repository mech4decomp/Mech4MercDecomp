/*
 * FUN_004B3FFB (153 B) — __thiscall (1 stack arg, RET 4). Same shape as
 * FUN_004B0ADB: copies data via FUN_0041C7D0/FUN_0041C680, checks
 * [this+0x178], and if non-zero calls FUN_00488300 then FUN_0041C680
 * again; returns 1 on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041C7D0(void);
extern void __cdecl FUN_0041C680(void);
extern void __cdecl FUN_00488300(void);

__declspec(naked) void FUN_004B3FFB(void)
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
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [ebp]
        lea     ebx, [esi + 0x144]
        push    ebx
        push    edi
        lea     ecx, [esp + 0x24]
        call    FUN_0041C7D0
        push    ebx
        lea     eax, [edi + 0xc]
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_0041C680
        mov     eax, dword ptr [esi + 0x178]
        test    eax, eax
        mov     ecx, dword ptr [edi + 0x18]
        mov     dword ptr [esp + 0x34], ecx
        jbe     loc_4b4088
        mov     ecx, dword ptr [esi + 0x174]
        mov     ecx, dword ptr [ecx]
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00488300
        test    al, al
        je      loc_4b4088
        mov     edx, dword ptr [esp + 0x34]
        lea     eax, [esi + 0x80]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 4]
        mov     dword ptr [edi + 0x18], edx
        call    FUN_0041C680
        mov     edx, dword ptr [esi + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 8], edx
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x28
        ret     4
loc_4b4088:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x28
        ret     4
    }
}
