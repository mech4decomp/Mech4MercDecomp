/*
 * FUN_10004790 (863 B) - __stdcall, RET 0x8.
 * SEH-guarded COM-style object builder: allocates three 0x3c-byte objects
 * (via FUN_10001d50 + ctors FUN_100063b0/FUN_10006170), registers string
 * entries (FUN_1001b280/FUN_1001b700), inserts a node into a hash table
 * (FUN_1000c410/FUN_1000c4c0), and on failure tears everything down.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_10001d50(int);      /* rel32 call, alloc */
extern void  __cdecl FUN_100063b0(void);     /* rel32 call, ecx=this, 5 args */
extern void  __cdecl FUN_10006170(void);     /* rel32 call, ecx=this, 5 args */
extern int   __cdecl FUN_1001b280(void);     /* rel32 call, ecx=this, 2 args */
extern int   __cdecl FUN_1001b700(void);     /* rel32 call, ecx=this, 2 args */
extern void *__cdecl FUN_1000c410(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_10005a40(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_100064e0(void);     /* rel32 call, 3 args */
extern void  __cdecl FUN_1000c4c0(void);     /* rel32 call, 2 args */
extern void  __cdecl FUN_10001d60(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_1001aee0(void);     /* rel32 call, 0 args */
extern void  __cdecl FUN_10006320(void);     /* rel32 call, 3 args */
extern void *g_10055050;                     /* abs data @ 0x10055050 */

__declspec(naked) void __stdcall FUN_10004790(void)
{
    __asm {
        push    -1
        push    0x10046fc1
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     al, byte ptr [ecx + 0x14]
        test    al, al
        push    ebx
        push    ebp
        push    esi
        push    edi
        jnz     L_47bf
        mov     eax, 0xc1120008
        jmp     L_4ada
    L_47bf:
        mov     eax, dword ptr [esp + 0x28]
        xor     ebp, ebp
        cmp     eax, ebp
        jnz     L_47d3
        mov     eax, 0x80070057
        jmp     L_4ada
    L_47d3:
        cmp     word ptr [eax], bp
        jnz     L_47e2
        mov     eax, 0x80070057
        jmp     L_4ada
    L_47e2:
        cmp     dword ptr [ecx + 0x7c], ebp
        jz      L_47f1
        mov     eax, 0xc1120009
        jmp     L_4ada
    L_47f1:
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], esi
        cmp     esi, ebp
        mov     dword ptr [esp + 0x1c], ebp
        jz      L_4837
        push    0x10
        push    0x8
        push    ebp
        push    0x10004b20
        push    0x10004b10
        mov     ecx, esi
        call    FUN_100063b0
        mov     dword ptr [esi + 0x2c], 0x10004b10
        mov     dword ptr [esi + 0x30], 0x10004b20
        mov     dword ptr [esi + 0x34], ebp
        mov     dword ptr [esi + 0x38], ebp
        mov     edi, esi
        jmp     L_4839
    L_4837:
        xor     edi, edi
    L_4839:
        cmp     edi, ebp
        mov     dword ptr [esp + 0x1c], 0xffffffff
        jnz     L_484f
        mov     eax, 0x8007000e
        jmp     L_4ada
    L_484f:
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], esi
        cmp     esi, ebp
        mov     dword ptr [esp + 0x1c], 0x1
        jz      L_4899
        push    0x10
        push    0x8
        push    ebp
        push    0x10004af0
        push    0x1001b030
        mov     ecx, esi
        call    FUN_10006170
        mov     dword ptr [esi + 0x2c], 0x1001b030
        mov     dword ptr [esi + 0x30], 0x10004af0
        mov     dword ptr [esi + 0x34], ebp
        mov     dword ptr [esi + 0x38], ebp
        mov     ebx, esi
        jmp     L_489b
    L_4899:
        xor     ebx, ebx
    L_489b:
        cmp     ebx, ebp
        mov     dword ptr [esp + 0x1c], 0xffffffff
        jz      L_49be
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], esi
        cmp     esi, ebp
        mov     dword ptr [esp + 0x1c], 0x2
        jz      L_48f3
        push    0x10
        push    0x8
        push    ebp
        push    0x10004af0
        push    0x1001b030
        mov     ecx, esi
        call    FUN_10006170
        mov     dword ptr [esi + 0x2c], 0x1001b030
        mov     dword ptr [esi + 0x30], 0x10004af0
        mov     dword ptr [esi + 0x34], ebp
        mov     dword ptr [esi + 0x38], ebp
        jmp     L_48f5
    L_48f3:
        xor     esi, esi
    L_48f5:
        cmp     esi, ebp
        mov     dword ptr [esp + 0x1c], 0xffffffff
        jz      L_49be
        mov     eax, dword ptr [esp + 0x24]
        mov     eax, dword ptr [eax + 0x44]
        push    eax
        push    0x10049b24
        mov     ecx, esi
        call    FUN_1001b280
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], eax
        jl      L_49c6
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ecx + 0x4c]
        push    edx
        push    0x10049b34
        mov     ecx, esi
        call    FUN_1001b700
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], eax
        jl      L_49c6
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    0x10049b70
        mov     ecx, ebx
        call    FUN_1001b280
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], eax
        jl      L_49c6
        push    ebp
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 0x2]
        mov     ecx, dword ptr [g_10055050]
        xor     ebp, ebp
        mov     bp, ax
        mov     eax, dword ptr [edi + 0x4]
        push    ecx
        mov     dword ptr [esp + 0x2c], ebp
        shl     ebp, 0x4
        add     ebp, eax
        call    FUN_1000c410
        test    eax, eax
        jz      L_49bc
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0x4], ebp
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [eax], ecx
        mov     dword ptr [ebp], eax
        mov     edx, dword ptr [eax]
        mov     dword ptr [edx + 0x4], eax
        inc     dword ptr [edi + 0x24]
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 0x7c], edi
        mov     dword ptr [eax + 0x78], esi
        add     eax, -0x14
        push    eax
        call    FUN_10005a40
        jmp     L_4ad6
    L_49bc:
        xor     ebp, ebp
    L_49be:
        mov     dword ptr [esp + 0x10], 0x8007000e
    L_49c6:
        mov     dword ptr [esp + 0x24], edi
        push    ebp
        push    0x10006150
        push    edi
        mov     dword ptr [esp + 0x28], 0x3
        call    FUN_100064e0
        xor     ecx, ecx
        cmp     word ptr [edi], bp
        mov     dword ptr [esp + 0x1c], 0xffffffff
        mov     dword ptr [esp + 0x24], ecx
        jbe     L_4a28
    L_49f1:
        mov     eax, dword ptr [edi + 0x4]
        xor     esi, esi
        mov     si, cx
        shl     esi, 0x4
        add     esi, eax
        mov     eax, dword ptr [esi]
        cmp     eax, esi
        jz      L_4a1e
    L_4a04:
        mov     ebp, dword ptr [eax]
        push    eax
        mov     eax, dword ptr [g_10055050]
        push    eax
        call    FUN_1000c4c0
        cmp     ebp, esi
        mov     eax, ebp
        jnz     L_4a04
        mov     ecx, dword ptr [esp + 0x24]
        xor     ebp, ebp
    L_4a1e:
        inc     ecx
        cmp     cx, word ptr [edi]
        mov     dword ptr [esp + 0x24], ecx
        jc      L_49f1
    L_4a28:
        cmp     word ptr [edi], 0x1
        jbe     L_4a3a
        mov     eax, dword ptr [edi + 0x4]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_4a3a:
        mov     dword ptr [edi + 0x4], ebp
        call    FUN_1001aee0
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
        cmp     ebx, ebp
        jz      L_4ad6
        mov     dword ptr [esp + 0x24], ebx
        push    ebp
        push    0x10006140
        push    ebx
        mov     dword ptr [esp + 0x28], 0x4
        call    FUN_10006320
        cmp     word ptr [ebx], 0x0
        mov     dword ptr [esp + 0x1c], 0xffffffff
        jbe     L_4aaf
        /* __emit: 7-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_4a80:
        mov     edx, dword ptr [ebx + 0x4]
        xor     esi, esi
        mov     si, bp
        shl     esi, 0x4
        mov     eax, dword ptr [esi + edx]
        add     esi, edx
        cmp     eax, esi
        jz      L_4aa9
    L_4a94:
        mov     ecx, dword ptr [g_10055050]
        mov     edi, dword ptr [eax]
        push    eax
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_4a94
    L_4aa9:
        inc     ebp
        cmp     bp, word ptr [ebx]
        jc      L_4a80
    L_4aaf:
        cmp     word ptr [ebx], 0x1
        jbe     L_4ac1
        mov     edx, dword ptr [ebx + 0x4]
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
    L_4ac1:
        mov     dword ptr [ebx + 0x4], 0x0
        call    FUN_1001aee0
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_4ad6:
        mov     eax, dword ptr [esp + 0x10]
    L_4ada:
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x8
    }
}
