/*
 * FUN_1001d6f0 (585 B) - __thiscall (1 arg, RET 0x4). Parses a stats config
 * string (param_1) via a string-table object, extracting several wchar
 * values (SAVL/OVSZ/version/true) and storing them into the object at
 * offsets 0x11c/0x120/0x124, setting a dirty flag at 0x140. Uses an SEH
 * frame (handler 0x100201c8) and calls into string-table helpers
 * FUN_10006740/FUN_10006840/FUN_10006c40/FUN_100067d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210e0;   /* IAT: wcscmp */
extern void *g_100210dc;   /* IAT: _wtoi */

extern void __cdecl FUN_10006740(void);
extern void __cdecl FUN_10006840(void);
extern void __cdecl FUN_10006c40(void);
extern void __cdecl FUN_100067d0(void);

__declspec(naked) int __cdecl FUN_1001d6f0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x100201c8
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x8
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        test    esi, esi
        mov     ebx, ecx
        jz      L_d920
        cmp     word ptr [esi], 0x0
        jz      L_d920
        push    0x3
        lea     ecx, [esp + 0x10]
        call    FUN_10006740
        push    esi
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x20], 0x0
        call    FUN_10006840
        mov     esi, eax
        test    esi, esi
        jge     L_d76d
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    FUN_100067d0
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x14
        ret     0x4
L_d76d:
        lea     ecx, [esp + 0xc]
        call    FUN_10006c40
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026a84
        mov     ecx, eax
        call    dword ptr [edx + 0x1c]
        mov     esi, eax
        test    esi, esi
        jz      L_d90f
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026a7c
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     edi, eax
        test    edi, edi
        jz      L_d90f
        mov     eax, dword ptr [edi]
        push    0x10026a70
        mov     ecx, edi
        call    dword ptr [eax]
        push    eax
        call    dword ptr [g_100210e0]
        add     esp, 0x8
        test    eax, eax
        jz      L_d7e3
        mov     edx, dword ptr [edi]
        push    0x10026a64
        mov     ecx, edi
        call    dword ptr [edx]
        push    eax
        call    dword ptr [g_100210e0]
        add     esp, 0x8
        test    eax, eax
        jnz     L_d90f
L_d7e3:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026a5c
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        test    eax, eax
        jz      L_d8a4
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        mov     edi, dword ptr [g_100210dc]
        push    eax
        call    edi
        mov     ecx, dword ptr [ebx + 0x11c]
        add     esp, 0x4
        cmp     eax, ecx
        jz      L_d82c
        mov     dword ptr [ebx + 0x11c], eax
        mov     dword ptr [ebx + 0x140], 0x1
L_d82c:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026a54
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        test    eax, eax
        jz      L_d8a4
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        push    eax
        call    edi
        mov     ecx, dword ptr [ebx + 0x11c]
        add     esp, 0x4
        cmp     eax, ecx
        jz      L_d86b
        mov     dword ptr [ebx + 0x120], eax
        mov     dword ptr [ebx + 0x140], 0x1
L_d86b:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026a4c
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        test    eax, eax
        jz      L_d8ce
        mov     edx, dword ptr [eax]
        push    0x10026a40
        mov     ecx, eax
        call    dword ptr [edx]
        push    eax
        call    dword ptr [g_100210e0]
        add     esp, 0x8
        test    eax, eax
        jnz     L_d8ce
        mov     eax, 0x1
        jmp     L_d8d0
L_d8a4:
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    FUN_100067d0
        pop     edi
        pop     esi
        mov     eax, 0x80040271
        pop     ebx
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x14
        ret     0x4
L_d8ce:
        xor     eax, eax
L_d8d0:
        cmp     eax, dword ptr [ebx + 0x124]
        jz      L_d8e8
        mov     dword ptr [ebx + 0x124], eax
        mov     dword ptr [ebx + 0x140], 0x1
L_d8e8:
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    FUN_100067d0
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x14
        ret     0x4
L_d90f:
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    FUN_100067d0
L_d920:
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     eax, 0x80040270
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x14
        ret     0x4
    }
}
