/*
 * FUN_5e00ecf0 (364 B) — __stdcall (RET 0xc), 3 args.
 * QueryInterface-style GUID dispatcher: compares the 16-byte GUID at
 * [esp+8] against a table of known interface GUIDs; on match, AddRefs the
 * object at [esp+0xc] and stores a sub-interface pointer into the out param
 * at [esp+0x14]. Returns S_OK (0) on match, E_NOINTERFACE (0x80004005) else.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e00ecf0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     ecx, 4
        mov     edi, eax
        mov     esi, 0x5e0362a0
        xor     edx, edx
        repe    cmpsd
        jnz     L_ed1f
    L_ed08:
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 4]
        pop     edi
        xor     eax, eax
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], esi
        pop     esi
        ret     0xc
    L_ed1f:
        mov     ecx, 4
        mov     edi, eax
        mov     esi, 0x5e0354b0
        xor     edx, edx
        repe    cmpsd
        jz      L_ed08
        mov     ecx, 4
        mov     edi, eax
        mov     esi, 0x5e0354c0
        xor     edx, edx
        repe    cmpsd
        jz      L_ed08
        mov     ecx, 4
        mov     edi, eax
        mov     esi, 0x5e0354d0
        xor     edx, edx
        repe    cmpsd
        jnz     L_ed77
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 4]
        test    esi, esi
        jz      L_ee3b
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esi + 4]
        pop     edi
        pop     esi
        mov     dword ptr [ecx], eax
        xor     eax, eax
        ret     0xc
    L_ed77:
        mov     ecx, 4
        mov     edi, eax
        mov     esi, 0x5e0354e0
        xor     edx, edx
        repe    cmpsd
        jnz     L_edab
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 4]
        test    esi, esi
        jz      L_ee3b
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esi + 8]
        pop     edi
        pop     esi
        mov     dword ptr [ecx], eax
        xor     eax, eax
        ret     0xc
    L_edab:
        mov     ecx, 4
        mov     edi, eax
        mov     esi, 0x5e035580
        xor     edx, edx
        repe    cmpsd
        jnz     L_eddb
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 4]
        test    esi, esi
        jz      L_ee3b
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esi + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr [ecx], eax
        xor     eax, eax
        ret     0xc
    L_eddb:
        mov     ecx, 4
        mov     edi, eax
        mov     esi, 0x5e0355a0
        xor     edx, edx
        repe    cmpsd
        jnz     L_ee0b
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 4]
        test    esi, esi
        jz      L_ee3b
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esi + 0x10]
        pop     edi
        pop     esi
        mov     dword ptr [ecx], eax
        xor     eax, eax
        ret     0xc
    L_ee0b:
        mov     ecx, 4
        mov     edi, eax
        mov     esi, 0x5e0355b0
        xor     edx, edx
        repe    cmpsd
        jnz     L_ee48
        mov     esi, dword ptr [esp + 0xc]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 4]
        test    esi, esi
        jz      L_ee3b
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esi + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [ecx], eax
        xor     eax, eax
        ret     0xc
    L_ee3b:
        mov     ecx, dword ptr [esp + 0x14]
        xor     eax, eax
        pop     edi
        pop     esi
        mov     dword ptr [ecx], eax
        ret     0xc
    L_ee48:
        mov     edx, dword ptr [esp + 0x14]
        pop     edi
        mov     eax, 0x80004005
        pop     esi
        mov     dword ptr [edx], 0
        ret     0xc
    }
}
