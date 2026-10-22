/*
 * FUN_00620020 (247 B) - __stdcall (RET 0xc, 3 params). Type-to-string
 * formatter: given a value type descriptor (param_3), formats the value
 * into param_1 via sprintf (IAT 0x0076b420). Handles int/float/string/
 * char/array types.
 *
 * CFLAGS: /O1
 */

extern int g_0080d9b0;
extern int g_0080d9bc;
extern int g_0080d9b4;
extern int g_0080d9b8;
extern int (*g_0076b420)(void);

__declspec(naked) void FUN_00620020(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [eax+4]
        mov     edx, dword ptr [g_0080d9b0]
        cmp     ecx, 2
        mov     ecx, dword ptr [g_0080d9bc]
        jnz     L_3e
        cmp     eax, edx
        jz      L_3e
        mov     eax, ecx
L_3e:
        cmp     eax, ecx
        jnz     L_5f
        mov     eax, dword ptr [esp+8]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp+4]
        push    ecx
        push    0x76b9a8
        push    edx
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        ret     0xc
L_5f:
        cmp     eax, dword ptr [g_0080d9b4]
        jnz     L_89
        mov     eax, dword ptr [esp+8]
        fld     dword ptr [eax]
        mov     ecx, dword ptr [esp+4]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x78c9d4
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        ret     0xc
L_89:
        cmp     eax, edx
        jnz     L_b7
        mov     edx, dword ptr [esp+8]
        cmp     dword ptr [edx], 1
        mov     eax, 0x76d170
        jz      L_a0
        mov     eax, 0x76d834
L_a0:
        push    eax
        mov     eax, dword ptr [esp+8]
        push    0x76c690
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        ret     0xc
L_b7:
        mov     ecx, dword ptr [g_0080d9b8]
        cmp     eax, ecx
        jnz     L_e0
        mov     edx, dword ptr [esp+8]
        mov     eax, dword ptr [esp+4]
        xor     ecx, ecx
        mov     cl, byte ptr [edx]
        push    ecx
        push    0x77f804
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        ret     0xc
L_e0:
        cmp     dword ptr [eax+4], 3
        jnz     L_114
        cmp     dword ptr [eax+0x14], ecx
        jnz     L_101
        mov     ecx, dword ptr [esp+4]
        push    0x78c9c8
        push    ecx
        call    dword ptr [g_0076b420]
        add     esp, 8
        ret     0xc
L_101:
        mov     edx, dword ptr [esp+4]
        push    0x78c9c0
        push    edx
        call    dword ptr [g_0076b420]
        add     esp, 8
L_114:
        ret     0xc
    }
}
