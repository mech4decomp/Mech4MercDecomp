/*
 * FUN_10004ba0 (492 B) - __fastcall, RET (void).
 * SEH-guarded teardown: walks a hash table (param_1 in ECX), freeing each
 * node's sub-object (FUN_10006140/FUN_10006240/FUN_10001d60) and unlinking
 * nodes via FUN_1000c4c0, then frees the table itself.
 *
 * __fastcall (ECX = param_1).
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_10006140(void);     /* rel32 call, 2 args */
extern void  __cdecl FUN_1000c4c0(void);     /* rel32 call, 2 args */
extern void  __cdecl FUN_10006240(void);     /* rel32 call, ecx=this */
extern void  __cdecl FUN_10001d60(void);     /* rel32 call, 1 arg */
extern void  __cdecl FUN_1001aee0(void);     /* rel32 call, 0 args */
extern void *g_10055050;                     /* abs data @ 0x10055050 */

__declspec(naked) void __fastcall FUN_10004ba0(void)
{
    __asm {
        push    -1
        push    0x10046fe0
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        push    edi
        mov     dword ptr [esp + 0x18], ebx
        xor     eax, eax
        cmp     word ptr [ebx], ax
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x1c], eax
        jbe     L_4d16
    L_4bd5:
        mov     edx, dword ptr [ebx + 0x4]
        xor     ebp, ebp
        mov     bp, ax
        shl     ebp, 0x4
        mov     edi, dword ptr [ebp + edx]
        add     ebp, edx
        cmp     edi, ebp
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x10], edi
        jz      L_4d08
        jmp     L_4c00
    L_4bf8:
        mov     edi, dword ptr [esp + 0x10]
        /* __emit: 4-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_4c00:
        mov     eax, 0x10006150
        test    eax, eax
        jz      L_4cd0
        mov     ebx, dword ptr [edi + 0x8]
        test    ebx, ebx
        jz      L_4ccc
        mov     dword ptr [esp + 0x24], ebx
        xor     eax, eax
        cmp     word ptr [ebx], ax
        mov     byte ptr [esp + 0x30], 0x1
        mov     dword ptr [esp + 0x14], eax
        jbe     L_4ca9
        /* __emit: 4-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_4c30:
        mov     edx, dword ptr [ebx + 0x4]
        xor     ebp, ebp
        mov     bp, ax
        shl     ebp, 0x4
        mov     esi, dword ptr [ebp + edx]
        add     ebp, edx
        cmp     esi, ebp
        jz      L_4c9b
    L_4c45:
        mov     ecx, 0x10006140
        test    ecx, ecx
        jz      L_4c64
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_4c64
        push    0x0
        push    eax
        call    FUN_10006140
        mov     dword ptr [esi + 0x8], 0x0
    L_4c64:
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
        jnz     L_4c45
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
    L_4c9b:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x14], eax
        jc      L_4c30
        mov     ebp, dword ptr [esp + 0x20]
    L_4ca9:
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x24], 0x0
        mov     byte ptr [esp + 0x30], 0x0
        call    FUN_10006240
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [edi + 0x8], 0x0
    L_4ccc:
        mov     ebx, dword ptr [esp + 0x18]
    L_4cd0:
        mov     eax, dword ptr [edi + 0x4]
        mov     esi, dword ptr [edi]
        mov     dword ptr [eax], esi
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [edi + 0x4], 0x0
        mov     dword ptr [edi], 0x0
        mov     eax, dword ptr [g_10055050]
        push    edi
        push    eax
        call    FUN_1000c4c0
        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], esi
        jnz     L_4bf8
        mov     eax, dword ptr [esp + 0x1c]
    L_4d08:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x1c], eax
        jc      L_4bd5
    L_4d16:
        xor     ebp, ebp
        cmp     word ptr [ebx], bp
        mov     dword ptr [ebx + 0x24], ebp
        mov     dword ptr [esp + 0x30], 0xffffffff
        jbe     L_4d5b
    L_4d28:
        mov     edx, dword ptr [ebx + 0x4]
        xor     esi, esi
        mov     si, bp
        shl     esi, 0x4
        mov     eax, dword ptr [esi + edx]
        add     esi, edx
        cmp     eax, esi
        jz      L_4d55
        /* __emit: 4-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 collapses to 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_4d40:
        mov     ecx, dword ptr [g_10055050]
        mov     edi, dword ptr [eax]
        push    eax
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_4d40
    L_4d55:
        inc     ebp
        cmp     bp, word ptr [ebx]
        jc      L_4d28
    L_4d5b:
        cmp     word ptr [ebx], 0x1
        jbe     L_4d6d
        mov     edx, dword ptr [ebx + 0x4]
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
    L_4d6d:
        mov     dword ptr [ebx + 0x4], 0x0
        call    FUN_1001aee0
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x24
        ret
    }
}
