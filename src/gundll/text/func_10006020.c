/*
 * FUN_10006020 (286 B) - __fastcall.
 * SEH-guarded list teardown: frees each node's 0x8 payload (FUN_10001d60),
 * unlinks and frees each node (FUN_1000c4c0), then frees the bucket array
 * (FUN_10001d60) and resets the list (FUN_1001aee0).
 *
 * __fastcall (this in ECX).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call, 1 arg */
extern void __cdecl FUN_1000c4c0(void);   /* rel32 call, 2 args */
extern void __cdecl FUN_1001aee0(void);   /* rel32 call, 0 args */
extern void __cdecl FUN_10006140(void);   /* function pointer (offset load) */
extern void *g_10055050;                  /* abs data @ 0x10055050 */

__declspec(naked) void __fastcall FUN_10006020(void)
{
    __asm {
        push    -1
        push    0x10047088
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     dword ptr [esp + 0x14], ebp
        xor     eax, eax
        cmp     word ptr [ebp], ax
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x10], eax
        jbe     L_60c4
    L_6052:
        mov     edx, dword ptr [ebp + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_60b9
    L_6066:
        mov     eax, offset FUN_10006140
        test    eax, eax
        jz      L_6086
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_6086
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
    L_6086:
        mov     ecx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0x4], eax
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_6066
        mov     eax, dword ptr [esp + 0x10]
    L_60b9:
        inc     eax
        cmp     ax, word ptr [ebp]
        mov     dword ptr [esp + 0x10], eax
        jc      L_6052
    L_60c4:
        xor     ebx, ebx
        cmp     word ptr [ebp], bx
        mov     dword ptr [ebp + 0x24], ebx
        mov     dword ptr [esp + 0x20], 0xffffffff
        jbe     L_610c
    L_60d7:
        mov     edx, dword ptr [ebp + 0x4]
        xor     esi, esi
        mov     si, bx
        shl     esi, 0x4
        mov     eax, dword ptr [esi + edx]
        add     esi, edx
        cmp     eax, esi
        jz      L_6105
        nop
        /* __emit: 4-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_60f0:
        mov     edx, dword ptr [g_10055050]
        mov     edi, dword ptr [eax]
        push    eax
        push    edx
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_60f0
    L_6105:
        inc     ebx
        cmp     bx, word ptr [ebp]
        jc      L_60d7
    L_610c:
        cmp     word ptr [ebp], 0x1
        jbe     L_611f
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_611f:
        mov     dword ptr [ebp + 0x4], 0x0
        call    FUN_1001aee0
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret
    }
}
