/*
 * FUN_10006320 (141 B) - __stdcall, RET 0xc.
 * Walks a doubly-linked-list array (param_1: ushort count + dword array ptr),
 * invoking a callback (param_2) on each node's data (param_3), then unlinks
 * and frees each node via FUN_1000c4c0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern int  g_10055050;                       /* DAT_10055050 */
extern void __cdecl FUN_1000c4c0(void);       /* rel32 call, 2 args */

__declspec(naked) void __stdcall FUN_10006320(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    ebp
        xor     ebp, ebp
        xor     eax, eax
        cmp     word ptr [ecx], bp
        mov     dword ptr [esp + 0x4], eax
        jbe     L_63a5
        push    ebx
        push    esi
        push    edi
    L_6336:
        mov     esi, dword ptr [ecx + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        add     ebx, esi
        mov     esi, dword ptr [ebx]
        cmp     esi, ebx
        jz      L_6398
        /* __emit: 7-byte alignment NOP (LEA ESP,[ESP+0]); MSVC6 emits 3-byte 8D 24 24 */
        __emit 0x8D
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_6350:
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, ebp
        jz      L_636a
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, ebp
        jz      L_636a
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        call    ecx
        mov     dword ptr [esi + 0x8], ebp
    L_636a:
        mov     eax, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi], ebp
        mov     eax, dword ptr [g_10055050]
        push    esi
        push    eax
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_6350
    L_6390:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
    L_6398:
        inc     eax
        cmp     ax, word ptr [ecx]
        mov     dword ptr [esp + 0x10], eax
        jc      L_6336
        pop     edi
        pop     esi
        pop     ebx
    L_63a5:
        mov     dword ptr [ecx + 0x24], ebp
        pop     ebp
        pop     ecx
        ret     0xc
    }
}
