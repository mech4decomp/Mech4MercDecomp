/*
 * FUN_00490a40 (176 B) — MLR texture-format setup (__cdecl, 4 params).
 * Builds several 5-dword parameter blocks (via rep movsd), calls the
 * format resolver FUN_00490af0, then releases the temporary objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00717b30(void);
extern void __cdecl FUN_00717a10(void);
extern void __cdecl FUN_00717ac0(void);
extern void __cdecl FUN_00490af0(void);

__declspec(naked) void FUN_00490a40(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x50]
        push    esi
        push    edi
        lea     eax, [esp + 0x24]
        push    eax
        push    1
        push    0
        push    ebp
        call    FUN_00717b30
        mov     edx, dword ptr [esp + 0x5c]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    1
        push    0
        push    edx
        call    FUN_00717b30
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x54]
        push    0
        push    0
        push    2
        push    eax
        push    ecx
        push    edx
        call    FUN_00717a10
        mov     ebx, eax
        lea     eax, [esp + 0x38]
        push    eax
        push    0
        push    0
        push    ebx
        call    FUN_00717b30
        sub     esp, 0x14
        mov     edi, esp
        mov     ecx, 5
        lea     esi, [esp + 0x24]
        rep     movsd
        sub     esp, 0x14
        mov     edi, esp
        mov     ecx, 5
        lea     esi, [esp + 0x4c]
        rep     movsd
        sub     esp, 0x14
        mov     ecx, 5
        lea     esi, [esp + 0x74]
        mov     edi, esp
        rep     movsd
        call    FUN_00490af0
        add     esp, 0x3c
        push    ebp
        call    FUN_00717ac0
        mov     ecx, dword ptr [esp + 0x5c]
        push    ecx
        call    FUN_00717ac0
        push    ebx
        call    FUN_00717ac0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x3c
        ret
    }
}
