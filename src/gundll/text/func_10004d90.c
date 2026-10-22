/*
 * FUN_10004d90 (286 B) - __fastcall, RET (void).
 * SEH-guarded teardown: walks a hash table (param_1 in ECX), freeing each
 * node's sub-object (FUN_10001d60) and unlinking nodes via FUN_1000c4c0,
 * then frees the table itself.
 *
 * __fastcall (ECX = param_1).
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_10001d60(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_1000c4c0(void);     /* rel32 call, 2 args */
extern void  __cdecl FUN_1001aee0(void);     /* rel32 call, 0 args */
extern void *g_10055050;                     /* abs data @ 0x10055050 */

__declspec(naked) void __fastcall FUN_10004d90(void)
{
    __asm {
        push    -1
        push    0x10046ff8
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
        jbe     L_4e34
    L_4dc2:
        mov     edx, dword ptr [ebp + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_4e29
    L_4dd6:
        mov     eax, 0x10006140
        test    eax, eax
        jz      L_4df6
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_4df6
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
    L_4df6:
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
        jnz     L_4dd6
        mov     eax, dword ptr [esp + 0x10]
    L_4e29:
        inc     eax
        cmp     ax, word ptr [ebp]
        mov     dword ptr [esp + 0x10], eax
        jc      L_4dc2
    L_4e34:
        xor     ebx, ebx
        cmp     word ptr [ebp], bx
        mov     dword ptr [ebp + 0x24], ebx
        mov     dword ptr [esp + 0x20], 0xffffffff
        jbe     L_4e7c
    L_4e47:
        mov     edx, dword ptr [ebp + 0x4]
        xor     esi, esi
        mov     si, bx
        shl     esi, 0x4
        mov     eax, dword ptr [esi + edx]
        add     esi, edx
        cmp     eax, esi
        jz      L_4e75
        nop
        /* __emit: 4-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_4e60:
        mov     edx, dword ptr [g_10055050]
        mov     edi, dword ptr [eax]
        push    eax
        push    edx
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_4e60
    L_4e75:
        inc     ebx
        cmp     bx, word ptr [ebp]
        jc      L_4e47
    L_4e7c:
        cmp     word ptr [ebp], 0x1
        jbe     L_4e8f
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_4e8f:
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
