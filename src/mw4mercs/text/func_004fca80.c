/*
 * FUN_004fca80 (164 B) — __thiscall, RET 0x4: MLR/Adept lookup that scans
 * the per-type record tables for a record whose name matches a given string
 * (via a string-compare callback), returning the record's id, or -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2ac;

__declspec(naked) void FUN_004fca80(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     dword ptr [esp + 0x14], ebp
        jz      L_fcaf4
        push    0x76b768
        push    eax
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      L_fcaf4
        mov     dword ptr [esp + 0x10], 0
        add     ebp, 0x10
    L_fcab3:
        mov     ebx, dword ptr [ebp + 0x4]
        xor     edi, edi
        test    ebx, ebx
        jle     L_fcae3
        mov     esi, dword ptr [ebp]
        add     esi, 0x10
    L_fcac2:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_fcadb
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      L_fcb01
    L_fcadb:
        inc     edi
        add     esi, 0x1c
        cmp     edi, ebx
        jl      L_fcac2
    L_fcae3:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        add     ebp, 0x8
        cmp     eax, 0x12
        mov     dword ptr [esp + 0x10], eax
        jl      L_fcab3
    L_fcaf4:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x8
        ret     0x4
    L_fcb01:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + ecx*8 + 0x10]
        lea     edx, [edi*8 + 0x0]
        sub     edx, edi
        mov     eax, dword ptr [eax + edx*4 + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }
}
