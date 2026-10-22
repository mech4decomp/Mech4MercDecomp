/*
 * FUN_0064AF80 (extent 0x64AF80-0x64AFEF, 111 B) - .text data block.
 * __thiscall-style (this in ecx).
 */
#pragma warning(disable : 4035 4793)

extern int  g_0080d970;
extern int  g_00792b30;
extern void __cdecl FUN_0064B7D0(void);

__declspec(naked) void FUN_0064AF80(void)
{
    __asm {
        push   ecx
        push   ebx
        push   esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x20]
        mov    ecx, dword ptr [g_0080d970]
        lea    eax, [eax + eax*4]
        mov    ebx, dword ptr [ecx + eax*8 + 0x18]
        test   ebx, ebx
        lea    eax, [ecx + eax*8]
        je     L_end
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 8], edx
        xor    edx, edx
        test   ebx, ebx
        jle    L_end
        push   ebp
        push   edi
    L_ab:
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [eax + edx*4]
        test   ecx, ecx
        jle    L_ce
        mov    edi, dword ptr [esi + 0x24]
        mov    edi, dword ptr [edi + edx*4]
        mov    ebp, ecx
        shr    ecx, 2
        xor    eax, eax
        rep stosd
        mov    ecx, ebp
        and    ecx, 3
        rep stosb
        jmp    L_d8
    L_ce:
        mov    ecx, dword ptr [esi + 0x24]
        mov    dword ptr [ecx + edx*4], 0
    L_d8:
        inc    edx
        cmp    edx, ebx
        jl     L_ab
        pop    edi
        pop    ebp
    L_end:
        push   offset g_00792b30
        mov    ecx, esi
        call   FUN_0064B7D0
        pop    esi
        pop    ebx
        pop    ecx
        ret
    }
}
