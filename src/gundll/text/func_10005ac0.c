/*
 * FUN_10005ac0 (678 B) - __stdcall, RET 0x4.
 * SEH-guarded COM-style object rebuild: if param_1+0x40 == 2, calls
 * FUN_10005d90 to build a new list, allocates a 0x10-byte object
 * (FUN_10001d50 + FUN_1001b790), links it (FUN_1001ba60), registers it
 * (FUN_100192c0/FUN_10001970), then tears down the old list at +0x94
 * (freeing each node via FUN_10005d70/FUN_1000c4c0) and installs the new
 * one. Otherwise calls FUN_10005a90 and cleans up the pending list.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10019250(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10005a90(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10005d90(void);   /* rel32 call, 2 args */
extern void *__cdecl FUN_10001d50(int);   /* rel32 call, alloc */
extern void *__cdecl FUN_1001b790(void);  /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_1001ba60(void);   /* rel32 call, 3 args */
extern void __cdecl FUN_100192c0(void);   /* rel32 call, 3 args */
extern void __cdecl FUN_10001970(void);   /* rel32 call, 2 args */
extern void __cdecl FUN_10005d70(void);   /* rel32 call, 1 arg */
extern void __cdecl FUN_1000c4c0(void);   /* rel32 call, 2 args */
extern void __cdecl FUN_10006480(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call, 1 arg */
extern void __cdecl FUN_1001b7c0(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_100193e0(void);   /* rel32 call (thiscall, ecx=this) */
extern void __cdecl FUN_10006150(void);   /* function pointer (offset load) */
extern void *g_10055050;                  /* abs data @ 0x10055050 */

__declspec(naked) void __stdcall FUN_10005ac0(void)
{
    __asm {
        push    -1
        push    0x10047053
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x3c
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        push    edi
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_10019250
        mov     ebp, dword ptr [esp + 0x5c]
        cmp     dword ptr [ebp + 0x40], 0x2
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x14], ebx
        jz      L_5bfc
        mov     ecx, ebp
        call    FUN_10005a90
    L_5b0c:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_5bba
        mov     edi, eax
        mov     dword ptr [esp + 0x18], edi
        xor     ecx, ecx
        cmp     word ptr [eax], bx
        mov     byte ptr [esp + 0x54], 0x3
        mov     dword ptr [esp + 0x5c], ecx
        jbe     L_5ba3
        add     eax, 0x4
        mov     dword ptr [esp + 0x20], eax
    L_5b35:
        mov     edx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [edx]
        xor     ebp, ebp
        mov     bp, cx
        shl     ebp, 0x4
        add     ebp, esi
        mov     esi, dword ptr [ebp]
        cmp     esi, ebp
        jz      L_5b99
        /* __emit: 4-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_5b50:
        mov     eax, offset FUN_10006150
        test    eax, eax
        jz      L_5b6a
        mov     ecx, dword ptr [esi + 0x8]
        cmp     ecx, ebx
        jz      L_5b6a
        push    0x1
        call    FUN_10005d70
        mov     dword ptr [esi + 0x8], ebx
    L_5b6a:
        mov     ecx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0x4], eax
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi], ebx
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, ebp
        mov     esi, edi
        jnz     L_5b50
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edi, dword ptr [esp + 0x18]
    L_5b99:
        inc     ecx
        cmp     cx, word ptr [edi]
        mov     dword ptr [esp + 0x5c], ecx
        jc      L_5b35
    L_5ba3:
        mov     ecx, edi
        mov     dword ptr [edi + 0x24], ebx
        mov     byte ptr [esp + 0x54], bl
        call    FUN_10006480
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_5bba:
        mov     esi, dword ptr [esp + 0x1c]
        cmp     esi, ebx
        jz      L_5bd2
        mov     ecx, esi
        call    FUN_1001b7c0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_5bd2:
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x54], 0xffffffff
        call    FUN_100193e0
        mov     ecx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x4
    L_5bfc:
        lea     eax, [esp + 0x10]
        push    eax
        push    ebp
        call    FUN_10005d90
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], eax
        jl      L_5b0c
        cmp     dword ptr [ebp + 0x94], ebx
        jnz     L_5c21
        cmp     dword ptr [esp + 0x10], ebx
        jz      L_5bd2
    L_5c21:
        push    0x10
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x20], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x54], 0x1
        jz      L_5c43
        mov     ecx, eax
        call    FUN_1001b790
        mov     esi, eax
        jmp     L_5c45
    L_5c43:
        xor     esi, esi
    L_5c45:
        cmp     esi, ebx
        mov     byte ptr [esp + 0x54], bl
        mov     dword ptr [esp + 0x1c], esi
        jnz     L_5c5e
        mov     dword ptr [esp + 0x14], 0x8007000e
        jmp     L_5b0c
    L_5c5e:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x94]
        push    ecx
        push    edx
        push    esi
        call    FUN_1001ba60
        push    esi
        push    ebx
        lea     eax, [esp + 0x30]
        push    eax
        call    FUN_100192c0
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], eax
        jl      L_5b0c
        lea     ecx, [esp + 0x28]
        push    ecx
        push    ebp
        call    FUN_10001970
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], eax
        jl      L_5b0c
        mov     edi, dword ptr [ebp + 0x94]
        cmp     edi, ebx
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x24], edi
        jz      L_5d4d
        xor     eax, eax
        cmp     word ptr [edi], bx
        mov     byte ptr [esp + 0x54], 0x2
        mov     dword ptr [esp + 0x18], eax
        jbe     L_5d36
    L_5cc5:
        mov     edx, dword ptr [edi + 0x4]
        xor     ebp, ebp
        mov     bp, ax
        shl     ebp, 0x4
        mov     esi, dword ptr [ebp + edx]
        add     ebp, edx
        cmp     esi, ebp
        jz      L_5d28
        /* __emit: 6-byte alignment NOP (LEA EBX,[EBX+0]); MSVC6 encodes differently */
        __emit 0x8D
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_5ce0:
        mov     edx, offset FUN_10006150
        test    edx, edx
        jz      L_5cfa
        mov     ecx, dword ptr [esi + 0x8]
        cmp     ecx, ebx
        jz      L_5cfa
        push    0x1
        call    FUN_10005d70
        mov     dword ptr [esi + 0x8], ebx
    L_5cfa:
        mov     eax, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi], ebx
        mov     eax, dword ptr [g_10055050]
        push    esi
        push    eax
        call    FUN_1000c4c0
        cmp     edi, ebp
        mov     esi, edi
        jnz     L_5ce0
        mov     eax, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x20]
    L_5d28:
        inc     eax
        cmp     ax, word ptr [edi]
        mov     dword ptr [esp + 0x18], eax
        jc      L_5cc5
        mov     ebp, dword ptr [esp + 0x5c]
    L_5d36:
        mov     ecx, edi
        mov     dword ptr [edi + 0x24], ebx
        mov     byte ptr [esp + 0x54], bl
        call    FUN_10006480
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_5d4d:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ebp + 0x94], ecx
        mov     dword ptr [esp + 0x10], ebx
        mov     byte ptr [ebp + 0x88], bl
        jmp     L_5bba
    }
}
