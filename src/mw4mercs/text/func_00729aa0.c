/*
 * FUN_00729aa0 (58 B) — __cdecl, RET 8 (2 stack params).
 *
 * Loops over this->[0x128] entries starting at this->[0x120], checking each
 * dword for the 0xff000000 flag; returns 1 if none set, 0 if one is found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00729aa0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esi + 0x128]
        xor     ecx, ecx
        test    edx, edx
        push    edi
        jle     label1
        mov     eax, dword ptr [esp + 0x10]
label2:
        test    dword ptr [eax], 0xff000000
        jnz     label3
        mov     edi, dword ptr [esi + 0x120]
        inc     ecx
        cmp     ecx, edx
        lea     eax, [eax + edi*4]
        jl      label2
label1:
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     0x8
label3:
        pop     edi
        xor     al, al
        pop     esi
        ret     0x8
    }
}
