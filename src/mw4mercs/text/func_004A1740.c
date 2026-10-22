/*
 * FUN_004A1740 (162 B) — __thiscall, RET 4 (1 stack param).
 * Resizes a dynamic array (this = ebx: [0]=ptr, [4]=count) to match a source
 * array (param: [0]=ptr, [4]=count), allocating/freeing as needed and copying
 * the data. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void __fastcall FUN_004A1740(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, ecx
        cmp     ebx, eax
        push    esi
        push    edi
        je      L_4a17da
        mov     edi, dword ptr [eax + 4]
        test    edi, edi
        jbe     L_4a17c4
        mov     esi, dword ptr [eax]
        cmp     edi, dword ptr [ebx + 4]
        je      L_4a17a9
        test    edi, edi
        jbe     L_4a1798
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L_4a1772
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4a1772:
        lea     eax, [edi*8]
        push    eax
        mov     dword ptr [ebx + 4], edi
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_4a1792
        dec     edi
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [ebx], eax
        jmp     L_4a17a9
L_4a1792:
        xor     eax, eax
        mov     dword ptr [ebx], eax
        jmp     L_4a17a9
L_4a1798:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx], 0
L_4a17a9:
        mov     ecx, dword ptr [ebx + 4]
        test    ecx, ecx
        jbe     L_4a17da
        mov     edi, dword ptr [ebx]
        and     ecx, 0x1fffffff
        shl     ecx, 1
        rep movsd
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     4
L_4a17c4:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L_4a17da
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx + 4], 0
L_4a17da:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     4
    }
}
