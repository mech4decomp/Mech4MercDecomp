/*
 * FUN_006202e0 (457 B) — ABL interpreter value-formatting helper.
 * __stdcall, 3 params (RET 0xc). Formats a value (string/int/float) into
 * a caller buffer based on a type descriptor; uses sprintf/strtok/atoi
 * via IAT and string constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0076b420;   /* IAT: sprintf */
extern int g_0076b2b4;   /* IAT: strtok */
extern int g_0076b318;   /* IAT: atoi */
extern int g_00805928;
extern int g_00805934;
extern int g_00805930;
extern int g_008058c0;
extern int g_0080d9bc;
extern int g_0080d9b8;
extern void __cdecl FUN_00562f30(void);
extern void __cdecl FUN_0064c950(void);

__declspec(naked) void FUN_006202e0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        cmp     dword ptr [eax+0x18], 0x1
        push    ebx
        push    ebp
        push    esi
        push    edi
        jnz     L_62030e
        mov     eax, dword ptr [eax+0x1c]
        mov     ecx, dword ptr [esp+0x14]
        push    eax
        push    0x78ca88
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
L_62030e:
        mov     ecx, dword ptr [eax+0x1c]
        xor     edi, edi
        sub     ecx, edi
        jz      L_620339
        dec     ecx
        jz      L_62032b
        dec     ecx
        jnz     L_620362
        mov     edx, dword ptr [eax+0x20]
        mov     ecx, dword ptr [g_00805928]
        lea     edi, [ecx+edx*4]
        jmp     L_620362
L_62032b:
        mov     edx, dword ptr [eax+0x20]
        mov     ecx, dword ptr [g_00805934]
        lea     edi, [ecx+edx*4]
        jmp     L_620362
L_620339:
        mov     edx, dword ptr [g_00805930]
        xor     ecx, ecx
        mov     cl, byte ptr [eax+0x44]
        mov     esi, ecx
        mov     ecx, dword ptr [g_008058c0]
        sub     ecx, esi
        mov     esi, ecx
        dec     ecx
        test    esi, esi
        jle     L_62035c
        inc     ecx
L_620356:
        dec     ecx
        mov     edx, dword ptr [edx+0x4]
        jnz     L_620356
L_62035c:
        mov     ecx, dword ptr [eax+0x20]
        lea     edi, [edx+ecx*4]
L_620362:
        mov     esi, dword ptr [eax+0x3c]
        test    edi, edi
        setnz   dl
        push    0x78ca58
        push    0x0
        push    edx
        call    FUN_00562f30
        mov     eax, dword ptr [esp+0x28]
        mov     edi, dword ptr [edi]
        add     esp, 0xc
        test    eax, eax
        jz      L_6203cc
        mov     ebx, dword ptr [g_0076b2b4]
        inc     eax
        push    0x78ca54
        push    eax
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jz      L_6203cc
L_6203a0:
        mov     ebp, dword ptr [g_0076b318]
        push    eax
        call    ebp
        add     esp, 0x4
        test    eax, eax
        jl      L_620416
        cmp     eax, dword ptr [esi+0x18]
        jge     L_620416
        mov     ecx, dword ptr [esi+0x14]
        mov     edx, dword ptr [ecx+0x8]
        imul    edx, eax
        push    0x78ca54
        push    0x0
        add     edi, edx
        mov     esi, ecx
        call    ebx
        add     esp, 0x8
        test    eax, eax
        __emit  0x75   /* __emit: MSVC6 miscomputes backward jnz rel-offset (off-by-6); ref 75 D4 */
        __emit  0xD4
L_6203cc:
        push    esi
        call    FUN_0064c950
        mov     ecx, dword ptr [esi+0x4]
        add     esp, 0x4
        cmp     ecx, 0x3
        jz      L_620465
        cmp     eax, dword ptr [g_0080d9bc]
        jz      L_620446
        cmp     ecx, 0x2
        jz      L_620446
        cmp     eax, dword ptr [g_0080d9b8]
        jnz     L_620422
        movsx   eax, byte ptr [edi]
        mov     ecx, dword ptr [esp+0x14]
        push    eax
        push    0x78c9dc
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
L_620416:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        ret     0xc
L_620422:
        fld     dword ptr [edi]
        mov     edx, dword ptr [esp+0x14]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x77f7fc
        push    edx
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
L_620446:
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [esp+0x14]
        push    eax
        push    0x76b9a8
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
L_620465:
        mov     edx, dword ptr [esi+0x14]
        cmp     edx, dword ptr [g_0080d9b8]
        jnz     L_62048d
        mov     eax, dword ptr [esp+0x14]
        push    edi
        push    0x78ca88
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
L_62048d:
        mov     ecx, dword ptr [esp+0x14]
        push    0x78ca38
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
    }
}
