/*
 * FUN_00739510 (84 B) — __thiscall (2 stack args, RET 8). If arg1 is null
 * returns immediately. Otherwise loops edx times over a ring buffer at
 * [this+4], advancing a cursor at [this+0x1C] (wrapping to 0 and setting
 * [edi]=1), while arg1's [0x1C] stays zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00739510(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jne     loc_73951b
        ret     8
loc_73951b:
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 0x1c]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        xor     esi, esi
        test    edx, edx
        mov     byte ptr [edi], 0
        jbe     loc_73955e
loc_739531:
        test    eax, eax
        jne     loc_73955e
        mov     ebp, dword ptr [ecx + 0x1c]
        inc     ebp
        mov     eax, ebp
        cmp     eax, edx
        mov     dword ptr [ecx + 0x1c], ebp
        jb      loc_73954c
        mov     dword ptr [ecx + 0x1c], 0
        mov     byte ptr [edi], 1
loc_73954c:
        mov     eax, dword ptr [ecx + 0x1c]
        mov     ebp, dword ptr [ecx + 4]
        shl     eax, 5
        mov     eax, dword ptr [eax + ebp + 0x1c]
        inc     esi
        cmp     esi, edx
        jb      loc_739531
loc_73955e:
        pop     edi
        pop     esi
        pop     ebp
        ret     8
    }
}
