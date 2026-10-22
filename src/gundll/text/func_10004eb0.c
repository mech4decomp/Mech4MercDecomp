/*
 * FUN_10004eb0 (686 B) - __stdcall, RET 0xc.
 * SEH-guarded COM-style object builder: validates a flag at param_1+0x14 and
 * a hash table at param_1+0x7c, searches for an existing entry (indirect
 * vtable calls), allocates a 0x3c-byte object (FUN_10001d50 + FUN_10006170),
 * registers a string (FUN_1001b280), inserts a node (FUN_1000c410), and on
 * failure tears everything down.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_10001d50(int);      /* rel32 call, alloc */
extern void  __cdecl FUN_10006170(void);     /* rel32 call, ecx=this, 5 args */
extern int   __cdecl FUN_1001b280(void);     /* rel32 call, ecx=this, 2 args */
extern void *__cdecl FUN_1000c410(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_10005a40(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_10001d60(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_1000c4c0(void);     /* rel32 call, 2 args */
extern void  __cdecl FUN_1001aee0(void);     /* rel32 call, 0 args */
extern void *g_10055050;                     /* abs data @ 0x10055050 */

__declspec(naked) void __stdcall FUN_10004eb0(void)
{
    __asm {
        push    -1
        push    0x10047023
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x14]
        mov     cl, byte ptr [eax + 0x14]
        test    cl, cl
        push    ebx
        push    ebp
        push    esi
        push    edi
        jnz     L_4edf
        mov     eax, 0xc1120008
        jmp     L_5149
    L_4edf:
        mov     ebx, dword ptr [eax + 0x7c]
        test    ebx, ebx
        jnz     L_4ef0
        mov     eax, 0xc1120008
        jmp     L_5149
    L_4ef0:
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        jz      L_4f06
        mov     ebp, dword ptr [esp + 0x28]
        test    ebp, ebp
        jz      L_4f06
        cmp     word ptr [eax], 0x0
        jnz     L_4f10
    L_4f06:
        mov     eax, 0x80070057
        jmp     L_5149
    L_4f10:
        push    ebp
        call    dword ptr [ebx + 0xc]
        and     ax, word ptr [ebx + 0x2]
        mov     ecx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      L_4f77
        /* __emit: 4-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_4f30:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_4f4b
        mov     eax, dword ptr [esi + 0x8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [ebx + 0x8]
        test    al, al
        jnz     L_4f53
        mov     ebp, dword ptr [esp + 0x28]
    L_4f4b:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_4f30
        jmp     L_4f77
    L_4f53:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        jz      L_4f61
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    ebx
    L_4f61:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_4f73
        mov     eax, 0xc1120c02
        jmp     L_5149
    L_4f73:
        mov     ebp, dword ptr [esp + 0x28]
    L_4f77:
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x28], esi
        xor     edi, edi
        cmp     esi, edi
        mov     dword ptr [esp + 0x1c], edi
        jz      L_4fbf
        push    0x10
        push    0x8
        push    edi
        push    0x10004af0
        push    0x1001b030
        mov     ecx, esi
        call    FUN_10006170
        mov     dword ptr [esi + 0x2c], 0x1001b030
        mov     dword ptr [esi + 0x30], 0x10004af0
        mov     dword ptr [esi + 0x34], ebp
        mov     dword ptr [esi + 0x38], edi
        mov     ebx, esi
        jmp     L_4fc1
    L_4fbf:
        xor     ebx, ebx
    L_4fc1:
        cmp     ebx, edi
        mov     dword ptr [esp + 0x1c], 0xffffffff
        jnz     L_4fd7
        mov     eax, 0x8007000e
        jmp     L_5149
    L_4fd7:
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        push    0x10049b60
        mov     ecx, ebx
        call    FUN_1001b280
        cmp     eax, edi
        mov     dword ptr [esp + 0x28], eax
        jl      L_504e
        mov     edx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [edx + 0x7c]
        push    ebp
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 0x2]
        xor     ebp, ebp
        mov     bp, ax
        mov     eax, dword ptr [edi + 0x4]
        mov     esi, ebp
        shl     esi, 0x4
        add     esi, eax
        mov     eax, dword ptr [g_10055050]
        push    eax
        call    FUN_1000c410
        test    eax, eax
        jz      L_5046
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0xc], ebp
        mov     dword ptr [eax + 0x4], esi
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esi], eax
        mov     edx, dword ptr [eax]
        mov     dword ptr [edx + 0x4], eax
        inc     dword ptr [edi + 0x24]
        mov     eax, dword ptr [esp + 0x24]
        add     eax, -0x14
        push    eax
        call    FUN_10005a40
        jmp     L_5145
    L_5046:
        mov     dword ptr [esp + 0x28], 0x8007000e
    L_504e:
        mov     dword ptr [esp + 0x2c], ebx
        xor     eax, eax
        cmp     word ptr [ebx], ax
        mov     dword ptr [esp + 0x1c], 0x1
        mov     dword ptr [esp + 0x24], eax
        jbe     L_50dd
    L_5065:
        mov     edx, dword ptr [ebx + 0x4]
        xor     ebp, ebp
        mov     bp, ax
        shl     ebp, 0x4
        mov     esi, dword ptr [ebp + edx]
        add     ebp, edx
        cmp     esi, ebp
        jz      L_50d3
        /* __emit: 6-byte alignment NOP (LEA EBX,[EBX]); MSVC6 collapses to 8D 1B */
        __emit 0x8D
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_5080:
        mov     ecx, 0x10006140
        test    ecx, ecx
        jz      L_50a0
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_50a0
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
    L_50a0:
        mov     edx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [edx], edi
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     edx, dword ptr [g_10055050]
        push    esi
        push    edx
        call    FUN_1000c4c0
        cmp     edi, ebp
        mov     esi, edi
        jnz     L_5080
        mov     eax, dword ptr [esp + 0x24]
    L_50d3:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x24], eax
        jc      L_5065
    L_50dd:
        xor     ebp, ebp
        cmp     word ptr [ebx], bp
        mov     dword ptr [ebx + 0x24], ebp
        mov     dword ptr [esp + 0x1c], 0xffffffff
        jbe     L_511e
        nop
    L_50f0:
        mov     edx, dword ptr [ebx + 0x4]
        xor     esi, esi
        mov     si, bp
        shl     esi, 0x4
        mov     eax, dword ptr [esi + edx]
        add     esi, edx
        cmp     eax, esi
        jz      L_5118
    L_5104:
        mov     edi, dword ptr [eax]
        push    eax
        mov     eax, dword ptr [g_10055050]
        push    eax
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_5104
    L_5118:
        inc     ebp
        cmp     bp, word ptr [ebx]
        jc      L_50f0
    L_511e:
        cmp     word ptr [ebx], 0x1
        jbe     L_5130
        mov     ecx, dword ptr [ebx + 0x4]
        push    ecx
        call    FUN_10001d60
        add     esp, 0x4
    L_5130:
        mov     dword ptr [ebx + 0x4], 0x0
        call    FUN_1001aee0
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_5145:
        mov     eax, dword ptr [esp + 0x28]
    L_5149:
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0xc
    }
}
