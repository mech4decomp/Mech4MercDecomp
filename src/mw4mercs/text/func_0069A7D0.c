/*
 * FUN_0069A7D0 (82 B) — __cdecl (4 stack args, RET). String comparison
 * helper: computes length deltas, does a repe cmpsb over the shorter, and
 * returns -1/0/+1 lexicographic ordering.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069A7D0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        sub     edx, esi
        sub     ebx, edi
        cmp     ebx, edx
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        lea     eax, [esp + 0x14]
        jl      loc_69a7fb
        lea     eax, [esp + 0x10]
loc_69a7fb:
        mov     ecx, dword ptr [eax]
        xor     eax, eax
        repe cmpsb
        je      loc_69a808
        sbb     eax, eax
        sbb     eax, -1
loc_69a808:
        test    eax, eax
        jne     loc_69a81e
        cmp     edx, ebx
        jge     loc_69a817
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        ret
loc_69a817:
        xor     eax, eax
        cmp     edx, ebx
        setg    al
loc_69a81e:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
