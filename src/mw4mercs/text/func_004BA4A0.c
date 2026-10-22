/*
 * FUN_004BA4A0 (151 B) — __thiscall (3 stack args, RET 0xC). Initializes
 * a local structure via FUN_00491280/FUN_00491670/FUN_0048BD20, copies
 * 6 dwords with rep movsd, and calls FUN_0048EDA0 with [arg1+0x26C].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_0048BD20(void);
extern void __cdecl FUN_0048EDA0(void);

__declspec(naked) void FUN_004BA4A0(void)
{
    __asm {
        sub     esp, 0x68
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x3c]
        call    FUN_00491280
        mov     eax, dword ptr [ebx + 0x140]
        mov     ecx, dword ptr [esp + 0x7c]
        push    eax
        push    ecx
        xor     esi, esi
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x5c], esi
        call    FUN_00491670
        lea     ecx, [esp + 0xc]
        call    FUN_0048BD20
        mov     edx, dword ptr [ebx + 0x160]
        mov     eax, dword ptr [ebx + 0x144]
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [ebx + 0x154]
        mov     ecx, 6
        lea     esi, [esp + 0x3c]
        lea     edi, [esp + 0x24]
        rep     movsd
        mov     ecx, dword ptr [ebx + 0x14c]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [esp + 0x78]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [ebx + 0x15c]
        push    ecx
        mov     ecx, dword ptr [edx + 0x26c]
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0048EDA0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x68
        ret     0xc
    }
}
