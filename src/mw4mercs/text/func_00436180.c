/*
 * FUN_00436180 (132 B) — __thiscall (this in ECX), RET (no args).
 * Reallocates a buffer (esi+0x20/0x24) to match [ebx+0x18] via
 * FUN_004084D0/FUN_004084E0, fills it with 0xffffffff, and stores the
 * new pointers into [ebx+0xa8]/[ebx+0xac].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004084D0(void);

__declspec(naked) void FUN_00436180(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebx + 0xc]
        test    esi, esi
        je      L436201
        mov     eax, dword ptr [ebx + 0xac]
        test    eax, eax
        je      L436201
        mov     eax, dword ptr [esi + 0x24]
        push    edi
        mov     edi, dword ptr [ebx + 0x18]
        cmp     edi, eax
        je      L4361df
        test    edi, edi
        jbe     L4361cc
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        je      L4361b4
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L4361b4:
        lea     eax, [edi*4]
        push    eax
        mov     dword ptr [esi + 0x24], edi
        call    FUN_004084D0
        add     esp, 4
        mov     dword ptr [esi + 0x20], eax
        jmp     L4361df
    L4361cc:
        mov     ecx, dword ptr [esi + 0x20]
        push    ecx
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x20], 0
    L4361df:
        mov     ecx, dword ptr [esi + 0x24]
        test    ecx, ecx
        jbe     L4361ee
        mov     edi, dword ptr [esi + 0x20]
        or      eax, 0xffffffff
        rep stosd
    L4361ee:
        mov     edx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [esi + 0x24]
        mov     dword ptr [ebx + 0xa8], edx
        mov     dword ptr [ebx + 0xac], eax
        pop     edi
    L436201:
        pop     esi
        pop     ebx
        ret
    }
}
