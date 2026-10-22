/*
 * FUN_00620120 (439 B) - __stdcall (RET 0x8, 2 params). Value-to-string
 * formatter for the mission/pilot-save options subsystem. Given a value
 * descriptor (param_2), formats its current value into param_1 via sprintf
 * (IAT 0x0076b420). Handles scalar/char/float/array/string types and
 * variable lookups through the symbol tables (0x00805928/0x00805934/
 * 0x00805930/0x008058c0).
 *
 * CFLAGS: /O1
 */

extern int g_0080d9bc;
extern int g_0080d9b8;
extern int g_00805928;
extern int g_00805934;
extern int g_00805930;
extern int g_008058c0;
extern int (*g_0076b420)(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_00562f30(void);

__declspec(naked) void FUN_00620120(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax+0x3c]
        push    esi
        push    edi
        mov     edi, dword ptr [eax+0x18]
        cmp     edi, 1
        jnz     L_18c
        cmp     ebp, dword ptr [g_0080d9bc]
        jnz     L_15b
        mov     eax, dword ptr [eax+0x1c]
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
        ret     8
L_15b:
        cmp     ebp, dword ptr [g_0080d9b8]
        jnz     L_184
        movsx   edx, byte ptr [eax+0x1c]
        mov     eax, dword ptr [esp+0x14]
        push    edx
        push    0x77f804
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_184:
        fld     dword ptr [eax+0x1c]
        jmp     L_27a
L_18c:
        mov     ecx, dword ptr [eax+0x1c]
        xor     esi, esi
        sub     ecx, esi
        jz      L_1b6
        dec     ecx
        jz      L_1a8
        dec     ecx
        jnz     L_1ff
        mov     edx, dword ptr [eax+0x20]
        mov     eax, dword ptr [g_00805928]
        lea     esi, [eax+edx*4]
        jmp     L_1ff
L_1a8:
        mov     ecx, dword ptr [eax+0x20]
        mov     edx, dword ptr [g_00805934]
        lea     esi, [edx+ecx*4]
        jmp     L_1ff
L_1b6:
        mov     ecx, dword ptr [g_00805930]
        test    ecx, ecx
        jnz     L_1dc
        mov     eax, dword ptr [esp+0x14]
        push    0x78ca14
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 8
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_1dc:
        xor     edx, edx
        mov     dl, byte ptr [eax+0x44]
        mov     esi, edx
        mov     edx, dword ptr [g_008058c0]
        sub     edx, esi
        mov     esi, edx
        dec     edx
        test    esi, esi
        jle     L_1f9
        inc     edx
L_1f3:
        dec     edx
        mov     ecx, dword ptr [ecx+4]
        jnz     L_1f3
L_1f9:
        mov     eax, dword ptr [eax+0x20]
        lea     esi, [ecx+eax*4]
L_1ff:
        cmp     edi, 5
        jnz     L_20c
        cmp     dword ptr [ebp+4], 3
        jz      L_20c
        mov     esi, dword ptr [esi]
L_20c:
        push    ebp
        call    FUN_0064c950
        add     esp, 4
        test    esi, esi
        mov     edi, eax
        jnz     L_225
        push    0x78ca14
        jmp     L_2c0
L_225:
        mov     ebx, dword ptr [ebp+4]
        cmp     ebx, 3
        jz      L_2bb
        push    0x78c9e4
        push    0
        push    1
        call    FUN_00562f30
        mov     eax, dword ptr [g_0080d9bc]
        add     esp, 0xc
        cmp     edi, eax
        jz      L_29c
        cmp     ebx, 2
        jz      L_29c
        cmp     edi, dword ptr [g_0080d9b8]
        jnz     L_278
        movsx   edx, byte ptr [esi]
        mov     eax, dword ptr [esp+0x14]
        push    edx
        push    0x78c9dc
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_278:
        fld     dword ptr [esi]
L_27a:
        mov     ecx, dword ptr [esp+0x14]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x77f7fc
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_29c:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esp+0x14]
        push    edx
        push    0x76b9a8
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_2bb:
        push    0x78c9c0
L_2c0:
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 8
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }
}
