/*
 * FUN_004BC010 (126 B of a 149 B block) — __thiscall (3 stack args,
 * RET 0xC). Initializes a local structure via FUN_00491280/FUN_00491670/
 * FUN_0048BCF0, copies 6 dwords with rep movsd, and calls FUN_0048E890
 * with [arg2+0x26C]. Stores (arg3 & 0x3F) into the structure.
 *
 * NOTE: the 149 B block also contains an extra function at 0x004BC090
 * (not in this assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_0048BCF0(void);
extern void __cdecl FUN_0048E890(void);

__declspec(naked) void FUN_004BC010(void)
{
    __asm {
        sub     esp, 0x5c
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x2c]
        call    FUN_00491280
        mov     eax, dword ptr [esi + 0x140]
        mov     ecx, dword ptr [esp + 0x6c]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x4c], 0
        call    FUN_00491670
        lea     ecx, [esp + 8]
        call    FUN_0048BCF0
        mov     edx, dword ptr [esi + 0x144]
        mov     eax, dword ptr [esp + 0x70]
        add     esi, 0x80
        mov     dword ptr [esp + 0x28], esi
        and     eax, 0x3f
        mov     dword ptr [esp + 8], edx
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [esp + 0x24], eax
        mov     ecx, 6
        lea     esi, [esp + 0x2c]
        lea     edi, [esp + 0xc]
        rep     movsd
        lea     ecx, [esp + 8]
        push    ecx
        mov     ecx, dword ptr [edx + 0x26c]
        call    FUN_0048E890
        pop     edi
        pop     esi
        add     esp, 0x5c
        ret     0xc
    }
}
