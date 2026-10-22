/*
 * FUN_006CA110 (87 B) — __cdecl (5 stack args, RET 0x14). Copies a
 * count*stride block: for each row copies [arg2] to [arg1] (dword+byte
 * remainder), advancing by stride [esp+0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006CA110(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [eax*4]
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x10], ecx
        jbe     loc_6ca164
        mov     edx, dword ptr [esp + 8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [esp + 0x10]
        push    edi
loc_6ca13b:
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebp, ecx
        shr     ecx, 2
        mov     esi, edx
        mov     edi, eax
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x24]
        add     eax, ebx
        add     edx, ebx
        dec     ecx
        mov     dword ptr [esp + 0x24], ecx
        jne     loc_6ca13b
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
loc_6ca164:
        ret     0x14
    }
}
