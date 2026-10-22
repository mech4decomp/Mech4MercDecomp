/*
 * FUN_1001de40 (589 B) - __stdcall (3 args, RET 0xC). Iterates over a
 * string-table object's "SAVL" entries (via vtable +0x1c/+0x2c), parsing
 * per-entry values (version at 0xa0, an id at 0x6c via FUN_10012140) and
 * dispatching on the entry type (8 = register via FUN_1000bee0/
 * FUN_10012e10; 2 = free buffers). Uses an SEH frame (handler 0x10020208).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210e0;   /* IAT: wcscmp */
extern void *g_100210dc;   /* IAT: _wtoi */
extern void *g_100210ec;   /* IAT: free */

extern void __cdecl FUN_10006740(void);
extern void __cdecl FUN_10006840(void);
extern void __cdecl FUN_10006c40(void);
extern void __cdecl FUN_100067d0(void);
extern void __cdecl FUN_10012140(void);
extern void __cdecl FUN_1000a110(void);
extern void __cdecl FUN_1000bee0(void);
extern void __cdecl FUN_10012e10(void);
extern void __cdecl FUN_10012090(void);
extern void __cdecl FUN_10012bb0(void);

__declspec(naked) int __cdecl FUN_1001de40(void)
{
    __asm {
        push    -0x1
        push    0x10020208
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0xc
        push    0x7
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x4], 0x0
        call    FUN_10006740
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jbe     L_de82
        mov     eax, dword ptr [eax]
        jmp     L_de87
L_de82:
        mov     eax, 0x100274ec
L_de87:
        push    ebx
        push    edi
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_10006840
        test    eax, eax
        mov     ebx, dword ptr [esp + 0x24]
        jl      L_e053
        lea     ecx, [esp + 0xc]
        call    FUN_10006c40
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026a84
        mov     ecx, eax
        call    dword ptr [edx + 0x1c]
        mov     edi, eax
        test    edi, edi
        jz      L_e053
        push    ebp
        push    esi
L_dec2:
        mov     eax, dword ptr [ebx + 0xac]
        mov     ecx, edi
        inc     eax
        mov     dword ptr [ebx + 0xac], eax
        mov     eax, dword ptr [edi]
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026a7c
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        test    eax, eax
        jz      L_e039
        mov     edx, dword ptr [eax]
        push    0x10026a70
        mov     ecx, eax
        call    dword ptr [edx]
        push    eax
        call    dword ptr [g_100210e0]
        add     esp, 0x8
        test    eax, eax
        jnz     L_e039
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026a4c
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        mov     esi, eax
        test    esi, esi
        jz      L_df36
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax]
        push    eax
        call    dword ptr [g_100210dc]
        add     esp, 0x4
        jmp     L_df38
L_df36:
        xor     eax, eax
L_df38:
        test    esi, esi
        mov     dword ptr [ebx + 0xa0], eax
        jz      L_e039
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [eax]
        push    0x1
        push    0x10026704
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        test    eax, eax
        jz      L_e039
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx]
        push    eax
        call    dword ptr [g_100210dc]
        add     esp, 0x4
        mov     ebp, eax
        lea     ecx, [ebx + 0x6c]
        push    ebp
        call    FUN_10012140
        mov     esi, eax
        test    esi, esi
        jz      L_e039
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, 0x8
        jz      L_e004
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        cmp     eax, 0x2
        mov     dword ptr [esp + 0x10], edx
        jnz     L_e030
        mov     eax, dword ptr [esi + 0xb4]
        xor     ecx, ecx
        cmp     eax, ecx
        jbe     L_dfc4
        mov     eax, dword ptr [esi + 0xa8]
        cmp     eax, ecx
        jz      L_dfc4
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
        xor     ecx, ecx
L_dfc4:
        mov     dword ptr [esi + 0xa8], ecx
        mov     dword ptr [esi + 0xb8], ecx
        mov     dword ptr [esi + 0xb4], ecx
        mov     eax, dword ptr [esi + 0x1c]
        cmp     eax, ecx
        jbe     L_dff0
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, ecx
        jz      L_dff0
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
        xor     ecx, ecx
L_dff0:
        push    esi
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x20], ecx
        mov     dword ptr [esi + 0x1c], ecx
        call    FUN_1000a110
        add     esp, 0x4
        jmp     L_e030
L_e004:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebx + 0xb0]
        inc     ecx
        inc     eax
        mov     dword ptr [ebx + 0xb0], eax
        lea     eax, [esi + 0x10]
        push    eax
        push    edi
        mov     dword ptr [esp + 0x18], ecx
        call    FUN_1000bee0
        add     esp, 0x8
        push    esi
        push    0x1
        push    ebx
        call    FUN_10012e10
L_e030:
        push    ebp
        lea     ecx, [ebx + 0x6c]
        call    FUN_10012090
L_e039:
        mov     edx, dword ptr [edi]
        push    0x1
        push    0x10026a84
        mov     ecx, edi
        call    dword ptr [edx + 0x2c]
        mov     edi, eax
        test    edi, edi
        jnz     L_dec2
        pop     esi
        pop     ebp
L_e053:
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x8]
        sub     eax, edx
        push    0x80040280
        push    eax
        push    ebx
        call    FUN_10012bb0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x1c], 0xffffffff
        call    FUN_100067d0
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x18
        ret     0xc
    }
}
