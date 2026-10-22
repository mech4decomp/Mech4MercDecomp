/*
 * FUN_006941b0 (277 B) - HUD element destructor (__fastcall, this in ECX).
 * Frees the element list and the sub-object list, then tears down the object.
 *
 * NOTE: Ghidra's linear disasm omitted several instructions (sar/shl/dec/js/
 * jle) in this function; transcribed from the reference bytes directly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ddbe0(void);
extern void __cdecl FUN_00637dd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_006941b0(void *param_1)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x50]
        mov     edx, dword ptr [ebx + 0x4c]
        sub     eax, edx
        sar     eax, 2
        push    esi
        push    edi
        jz      loc_694227
        mov     edi, edx
loc_6941c5:
        mov     esi, dword ptr [edi]
        test    esi, esi
        jz      loc_6941f3
        lea     ecx, [esi + 0x24]
        call    FUN_005ddbe0
        lea     ecx, [esi + 0x18]
        call    FUN_00637dd0
        lea     ecx, [esi + 0xc]
        call    FUN_00637dd0
        mov     ecx, esi
        call    FUN_00637dd0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_6941f3:
        mov     esi, dword ptr [ebx + 0x50]
        lea     edx, [edi + 0x4]
        cmp     edx, esi
        jz      loc_694215
        mov     eax, esi
        sub     eax, edx
        sar     eax, 2
        test    eax, eax
        mov     ecx, edi
        jle     loc_694215
loc_69420a:
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [ecx], edx
        add     ecx, 0x4
        dec     eax
        jnz     loc_69420a
loc_694215:
        mov     edx, dword ptr [ebx + 0x4c]
        add     esi, -0x4
        mov     eax, esi
        sub     eax, edx
        sar     eax, 2
        mov     dword ptr [ebx + 0x50], esi
        jnz     loc_6941c5
loc_694227:
        mov     eax, dword ptr [ebx + 0x4c]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jz      loc_69423b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_69423b:
        mov     ecx, dword ptr [ebx + 0x44]
        mov     edx, ecx
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     loc_6942b2
        mov     eax, ecx
        and     eax, 0x2
        cmp     al, 0x2
        jnz     loc_694298
        and     ecx, 0xfffffffc
        mov     dword ptr [ebx + 0x44], ecx
        jz      loc_6942b2
        mov     eax, dword ptr [ecx - 0x4]
        push    ebp
        lea     ebp, [ecx - 0x4]
        lea     esi, [eax + eax*4]
        shl     esi, 4
        add     esi, ecx
        dec     eax
        js      loc_69427b
        lea     edi, [eax + 0x1]
loc_69426e:
        sub     esi, 0x50
        mov     ecx, esi
        call    FUN_0040de20
        dec     edi
        jnz     loc_69426e
loc_69427b:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        pop     ebp
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x44], 0x0
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
loc_694298:
        mov     esi, ecx
        and     esi, 0xfffffffc
        mov     dword ptr [ebx + 0x44], esi
        jz      loc_6942b2
        mov     ecx, esi
        call    FUN_0040de20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_6942b2:
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x44], 0x0
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
