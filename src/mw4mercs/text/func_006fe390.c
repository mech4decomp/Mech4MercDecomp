/*
 * FUN_006fe390 (291 B) — __stdcall, RET 0x10 (4 params).
 *
 * If DAT_00856860 != 0 and DAT_0085683c == 0x80:
 *   - if DAT_0085685c set: copy count strings from [obj+0x1f70] area
 *     (strlen+memcpy per 0x20-strided entry) into param_2 array, clear flag.
 *   - if DAT_0085685d set: same for [obj+0x2bf4] area into param_4 array.
 *   - call vtable method [obj+0x14]+0x1c, then [obj+0x14]+0x28.
 *   - return 0 if the last call >= 0.
 * Else call FUN_006fde20 and return -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_00856860;
extern int DAT_0085683c;
extern char DAT_0085685c;
extern char DAT_0085685d;
extern int DAT_007b6f08;
extern void __cdecl FUN_006fde20(void);

__declspec(naked) void __stdcall FUN_006fe390(void)
{
    __asm {
        mov     eax, dword ptr [DAT_00856860]
        test    eax, eax
        jz      L_e4a3
        cmp     dword ptr [DAT_0085683c], 0x80
        jnz     L_e4a3
        mov     cl, byte ptr [DAT_0085685c]
        test    cl, cl
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      L_e415
        mov     ecx, dword ptr [eax + 0x1f70]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edx], ecx
        xor     edx, edx
        test    ecx, ecx
        jle     L_e40e
        mov     ebp, dword ptr [esp + 0x18]
        xor     ebx, ebx
L_e3d3:
        or      ecx, 0xffffffff
        lea     edi, [ebx + eax + 0x1f74]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebp]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx]
        inc     edx
        add     ebx, 0x20
        add     ebp, 4
        cmp     edx, eax
        mov     eax, dword ptr [DAT_00856860]
        jl      L_e3d3
L_e40e:
        mov     byte ptr [DAT_0085685c], 0
L_e415:
        mov     cl, byte ptr [DAT_0085685d]
        test    cl, cl
        jz      L_e478
        mov     ecx, dword ptr [eax + 0x2bf4]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [edx], ecx
        xor     edx, edx
        test    ecx, ecx
        jle     L_e471
        mov     ebx, dword ptr [esp + 0x20]
        xor     ebp, ebp
L_e437:
        or      ecx, 0xffffffff
        lea     edi, [eax + ebp + 0x2bf8]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ecx]
        inc     edx
        add     ebp, 0x20
        add     ebx, 4
        cmp     edx, eax
        mov     eax, dword ptr [DAT_00856860]
        jl      L_e437
L_e471:
        mov     byte ptr [DAT_0085685d], 0
L_e478:
        mov     ecx, dword ptr [DAT_007b6f08]
        mov     eax, dword ptr [eax + 0x14]
        mov     edx, dword ptr [eax]
        push    0
        push    ecx
        push    eax
        call    dword ptr [edx + 0x1c]
        mov     edx, dword ptr [DAT_00856860]
        mov     eax, dword ptr [edx + 0x14]
        mov     ecx, dword ptr [eax]
        push    0
        push    eax
        call    dword ptr [ecx + 0x28]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jge     L_e4ae
L_e4a3:
        call    FUN_006fde20
        or      eax, 0xffffffff
        ret     0x10
L_e4ae:
        xor     eax, eax
        ret     0x10
    }
}
